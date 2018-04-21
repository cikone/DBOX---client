#include "gui_handler.h"

GuiHandler::GuiHandler()
{

}

void GuiHandler::setLabelText(const QString labelName, const QString labelText, const QString color)
{
    emit setLabelTextSignal(labelName, labelText, color);
}

void GuiHandler::changeButtonColor(const QString buttonName, const QString color, const QString borderColor)
{
    emit changeButtonColorSignal(buttonName, color, borderColor);
}

void GuiHandler::changeButtonState(const QString buttonName, const bool enabled)
{
    emit changeButtonStateSignal(buttonName, enabled);
}

int GuiHandler::getRadioValue(const QString radioName)
{
    int value = getRadioValueSignal(radioName); //emit
    return value;
}

void GuiHandler::setRadioValue(const QString radioName, const bool checked)
{
    emit setRadioValueSignal(radioName, checked);
}

int GuiHandler::getFieldValue(const QString spinBoxName) // getNameValue
{
    int value = getFieldValueSignal(spinBoxName); //emit
    return value;
}

QString GuiHandler::getNameValue(const QString lineEditName) // getNameValue
{
    QString value = getNameValueSignal(lineEditName); //emit
    return value;
}

void GuiHandler::setProgressBarValue(const QString progressName, const int progressValue)
{
    emit setProgressBarValueSignal(progressName, progressValue);
}

void GuiHandler::changeImageView(const QString graphicsView)
{
    emit changeImageViewSignal(graphicsView);
}

void GuiHandler::changeMarkedImageView()
{
    emit changeMarkedImageViewSignal();
}

void GuiHandler::changeImage(const QString imageView, const QImage &qImage)
{
    emit changeImageSignal(imageView, qImage);
}

void GuiHandler::clearImageView(const QString imageView)
{
    emit clearImageViewSignal(imageView);
}


void GuiHandler::changeTab(const QString tabName)
{
    emit changeTabSignal(tabName);
}

void GuiHandler::setUnactiveTab(const QString tabName)
{
    emit changeTabSignal(tabName);
}
