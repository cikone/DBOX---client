#include "receive_response.h"

ReceiveResponse::ReceiveResponse()
{

}

void ReceiveResponse::updateProcessState(GuiHandler &guiH_, QString &value)
{
    guiH_.setProgressBarValue("processState", value.toInt());
}

void ReceiveResponse::readCodeAndValue(QByteArray& receivedData, QString& code, QString& value) {

    code = receivedData.mid(0,5);

    int i = 5;
    int length = 0;
    while (receivedData[i] != '#' && receivedData[i] != '!') {
        length++;
        i++;
    }
    value = receivedData.mid(5,length);

    receivedData.remove(0, 5+length+1);
}

void ReceiveResponse::readMinutiaeData(QString value, ResponseExpert &resExp)
{
    int x, y, minutiae, probability, angle;

    int cnt = 0;
    int length = 0;

    while (value.length() > 0) {
        length++;
        if (value[length] == '?' || value[length] == '$') {
            cnt++;
            if (cnt == 1) x = value.mid(0, length).toInt();
            else if (cnt == 2) y = value.mid(0, length).toInt();
            else if (cnt == 3) minutiae = value.mid(0, length).toInt();
            else if (cnt == 4) probability = value.mid(0, length).toInt();
            else if (cnt == 5) {
                angle = value.mid(0, length).toInt();
                resExp.pushMinutiaeData(x, y, minutiae, probability, angle);
                cnt = 0;
            }
            value.remove(0, length+1);
            length = 0;
        }
    }

    MinutiaeMarker minMark;
    int cnEnding = 0, cnBifurcation = 0, nnEnding = 0, nnBifurcation = 0, nnFalseMinutiae = 0;

    minMark.countMinutiae(resExp, cnEnding, cnBifurcation, nnEnding, nnBifurcation, nnFalseMinutiae);
    resExp.setCnEnding(cnEnding);
    resExp.setCnBifurcation(cnBifurcation);
    resExp.setNnEnding(nnEnding);
    resExp.setNnBifurcation(nnBifurcation);
    resExp.setNnFalseMinutiae(nnFalseMinutiae);
}

cv::Mat ReceiveResponse::readImage(QByteArray& receivedData, int imgWidth, int imgHeight)
{
    char* tmpImg = (char*)calloc(imgWidth * imgHeight, sizeof(char));
    memcpy(tmpImg, receivedData.data(), imgWidth * imgHeight);
    cv::Mat img(imgWidth, imgHeight, CV_8UC1, tmpImg);

    receivedData.remove(0, imgWidth * imgHeight + 1);

    return img;
}

int ReceiveResponse::processIdentificationData(GuiHandler &guiH_, QByteArray& receivedData, ResponseIdentification &resId, bool &isResult)
{
    QString code;
    QString value;

    //  ---------------------------
    //  | IDSUC$ # IDNAM$$$$$$$ ! |
    //  ---------------------------

    while(receivedData.size() > 0) {
        readCodeAndValue(receivedData, code, value);
        if (code == "PRSTA") updateProcessState(guiH_, value);
        /*else if (code == "ERROR") //funkcia;*/
        else if (code == "IDSUC") {
            resId.setIdSuccess(value.toInt());
            //if (!value.toInt())
            if(value.toInt() == 1)
            {
                isResult = true;
            }
        }
        else if (code == "IDNAM") {
            resId.setIdName(value);
            //isResult = false;
        }
        else return 0;
    }
    receivedData.clear(); // doplnene
    return 1;
}

int ReceiveResponse::processVerifificationData(GuiHandler &guiH_, QByteArray& receivedData, ResponseVerification &resVer, bool &isResult)
{
    QString code;
    QString value;

    //  -----------------------
    //  | VESUC$ # VESCO$$$ ! |
    //  -----------------------

    while(receivedData.size() > 0) {
        readCodeAndValue(receivedData, code, value);
        if (code == "PRSTA") updateProcessState(guiH_, value);
        /*else if (code == "ERROR") //funkcia;*/
        else if (code == "VESUC") resVer.setVerified(value.toInt());
        else if (code == "VESCO") {
            resVer.setVerScore(value.toInt());
            isResult = true;
        }
        else return 0;
    }
    return 1;
}

