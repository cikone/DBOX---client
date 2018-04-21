#include "send_request.h"

SendRequest::SendRequest()
{

}

void SendRequest::sendData(const int &mode, Request &req, QTcpSocket &tcpSocket)
{
    //  --------------------------------------------------------------------------------------------------------------------------------------------------------
    //  | MPROC$ # (VERID$$$ #) WIDTH$$$ # HEIGH$$$ # $$$imgdata$$$ # MCGPU$ # MMASK$ # MSKFS$$$ # GABLS$$ # GATHR$$$ # GALAM$$ # GASIG$$ # EXBLO$$ # EXBOR$$ #NAMES$$ ! |
    //  --------------------------------------------------------------------------------------------------------------------------------------------------------

    //PREPARE DATA
    QByteArray divider = "#";
    QByteArray end = "!";

    QByteArray modeCode = "MPROC";
    QByteArray modeBa = Helper::IntToQByteArray(mode);

    QByteArray imgWidthCode = "WIDTH";
    QByteArray imgWidth = Helper::IntToQByteArray(req.getWidth());

    QByteArray imgHeightCode = "HEIGH";
    QByteArray imgHeight = Helper::IntToQByteArray(req.getHeight());

    QByteArray imgData((char*)(req.getImg().data), req.getWidth()*req.getHeight());

    QByteArray cpuGpuCode = "MCGPU";
    QByteArray cpuGpu = Helper::IntToQByteArray(req.getCpuGpuMode());

    QByteArray maskModeCode = "MMASK";
    QByteArray maskMode = Helper::IntToQByteArray(req.getMaskMode());

    QByteArray maskFilterSizeCode = "MSKFS";
    QByteArray maskFilterSize = Helper::IntToQByteArray(req.getMaskFilterSize());

    QByteArray gaborBlockSizeCode = "GABLS";
    QByteArray gaborBlockSize = Helper::IntToQByteArray(req.getGaborBlock());

    QByteArray gaborThresholdCode = "GATHR";
    QByteArray gaborThreshold = Helper::IntToQByteArray(req.getGaborThreshold());

    QByteArray gaborLambdaCode = "GALAM";
    QByteArray gaborLambda = Helper::IntToQByteArray(req.getGaborLambda());

    QByteArray gaborSigmaCode = "GASIG";
    QByteArray gaborSigma = Helper::IntToQByteArray(req.getGaborSigma());

    QByteArray extractionBlockSizeCode = "EXBLO";
    QByteArray extractionBlockSize = Helper::IntToQByteArray(req.getExtractionBlockSize());

    QByteArray extractionBorderSizeCode = "EXBOR";
    QByteArray extractionBorderSize = Helper::IntToQByteArray(req.getExtractionBorderSize());

    QByteArray nameCode = "NAMES";
    qDebug() << "MENO:" << req.getName();
    QByteArray name = Helper::QStringToQByteArray(req.getName());


    QByteArray surnameCode = "SURNA";
    qDebug() << "PRIEZVISKO:" << req.getSurname();
    QByteArray surname = Helper::QStringToQByteArray(req.getSurname());


    //SEND DATA
    //mode
    tcpSocket.write(modeCode);
    tcpSocket.write(modeBa);
    tcpSocket.write(divider);

    //verification id
    if (req.getVerificationId()) {
        QByteArray verificationIdCode = "VERID";
        QByteArray verificationId = Helper::IntToQByteArray(req.getVerificationId());

        tcpSocket.write(verificationIdCode);
        tcpSocket.write(verificationId);
        tcpSocket.write(divider);
    }

    //width
    tcpSocket.write(imgWidthCode);
    tcpSocket.write(imgWidth);
    tcpSocket.write(divider);

    //height
    tcpSocket.write(imgHeightCode);
    tcpSocket.write(imgHeight);
    tcpSocket.write(divider);

    //image
    tcpSocket.write(imgData);
    tcpSocket.write(divider);

    //cpu gpu mode
    tcpSocket.write(cpuGpuCode);
    tcpSocket.write(cpuGpu);
    tcpSocket.write(divider);

    //mask mode
    tcpSocket.write(maskModeCode);
    tcpSocket.write(maskMode);
    tcpSocket.write(divider);

    //mask filter size
    tcpSocket.write(maskFilterSizeCode);
    tcpSocket.write(maskFilterSize);
    tcpSocket.write(divider);

    //gabor block size
    tcpSocket.write(gaborBlockSizeCode);
    tcpSocket.write(gaborBlockSize);
    tcpSocket.write(divider);

    //gabor threshold
    tcpSocket.write(gaborThresholdCode);
    tcpSocket.write(gaborThreshold);
    tcpSocket.write(divider);

    //gabor threshold
    tcpSocket.write(gaborLambdaCode);
    tcpSocket.write(gaborLambda);
    tcpSocket.write(divider);

    //gabor threshold
    tcpSocket.write(gaborSigmaCode);
    tcpSocket.write(gaborSigma);
    tcpSocket.write(divider);

    //extraction block size
    tcpSocket.write(extractionBlockSizeCode);
    tcpSocket.write(extractionBlockSize);
    tcpSocket.write(divider);

    //extraction border size
    tcpSocket.write(extractionBorderSizeCode);
    tcpSocket.write(extractionBorderSize);
    tcpSocket.write(divider);

    //name of login/register person
    tcpSocket.write(nameCode);
    tcpSocket.write(name);
    tcpSocket.write(divider);

    //surname of login/register person
    tcpSocket.write(surnameCode);
    tcpSocket.write(surname);
    tcpSocket.write(end);
}
