#include "tcp_client.h"
#include <QMessageBox>

TcpClient::TcpClient(GuiHandler &guiH) :
    guiH_(guiH)
{
    this->isResult = false;
    this->imgMaskLoaded = false;
    this->imgGaborFilteredLoaded = false;
    this->imgBinarizedLoaded = false;
    this->imgSkeletonLoaded = false;
    this->mode = -1;

    this->pathCert = "./core/config/SSL/dbox-cert.pem";

    //connect(&clientSocket, SIGNAL(connected()), this, SLOT(connectedState()));
    connect(&clientSocket, SIGNAL(encrypted()), this, SLOT(encryptedChannel()));
    connect(&clientSocket, SIGNAL(sslErrors(QList<QSslError>)), this, SLOT(sslError(QList<QSslError>)));
    connect(&clientSocket, SIGNAL(disconnected()), this, SLOT(disconnectedState()));
    connect(&clientSocket, SIGNAL(readyRead()), this, SLOT(readFromServer()));
}

Request TcpClient::getReq() const
{
    return this->req;
}

void TcpClient::setReq(const Request &value)
{
    this->req = value;
}

void TcpClient::setReqWidth(const int &value)
{
    this->req.setWidth(value);
}

void TcpClient::setReqHeight(const int &value)
{
    this->req.setHeight(value);
}

void TcpClient::setReqImg(const cv::Mat &img)
{
    this->req.setImg(img);
}

void TcpClient::connectToServer(int port, QString ip)
{
    this->guiH_.setLabelText("ServerStatus", "SSL handshake in progress...", "black");
    this->clientSocket.connectToHostEncrypted(ip, port);
}

void TcpClient::sslError(QList<QSslError> sslErrors)
{
    this->clientSocket.ignoreSslErrors();
}

void TcpClient::setReqParams()
{
    //this->mode = this->guiH_.getRadioValue("mode");


    // vynulovat


    this->req.setVerificationId((this->guiH_.getFieldValue("verificationId")));
    this->req.setCpuGpuMode(this->guiH_.getRadioValue("cpuGpuMode"));
    this->req.setMaskMode(this->guiH_.getRadioValue("maskMode"));
    this->req.setMaskFilterSize(this->guiH_.getFieldValue("maskFilterSize"));
    this->req.setGaborBlock(this->guiH_.getFieldValue("gaborBlockSize"));
    this->req.setGaborThreshold(this->guiH_.getFieldValue("gaborThreshold"));
    this->req.setGaborLambda(this->guiH_.getFieldValue("gaborLambda"));
    this->req.setGaborSigma((this->guiH_.getFieldValue("gaborSigma")));
    this->req.setExtractionBlockSize(this->guiH_.getFieldValue("extractionBlockSize"));
    this->req.setExtractionBorderSize(this->guiH_.getFieldValue("extractionBorderSize"));

    if(this->mode == 1){
        this->req.setName(this->guiH_.getNameValue("lineEdit_2"));  // name

        this->req.setSurname(this->guiH_.getNameValue("lineEdit")); // surname
    }else if(this->mode == 2)
    {
        this->req.setName(this->guiH_.getNameValue("lineEdit_3"));  // nameRegister
        this->req.setSurname(this->guiH_.getNameValue("lineEdit_4")); // surnameRegister
    }
}

int TcpClient::sendToServer() // expert

{
    if(this->clientSocket.state() == QTcpSocket::ConnectedState){
        if (this->req.getWidth() != 0) {
            this->isResult = false;
            this->timerBegin = clock();
            this->mode = 3;
            setReqParams();

            SendRequest sendReq;
            sendReq.sendData(this->mode, this->req, this->clientSocket);
            return 0;
        }
        else {
            return -2;
        }
    }
    else {
        return -1;
    }
}

int TcpClient::sendToServerLogin()

{

    if(this->clientSocket.state() == QTcpSocket::ConnectedState){
        if (this->req.getWidth() != 0) {
            this->isResult = false;
            this->timerBegin = clock();
            this->mode = 1;  //this->mode = 1; // identifikacia
            setReqParams();
            SendRequest sendReq;
            sendReq.sendData(this->mode, this->req, this->clientSocket);

            return 0;
        }
        else {
            return -2;
        }
    }
    else {
        return -1;
    }
}

