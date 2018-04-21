#include "sensor_biometrika.h"

SensorBiometrika::SensorBiometrika(GuiHandler &guiH) :
    guiH_(guiH)
{

}

int SensorBiometrika::scannerInit()
{
   /* this->err = FxISO_Init();
    this->err = FxISO_Mem_NewBuffer(&gImage);

    if (this->err) return -1;
    return 0;*/
}

int SensorBiometrika::scannerSingleCapture(QImage &qImg_)
{
   /* float q;

    this->err = FxISO_Fing_MuteAcquireAutomatic(&q, 50, 5, 1);
    if (this->err) {
        qDebug() << this->err;
        if (this->err == 112) return -2;
    }*/

    /*err = FxISO_Fing_AcquireSupervised(NULL, -1, -1, &imageQuality);
    if (err) qDebug() << err;*/

    /*this->err = FxISO_Fing_SaveToMemory(&gImage, NATIVE_RESOLUTION, NULL);
    if (this->err) {
        qDebug() << this->err;
    }
    if (this->gImage.sizeUsed == 0) return -3;

    if (!this->err)
    {
        this->buffer = (unsigned char *) malloc(gImage.sizeUsed*sizeof(unsigned char));
        this->err = FxISO_Mem_CopyBufferToArray(&gImage, buffer, gImage.sizeUsed);
        qImg_ = QImage((uchar*)this->buffer, sqrt(gImage.sizeUsed), sqrt(gImage.sizeUsed), QImage::Format_Grayscale8);
        FxISO_Mem_DeleteBuffer(&gImage);
    }

    FxISO_End();

    if (this->err) return -4;
    return 0;*/
}

void SensorBiometrika::stopCapturing()
{
    /*this->liveScanThread->stopCapturing();
    QThread::sleep (3);
    delete liveScanThread;
    FxISO_End();*/
}

int SensorBiometrika::captureImage(QImage &qImg_, int mode)
{
    /*this->err = scannerInit();
    if (mode == 1) {
        if (!this->err) this->err = scannerSingleCapture(qImg_);
    }
    else if (mode == 2) {
        this->liveScanThread = new SensorBiometrikaLiveScan(this->guiH_);

        this->liveScanThread->start();
        return 1;
    }

    return this->err;*/
}
