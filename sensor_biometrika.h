#ifndef SENSOR_BIOMETRIKA_H
#define SENSOR_BIOMETRIKA_H

#include <QObject>
#include <QImage>
#include <QByteArray>
#include <QBuffer>
#include <QDebug>
#include <QThread>

#include "gui_handler.h"
#include "sensor_biometrika_livescan.h"

//#include "fxISOdll.h"

class SensorBiometrika : public QThread
{
    Q_OBJECT

public:
    SensorBiometrika(GuiHandler &guiH);

    int captureImage(QImage &qImg_, int mode);
    void stopCapturing();

private:
    GuiHandler &guiH_;
    SensorBiometrikaLiveScan *liveScanThread;

    //FxBuffer gImage;
    //BYTE *buffer;

    int err;

    int scannerInit();
    int scannerSingleCapture(QImage &qImg_);

};

#endif // SENSOR_BIOMETRIKA_H
