#include "sensor_biometrika_livescan.h"

GuiHandler *guiHglob;
int stopCapt;

SensorBiometrikaLiveScan::SensorBiometrikaLiveScan(GuiHandler &guiH) :
    guiH_(guiH)
{

}

int liveCapture(int p, int q, unsigned char *image, unsigned short x, unsigned short y)
{
    QTransform imgRotate;
    imgRotate.rotate(180);
    QImage qImg = QImage((uchar*)image, x, y, QImage::Format_Grayscale8).transformed(imgRotate);
    guiHglob->changeImage("livePreview", qImg);
    guiHglob->setProgressBarValue("captureQuality", q);

    return stopCapt;
}

void SensorBiometrikaLiveScan::startLiveCapture()
{
    /*guiHglob = &guiH_;
    uchar liveMode = 2;
    float q;

    FxISO_Dev_SetConfig(&liveMode, NULL, NULL, NULL);
    FxISO_Fing_CallBackAcquireSupervised (&q, liveCapture);*/
}

void SensorBiometrikaLiveScan::run()
{
    stopCapt = 0;
    startLiveCapture();
}

void SensorBiometrikaLiveScan::stopCapturing()
{
    stopCapt = 1;
}
