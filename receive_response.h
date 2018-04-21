#ifndef RECEIVERESPONSE_H
#define RECEIVERESPONSE_H

#include <QByteArray>
#include <QString>

#include "helper.h"
#include "../D-Box_Server/response_identification.h"
#include "../D-Box_Server/response_verification.h"
#include "../D-Box_Server/response_expert.h"
#include "gui_handler.h"
#include "minutiae_marker.h"

class ReceiveResponse
{
public:
    ReceiveResponse();
    int processIdentificationData(GuiHandler &guiH_, QByteArray& receivedData, ResponseIdentification &resId, bool &isResult);
    int processVerifificationData(GuiHandler &guiH_, QByteArray& receivedData, ResponseVerification &resVer, bool &isResult);
    int processExpertData(GuiHandler &guiH_, QByteArray& receivedData, ResponseExpert &resExp, bool &isResult, bool &imgMaskLoaded, bool &imgGaborFilteredLoaded, bool &imgBinarizedLoaded, bool &imgSkeletonLoaded);

private:
    void updateProcessState(GuiHandler &guiH_, QString &value);
    void readCodeAndValue(QByteArray& receivedData, QString& code, QString& value);
    void readMinutiaeData(QString value, ResponseExpert &resExp);
    cv::Mat readImage(QByteArray& receivedData, int imgWidth, int imgHeight);
};

#endif // RECEIVERESPONSE_H
