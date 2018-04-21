#ifndef SENZORSUPREMA_H
#define SENZORSUPREMA_H

typedef unsigned char BYTE;

#include <QDebug>
#include <QImage>

#include "helper.h"
#include "gui_handler.h"

#include "UFScanner.h"
#include "UFMatcher.h"

class SensorSuprema
{
public:
    SensorSuprema(GuiHandler &guiH);

    int captureImage(QImage &img, int mode);
    void stopCapturing();

    //getNset
    int getNWidth() const;
    void setNWidth(int value);
    int getNHeight() const;
    void setNHeight(int value);
    int getNQuality() const;
    void setNQuality(int value);

private:
    int scannerInit(int mode);
    int scannerCapture(BYTE** imageBuffer, int mode, int& nWidth, int& nHeight, int& nQuality);

    Helper h;

    HUFScanner scanner; // senzor BioMini Slim
    BYTE * imageBuffer;
    bool init;

    GuiHandler &guiH_;
    int nWidth, nHeight, nQuality;
};

#endif // SENZORSUPREMA_H
