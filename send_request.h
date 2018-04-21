#ifndef SENDREQUEST_H
#define SENDREQUEST_H

#include <QByteArray>
#include <QTcpSocket>

#include "helper.h"
#include "../D-Box_Server/request.h"

class SendRequest
{
public:
    SendRequest();

    void sendData(const int &mode, Request &req, QTcpSocket &tcpSocket);
};

#endif // SENDREQUEST_H
