#ifndef ADD_USER_H
#define ADD_USER_H
#define STEP_NUM 5

#include <QObject>
#include <QVector>
#include <QImage>

#include <opencv2/opencv.hpp>
#include <gui_handler.h>
#include "helper.h"

class AddUser
{
public:
    AddUser();

    void changeImage(GuiHandler &guiH_, int fingerNum);
    void changeButtonColor(GuiHandler &guiH_);
    int captureFingerprint(GuiHandler &guiH_);
    void setToDefault(GuiHandler &guiH_);
    void removeFingerprint(GuiHandler &guiH_, int fingerNum);

    //getNset
    int getSelectedFinger() const;
    void setSelectedFinger(int value);
    QImage getQImgFp() const;
    void setQImgFp(const QImage &value);
    QVector<std::tuple<int, cv::Mat, int, int> > getFingersData() const;
    int getFpQuality() const;
    void setFpQuality(int value);
    bool getIsCapturing() const;
    void setIsCapturing(bool value);

private:
    Helper h;

    QVector<std::tuple<int, cv::Mat, int, int>> fingersData; //fingerNum, fingerprint, step, quality
    QVector<int> capturedFingers;
    QVector<QString> fingerNames;
    int selectedFinger;
    int actualStep;
    int fpQuality;
    QImage qImgFp;
    bool isCapturing;

    void setStepCheckboxes(GuiHandler &guiH_);
    void getActualStep();
};

#endif // ADD_USER_H