int ReceiveResponse::processExpertData(GuiHandler &guiH_, QByteArray& receivedData, ResponseExpert &resExp, bool &isResult, bool &imgMaskLoaded, bool &imgGaborFilteredLoaded, bool &imgBinarizedLoaded, bool &imgSkeletonLoaded)
{
    QString code;
    QString value;
    cv::Mat tmpImg;

    //  ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //  | MASKW$$$ # MASKH$$$ # $$$imgMask$$$ # GABFW$$$ # GABFH$$$ # $$$imgGaborFiltered$$$ BINAW$$$ # BINAH$$$ # $$$imgBinarized$$$ SKELW$$$ # SKELH$$$ # $$$imgSkeleton$$$ # CNEND$$$ # CNBIF$$$ # NNEND$$$ # NNBIF$$$ ! |
    //  ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //qDebug() << receivedData[receivedData.length()-1];

     resExp.imgBinarized = 0;
     resExp.cnBifurcation = 0;
     resExp.cnEnding = 0;
     resExp.nnBifurcation = 0;
     resExp.nnEnding = 0;

     resExp.setImgMask(tmpImg);
     //resExp.imgMaskHeight = 0;
     //resExp.imgMaskWidth = 0;
     resExp.setImgMaskHeight(0);
     resExp.setImgMaskWidth(0);

     //resExp.imgGaborFiltered = NULL;
     resExp.setImgGaborFiltered(tmpImg);
     //resExp.imgGaborFilteredHeight = 0;
     //resExp.imgGaborFilteredWidth = 0;
     resExp.setImgGaborFilteredHeight(0);
     resExp.setImgBinarizedWidth(0);

     //resExp.imgBinarized = NULL;
     resExp.setImgBinarized(tmpImg);
     //resExp.imgBinarizedHeight = 0;
     //resExp.imgBinarizedWidth = 0;
     resExp.setImgBinarizedHeight(0);
     resExp.setImgBinarizedWidth(0);

     //resExp.imgSkeleton = NULL;
     resExp.setImgSkeleton(tmpImg);
     //resExp.imgSkeletonHeight = 0;
     //resExp.imgSkeletonWidth = 0;
     resExp.setImgSkeletonHeight(0);
     resExp.setImgSkeletonWidth(0);
     qDebug() << receivedData.toStdString().c_str() ;


    while(receivedData.size() > 0) {
        if (resExp.getImgMaskWidth() && resExp.getImgMaskHeight() && !imgMaskLoaded) {
            if ((resExp.getImgMaskWidth() * resExp.getImgMaskHeight()) <= receivedData.size()) {
                tmpImg = readImage(receivedData, resExp.getImgMaskHeight(), resExp.getImgMaskWidth());
                //cv::imshow("tmpImg", tmpImg);
                resExp.setImgMask(tmpImg);
                imgMaskLoaded = true;
            }
            else return -1;
        }
        else if (resExp.getImgGaborFilteredWidth() && resExp.getImgGaborFilteredHeight() && !imgGaborFilteredLoaded) {
            if ((resExp.getImgGaborFilteredWidth() * resExp.getImgGaborFilteredHeight()) <= receivedData.size()) {
                tmpImg = readImage(receivedData, resExp.getImgGaborFilteredHeight(), resExp.getImgGaborFilteredWidth());
                //cv::imshow("tmpImg", tmpImg);
                resExp.setImgGaborFiltered(tmpImg);
                imgGaborFilteredLoaded = true;
            }
            else return -1;
        }
        else if (resExp.getImgBinarizedWidth() && resExp.getImgBinarizedHeight() && !imgBinarizedLoaded) {
            if ((resExp.getImgBinarizedWidth() * resExp.getImgBinarizedHeight()) <= receivedData.size()) {
                tmpImg = readImage(receivedData, resExp.getImgBinarizedHeight(), resExp.getImgBinarizedWidth());
                //cv::imshow("tmpImg", tmpImg);
                resExp.setImgBinarized(tmpImg);
                imgBinarizedLoaded = true;
            }
            else return -1;
        }
        else if (resExp.getImgSkeletonWidth() && resExp.getImgSkeletonHeight() && !imgSkeletonLoaded) {
            if ((resExp.getImgSkeletonWidth() * resExp.getImgSkeletonHeight()) <= receivedData.size()) {
                tmpImg = readImage(receivedData, resExp.getImgSkeletonHeight(), resExp.getImgSkeletonWidth());
                //cv::imshow("tmpImg", tmpImg);
                resExp.setImgSkeleton(tmpImg);
                imgSkeletonLoaded = true;
            }
            else return -1;
        }
        else {
            readCodeAndValue(receivedData, code, value);

            if (code == "PRSTA") updateProcessState(guiH_, value);
            else if (code == "ERROR") guiH_.setLabelText("Result", value, "red");
            else if (code == "MASKW") resExp.setImgMaskWidth(value.toInt());
            else if (code == "MASKH") resExp.setImgMaskHeight(value.toInt());
            else if (code == "GABFW") resExp.setImgGaborFilteredWidth(value.toInt());
            else if (code == "GABFH") resExp.setImgGaborFilteredHeight(value.toInt());
            else if (code == "BINAW") resExp.setImgBinarizedWidth(value.toInt());
            else if (code == "BINAH") resExp.setImgBinarizedHeight(value.toInt());
            else if (code == "SKELW") resExp.setImgSkeletonWidth(value.toInt());
            else if (code == "SKELH") resExp.setImgSkeletonHeight(value.toInt());
            else if (code == "MINDA") {
                readMinutiaeData(value, resExp);
                isResult = true;
            }
            else return 0;
        }
    }
    receivedData.clear(); // doplnene


    return 1;
}
