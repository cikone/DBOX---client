#ifndef GUIHANDLER_H
#define GUIHANDLER_H

#include <QDebug>
#include "opencv2/opencv.hpp"

class GuiHandler : public QObject
{
    Q_OBJECT

public:
    GuiHandler();
    void setLabelText(const QString labelName, const QString labelText, const QString color);
    void changeButtonColor(const QString buttonName, const QString color, const QString borderColor);
    void changeButtonState(const QString buttonName, const bool enabled);
    int getRadioValue(const QString radioName);
    void setRadioValue(const QString radioName, const bool checked);
    int getFieldValue(const QString fieldName);
    void setProgressBarValue(const QString progressName, const int progressValue);
    void changeImageView(const QString graphicsView);
    void changeImage(const QString imageView, const QImage &qImage);
    void changeMarkedImageView();
    void clearImageView(const QString imageView);
    void changeTab(const QString tabName);

    void setUnactiveTab(const QString tabName); // conect


    QString getNameValue(QString lineEditName);

signals:
    void setLabelTextSignal(const QString labelName, const QString labelText, const QString color);
    void changeButtonColorSignal(const QString buttonName, const QString color, const QString borderColor);
    void changeButtonStateSignal(const QString buttonName, const bool enabled);
    int getRadioValueSignal(const QString radioName);
    void setRadioValueSignal(const QString radioName, const bool checked);
    int getFieldValueSignal(const QString fieldName);
    void setProgressBarValueSignal(const QString progressName, const int progressValue);
    void changeImageViewSignal(const QString graphicsView);
    void changeImageSignal(const QString imageView, const QImage &qImage);
    void changeMarkedImageViewSignal();
    void clearImageViewSignal(const QString imageView);
    void changeTabSignal(const QString tabName);

    QString getNameValueSignal(const QString name);// doplnene

};

#endif // GUIHANDLER_H
