#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QSslSocket>
#include <QObject>
#include <QByteArray>

#include <ctime>

#include "../D-Box_Server/request.h"
#include "../D-Box_Server/response_identification.h"
#include "../D-Box_Server/response_verification.h"
#include "../D-Box_Server/response_expert.h"
#include "send_request.h"
#include "receive_response.h"
#include "gui_handler.h"

class TcpClient : public QObject
{
    Q_OBJECT

public:
    TcpClient(GuiHandler &guiH);

    int sendToServer();
    int sendToServerLogin();
    int sendToServerRegister();
    void connectToServer(int port, QString ip);
    void setReqParams();

    //getNset
    Request getReq() const;
    void setReq(const Request &value);
    void setReqWidth(const int &value);
    void setReqHeight(const int &value);
    void setReqImg(const cv::Mat &img);
    ResponseExpert getResExp() const;
    void setResExp(const ResponseExpert &value);
    bool getIsResult() const;
    void setIsResult(bool value);

signals:
    void error(QTcpSocket::SocketError socketerror);

private slots:
    void readFromServer();
    void encryptedChannel();
    void disconnectedState();
    void connectedState();
    void sslError(QList<QSslError> sslErrors);

private:
    QSslSocket clientSocket;
    GuiHandler &guiH_;

    Request req;
    ResponseIdentification resId;
    ResponseVerification resVer;
    ResponseExpert resExp;

    QByteArray receivedData;
    QString pathCert;

    int mode;

    bool isResult;
    bool imgMaskLoaded;
    bool imgGaborFilteredLoaded;
    bool imgBinarizedLoaded;
    bool imgSkeletonLoaded;

    clock_t timerBegin, timerEnd;
};

#endif // TCPCLIENT_H
