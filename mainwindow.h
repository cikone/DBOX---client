#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>
#include <QLineEdit>
#include <QThread>

// OpenCV
#include "opencv2/opencv.hpp"

#include "helper.h"
#include "tcp_client.h"
#include "gui_handler.h"
#include "graphics_view_zoom.h"
#include "minutiae_marker.h"
#include "add_user.h"

#include "sensor_suprema.h"
#include "sensor_biometrika.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_connectToServer_button_clicked();
    void on_readFromScanner_comboBox_activated(const QString &arg1);
    void on_readFromFile_button_clicked();
    void on_sendToServer_button_clicked();
    void on_verification_radioButton_clicked();
    void on_identification_radioButton_clicked();
    void on_expert_radioButton_clicked();

    //GuiHandler slots
    void setLabelText(const QString labelName, const QString labelText, const QString color);
    void changeButtonColor(const QString buttonName, const QString color, const QString borderColor);
    void changeButtonState(const QString buttonName, const bool enabled);
    int getRadioValue(const QString radioName);
    void setRadioValue(const QString radioName, const bool checked);
    int getFieldValue(const QString fieldName);

    QString getNameValue(const QString fieldName);

    void setProgressBarValue(const QString progressName, const int progressValue);
    void changeImageView(const QString graphicsView);
    void changeMarkedImageView();
    void changeImage(const QString imageView, const QImage &qImage);
    void clearImageView(const QString graphicsView);
    void changeTab(const QString tabName);
    void setUnactiveTab(const QString tabName);

    void on_cnEnding_checkBox_clicked();
    void on_cnBifurcation_checkBox_clicked();
    void on_nnEnding_checkBox_clicked();
    void on_nnBifurcation_checkBox_clicked();
    void on_nnFalseMinutiae_checkBox_clicked();
    void on_probability_checkBox_clicked();
    void on_probability_spinBox_valueChanged(int arg1);
    void on_leftHand1_pushButton_clicked();
    void on_leftHand2_pushButton_clicked();
    void on_leftHand3_pushButton_clicked();
    void on_leftHand4_pushButton_clicked();
    void on_leftHand5_pushButton_clicked();
    void on_rightHand1_pushButton_clicked();
    void on_rightHand2_pushButton_clicked();
    void on_rightHand3_pushButton_clicked();
    void on_rightHand4_pushButton_clicked();
    void on_rightHand5_pushButton_clicked();
    void on_livePreview_comboBox_activated(const QString &arg1);
    void on_tabWidget_currentChanged(int index);
    void on_capture_pushButton_clicked();
    void on_clear_pushButton_clicked();
    void on_saveNewUser_pushButton_clicked();

    void on_pushButton_2_clicked();
    void on_connectToServer_button_2_clicked();
    void on_connectToServer_button_3_clicked();
    void on_comboBox_activated(const QString &arg1);
    void on_pushButton_3_clicked();
    void on_comboBox_2_activated(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *sceneInput, *sceneMask, *sceneGaborFiltered, *sceneBinarized, *sceneSkeleton, *sceneMarked, *sceneLogin, *sceneRegistration;
    QGraphicsScene *sceneFinger, *sceneLivePreview;
    GraphicsViewZoom *zoomInput, *zoomMask, *zoomGaborFiltered, *zoomBinarized, *zoomSkeleton, *zoomMarked, *zoomLogin, *zoomRegistration;
    TcpClient *tcpC;
    AddUser *addUser;
    SensorSuprema *sSuprema;
    SensorBiometrika *sBiometrika;
    GuiHandler guiH;

    QString name, surname, nameR, surnameR;
    bool captureSucces;

    bool addUserActive;
    bool isSupremaCapturing;
    bool isBiometrikaCapturing;

    void setParamsToDefault();
};

#endif // MAINWINDOW_H