int TcpClient::sendToServerRegister()

{
    if(this->clientSocket.state() == QTcpSocket::ConnectedState){
        if (this->req.getWidth() != 0) {
            this->isResult = false;
            this->timerBegin = clock();
            this->mode = 2;  //this->mode = 2; // registracia
            setReqParams();
            SendRequest sendReq;
            sendReq.sendData(this->mode, this->req, this->clientSocket);
            return 0;
        }
        else {
            return -2;
        }
    }
    else {
        return -1;
    }
}

void TcpClient::readFromServer()
{

    if (this->clientSocket.bytesAvailable() > 0) {
        this->receivedData += this->clientSocket.readAll();

        if (receivedData[receivedData.size()-1]=='!') {
            ReceiveResponse rr;
            int processState;

            if (this->mode == 1){
                processState = rr.processIdentificationData(this->guiH_, this->receivedData, this->resId, this->isResult);
                this->receivedData.clear();
            }
            else if (this->mode == 2)
                processState = rr.processVerifificationData(this->guiH_, this->receivedData, this->resVer, this->isResult);
            else if (this->mode == 3){

                this->imgMaskLoaded = false;
                this->imgGaborFilteredLoaded = false;
                this->imgBinarizedLoaded = false;
                this->imgSkeletonLoaded = false;
                this->isResult = false;

                processState = rr.processExpertData(this->guiH_, this->receivedData, this->resExp, this->isResult, this->imgMaskLoaded, this->imgGaborFilteredLoaded, this->imgBinarizedLoaded, this->imgSkeletonLoaded);
                this->receivedData.clear();
            }

            if (processState == 1) {
                this->timerEnd = clock();

                if (this->mode == 1 && isResult) {

                    this->guiH_.changeTab("main_tab");

                }
                else if (this->mode == 2 && isResult) {
                    this->guiH_.setProgressBarValue("processState", 100);
                    if (resVer.getVerified()) this->guiH_.setLabelText("Result", "Success: person was verified, score: " + QString(resVer.getVerScore()), "green");
                    else this->guiH_.setLabelText("Result", "The person was not verified", "red");
                    this->guiH_.setLabelText("Time", "Time elapsed: " + QString::number(double(timerEnd - timerBegin) / CLOCKS_PER_SEC) + " s", "black");
                }
                else if (this->mode == 3 && isResult) {
                    this->guiH_.setProgressBarValue("processState", 100);
                    this->guiH_.changeImageView("mask");
                    this->guiH_.changeImageView("gaborFiltered");
                    this->guiH_.changeImageView("binarized");
                    this->guiH_.changeImageView("skeleton");
                    this->guiH_.changeMarkedImageView();
                    this->guiH_.setLabelText("BaseMinutiae", "CROSSING NUMBER:\n- Ending: " + QString::number(resExp.getCnEnding()) + "\n- Bifurcation: " + QString::number(resExp.getCnBifurcation()) + "\n\nNEURAL NETWORK:\n- Ending: " + QString::number(resExp.getNnEnding()) + "\n- Bifurcation: " + QString::number(resExp.getNnBifurcation()) + "\n- False Minutiae: " + QString::number(resExp.getNnFalseMinutiae()), "black");
                    this->guiH_.changeTab("expertResults");
                }
            }
            else if (processState == -1) {
                //If ! is not on the last place
                //continue reading
            }
            else {
                //this->guiH_.setGuiText("ServerLog", QString::number(socketDescriptor) + " - Failed to process incoming data", "black");
            }
        }
    }
}

void TcpClient::encryptedChannel()
{
    this->guiH_.setLabelText("ServerStatus", "Connected, channel is encrypted", "green");
}

void TcpClient::disconnectedState()
{
    this->guiH_.setLabelText("ServerStatus", "Disconnected", "red");
}

void TcpClient::connectedState()
{
    this->guiH_.setLabelText("ServerStatus", "Connected", "green");
}

bool TcpClient::getIsResult() const
{
    return isResult;
}

void TcpClient::setIsResult(bool value)
{
    isResult = value;
}

ResponseExpert TcpClient::getResExp() const
{
    return resExp;
}

void TcpClient::setResExp(const ResponseExpert &value)
{
    resExp = value;
}
