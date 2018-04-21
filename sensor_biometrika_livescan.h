#ifndef SENSOR_BIOMETRIKA_LIVESCAN_H
#define SENSOR_BIOMETRIKA_LIVESCAN_H

#include <QObject>
#include <QImage>
#include <QByteArray>
#include <QBuffer>
#include <QDebug>
#include <QThread>

#include "gui_handler.h"

//#include "fxISOdll.h"

extern GuiHandler *guiHglob;
extern int stopCapt;

class SensorBiometrikaLiveScan : public QThread
{
    Q_OBJECT

public:
    SensorBiometrikaLiveScan(GuiHandler &guiH);
    void run();

    void stopCapturing();

private:
    GuiHandler &guiH_;

    void startLiveCapture();

};

#endif // SENSOR_BIOMETRIKA_LIVESCAN_H
