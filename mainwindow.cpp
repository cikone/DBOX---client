#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->ui->setupUi(this);
    this->tcpC = new TcpClient(this->guiH);
    this->sceneInput = new QGraphicsScene;
    this->sceneMask = new QGraphicsScene;
    this->sceneGaborFiltered = new QGraphicsScene;
    this->sceneBinarized = new QGraphicsScene;
    this->sceneSkeleton = new QGraphicsScene;
    this->sceneMarked = new QGraphicsScene;
    this->sceneFinger = new QGraphicsScene;
    this->sceneLivePreview = new QGraphicsScene;
    this->sceneLogin = new QGraphicsScene;
    this->sceneRegistration = new QGraphicsScene;


    this->ui->identification_radioButton->setDisabled(true);
    this->ui->verification_radioButton->setDisabled(true);
    this->ui->expert_radioButton->setChecked(false);


    this->name = "";
    this->surname = "";
    this->nameR = "";
    this->surnameR = "";
    this->captureSucces = false;


    this->addUserActive = false;
    this->isSupremaCapturing = false;
    this->isBiometrikaCapturing = false;

    this->ui->step1_checkBox->setAttribute(Qt::WA_TransparentForMouseEvents);
    this->ui->step1_checkBox->setFocusPolicy(Qt::NoFocus);
    this->ui->step2_checkBox->setAttribute(Qt::WA_TransparentForMouseEvents);
    this->ui->step2_checkBox->setFocusPolicy(Qt::NoFocus);
    this->ui->step3_checkBox->setAttribute(Qt::WA_TransparentForMouseEvents);
    this->ui->step3_checkBox->setFocusPolicy(Qt::NoFocus);
    this->ui->step4_checkBox->setAttribute(Qt::WA_TransparentForMouseEvents);
    this->ui->step4_checkBox->setFocusPolicy(Qt::NoFocus);
    this->ui->step5_checkBox->setAttribute(Qt::WA_TransparentForMouseEvents);
    this->ui->step5_checkBox->setFocusPolicy(Qt::NoFocus);

    this->zoomLogin = new GraphicsViewZoom(this->ui->graphicsView);
    zoomLogin->setModifiers(Qt::NoModifier);
    this->ui->graphicsView->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);

    this->zoomRegistration = new GraphicsViewZoom(this->ui->graphicsView_2);
    zoomRegistration->setModifiers(Qt::NoModifier);
    this->ui->graphicsView_2->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);

    this->zoomInput = new GraphicsViewZoom(this->ui->inputImg_view);
    zoomInput->setModifiers(Qt::NoModifier);
    this->ui->inputImg_view->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);

    this->zoomMask = new GraphicsViewZoom(this->ui->mask_view);
    zoomMask->setModifiers(Qt::NoModifier);
    this->ui->mask_view->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);

    this->zoomGaborFiltered = new GraphicsViewZoom(this->ui->gaborFiltered_view);
    zoomGaborFiltered->setModifiers(Qt::NoModifier);
    this->ui->gaborFiltered_view->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);

    this->zoomBinarized = new GraphicsViewZoom(this->ui->binarized_view);
    zoomBinarized->setModifiers(Qt::NoModifier);
    this->ui->binarized_view->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);

    this->zoomSkeleton = new GraphicsViewZoom(this->ui->skeleton_view);
    zoomSkeleton->setModifiers(Qt::NoModifier);
    this->ui->skeleton_view->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);

    this->zoomMarked = new GraphicsViewZoom(this->ui->marked_view);
    zoomMarked->setModifiers(Qt::NoModifier);
    this->ui->marked_view->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);

    this->ui->imageInfo_groupBox->setVisible(false);

    //this->ui->tabWidget->setTabEnabled(1, false); // registration
    //this->ui->tabWidget->setTabEnabled(0, false); // login

    this->ui->tabWidget->removeTab(4);

    /*this->ui->tabWidget->setTabEnabled(2, false);
    this->ui->tabWidget->setTabEnabled(3, false);
    this->ui->tabWidget->setTabEnabled(4, false);*/

    this->ui->verification_lineEdit->setValidator(new QIntValidator(1, 10000, this)); //for only numbers
    this->ui->gaborBlockSize_spinBox->findChild<QLineEdit*>()->setReadOnly(true); //for only odd numbers

    connect(&guiH, SIGNAL(setLabelTextSignal(QString, QString, QString)), this, SLOT(setLabelText(QString, QString, QString)));
    connect(&guiH, SIGNAL(changeButtonColorSignal(QString, QString, QString)), this, SLOT(changeButtonColor(QString, QString, QString)));
    connect(&guiH, SIGNAL(changeButtonStateSignal(QString, bool)), this, SLOT(changeButtonState(QString, bool)));
    connect(&guiH, SIGNAL(getRadioValueSignal(QString)), this, SLOT(getRadioValue(QString)));
    connect(&guiH, SIGNAL(setRadioValueSignal(QString, bool)), this, SLOT(setRadioValue(QString, bool)));
    connect(&guiH, SIGNAL(getFieldValueSignal(QString)), this, SLOT(getFieldValue(QString)));

    connect(&guiH, SIGNAL(getNameValueSignal(QString)), this, SLOT(getNameValue(QString)));

    connect(&guiH, SIGNAL(setProgressBarValueSignal(QString, int)), this, SLOT(setProgressBarValue(QString, int)));
    connect(&guiH, SIGNAL(changeImageViewSignal(QString)), this, SLOT(changeImageView(QString)));
    connect(&guiH, SIGNAL(changeMarkedImageViewSignal()), this, SLOT(changeMarkedImageView()));
    connect(&guiH, SIGNAL(changeImageSignal(QString, QImage)), this, SLOT(changeImage(QString, QImage)));
    connect(&guiH, SIGNAL(clearImageViewSignal(QString)), this, SLOT(clearImageView(QString)));
    connect(&guiH, SIGNAL(changeTabSignal(QString)), this, SLOT(changeTab(QString)));
    connect(&guiH, SIGNAL(setUnactiveTabSignal(QString)), this, SLOT(setUnactiveTab(QString)));



}

MainWindow::~MainWindow()
{
    delete tcpC;
    delete zoomInput, zoomMask, zoomGaborFiltered, zoomBinarized, zoomSkeleton, zoomMarked;
    delete sceneInput, sceneMask, sceneGaborFiltered, sceneBinarized, sceneSkeleton, sceneMarked, sceneFinger;
    delete ui;
    if (addUserActive) {
        delete addUser;
    }
    if (isSupremaCapturing) {
        this->sSuprema->stopCapturing();
        QThread::sleep (1);
        delete sSuprema;
        isSupremaCapturing = false;
    }
    if (isBiometrikaCapturing) {
        //qDebug() << "khm";
        this->sBiometrika->stopCapturing();
        QThread::sleep (1);
        delete sBiometrika;
        isBiometrikaCapturing = false;
    }
}

void MainWindow::setParamsToDefault()
{
    this->ui->gpu_radioButton->setChecked(true);
    this->ui->cpu_radioButton->setChecked(false);
    this->ui->maskStandard_radioButton->setChecked(true);
    this->ui->maskNeural_radioButton->setChecked(false);
    this->ui->maskFilterSize_spinBox->setValue(13);
    this->ui->gaborBlockSize_spinBox->setValue(17);
    this->ui->gaborThreshold_spinBox->setValue(125);
    this->ui->gaborLambda_spinBox->setValue(8);
    this->ui->gaborSigma_spinBox->setValue(4);
    this->ui->extractionBlock_spinBox->setValue(19);
    this->ui->extractionBorder_spinBox->setValue(5);
    this->ui->progressBar->setValue(0);
    QMessageBox::warning(this, "Information", " Parameters has been set to default!");
}


//GUI HANDLER SLOTS BEGIN

void MainWindow::setLabelText(const QString labelName, const QString labelText, const QString color)
{
    if (labelName == "ServerStatus") {
        this->ui->serverStatus_label->setStyleSheet("QLabel {color : " + color + ";}");
        this->ui->serverStatus_label->setText(labelText);

        this->ui->serverStatus_label_2->setStyleSheet("QLabel {color : " + color + ";}");
        this->ui->serverStatus_label_2->setText(labelText);

        this->ui->serverStatus_label_3->setStyleSheet("QLabel {color : " + color + ";}");
        this->ui->serverStatus_label_3->setText(labelText);

        //this->ui->ser
    }
    else if (labelName == "Result") {
        //this->ui->result_label->setTextFormat(Qt::RichText);
        this->ui->result_label->setStyleSheet("QLabel {color : " + color + "; font-weight: bold;}");
        this->ui->result_label->setText(labelText);
    }
    else if (labelName == "Time") {
        this->ui->time_label->setStyleSheet("QLabel {color : " + color + ";}");
        this->ui->time_label->setText(labelText);
    }
    else if (labelName == "BaseMinutiae") {
        this->ui->baseMinutiae_textBrowser->setText(labelText);
    }
    else if (labelName == "ComplexMinutiae") {
        this->ui->complexMinutiae_textBrowser->setText(labelText);
    }
    else if (labelName == "addUserInstructions") {
        this->ui->addUserInstructions_label->setStyleSheet("QLabel {color : " + color + ";}");
        this->ui->addUserInstructions_label->setText(labelText);
    }
}

void MainWindow::changeButtonColor(const QString buttonName, const QString color, const QString borderColor)
{
    if (buttonName == "finger1") this->ui->leftHand1_pushButton->setStyleSheet("QPushButton {background-color: " + color + "; border: 1px solid " + borderColor + ";}");
    else if (buttonName == "finger2") this->ui->leftHand2_pushButton->setStyleSheet("QPushButton {background-color: " + color + "; border: 1px solid " + borderColor + ";}");
    else if (buttonName == "finger3") this->ui->leftHand3_pushButton->setStyleSheet("QPushButton {background-color: " + color + "; border: 1px solid " + borderColor + ";}");
    else if (buttonName == "finger4") this->ui->leftHand4_pushButton->setStyleSheet("QPushButton {background-color: " + color + "; border: 1px solid " + borderColor + ";}");
    else if (buttonName == "finger5") this->ui->leftHand5_pushButton->setStyleSheet("QPushButton {background-color: " + color + "; border: 1px solid " + borderColor + ";}");
    else if (buttonName == "finger6") this->ui->rightHand1_pushButton->setStyleSheet("QPushButton {background-color: " + color + "; border: 1px solid " + borderColor + ";}");
    else if (buttonName == "finger7") this->ui->rightHand2_pushButton->setStyleSheet("QPushButton {background-color: " + color + "; border: 1px solid " + borderColor + ";}");
    else if (buttonName == "finger8") this->ui->rightHand3_pushButton->setStyleSheet("QPushButton {background-color: " + color + "; border: 1px solid " + borderColor + ";}");
    else if (buttonName == "finger9") this->ui->rightHand4_pushButton->setStyleSheet("QPushButton {background-color: " + color + "; border: 1px solid " + borderColor + ";}");
    else if (buttonName == "finger10") this->ui->rightHand5_pushButton->setStyleSheet("QPushButton {background-color: " + color + "; border: 1px solid " + borderColor + ";}");
}

void MainWindow::changeButtonState(const QString buttonName, const bool enabled)
{
    if (buttonName == "capture") this->ui->capture_pushButton->setEnabled(enabled);
    else if (buttonName == "clear") this->ui->clear_pushButton->setEnabled(enabled);
    else if (buttonName == "saveUser") this->ui->output_groupBox->setEnabled(enabled);
}

int MainWindow::getRadioValue(const QString radioName)
{
    if (radioName == "mode") {
        if (this->ui->identification_radioButton->isChecked() == true) return 1;
        else if (this->ui->verification_radioButton->isChecked() == true) return 2;
        else if (this->ui->expert_radioButton->isChecked() == true) return 3;
    }
    else if (radioName == "cpuGpuMode") {
        if (this->ui->cpu_radioButton->isChecked() == true) return 1;
        else if (this->ui->gpu_radioButton->isChecked() == true) return 2;
    }
    else if (radioName == "maskMode") {
        if (this->ui->maskStandard_radioButton->isChecked() == true) return 1;
        else if (this->ui->maskNeural_radioButton->isChecked() == true) return 2;
    }
    else if (radioName == "cnEnding") {
        if (this->ui->cnEnding_checkBox->isChecked() == true) return 1;
        else return 0;
    }
    else if (radioName == "cnBifurcation") {
        if (this->ui->cnBifurcation_checkBox->isChecked() == true) return 1;
        else return 0;
    }
    else if (radioName == "nnEnding") {
        if (this->ui->nnEnding_checkBox->isChecked() == true) return 1;
        else return 0;
    }
    else if (radioName == "nnBifurcation") {
        if (this->ui->nnBifurcation_checkBox->isChecked() == true) return 1;
        else return 0;
    }
    else if (radioName == "nnFalseMinutiae") {
        if (this->ui->nnFalseMinutiae_checkBox->isChecked() == true) return 1;
        else return 0;
    }
    else if (radioName == "probability") {
        if (this->ui->probability_checkBox->isChecked() == true) return 1;
        else return 0;
    }

    return -1;
}

QString MainWindow::getNameValue(const QString radioName)
{
    if (radioName == "lineEdit_2") {
        return ui->lineEdit_2->text(); // name
    }else if (radioName == "lineEdit") {
        return ui->lineEdit->text(); // surname
    }else if (radioName == "lineEdit_3") {
        return ui->lineEdit_3->text(); // nameRegister
    }else if (radioName == "lineEdit_4") {
        return ui->lineEdit_4->text(); // surnameRegister
    }else return "";
}

void MainWindow::setRadioValue(const QString radioName, const bool checked)
{
    if (radioName == "step1") this->ui->step1_checkBox->setChecked(checked);
    else if (radioName == "step2") this->ui->step2_checkBox->setChecked(checked);
    else if (radioName == "step3") this->ui->step3_checkBox->setChecked(checked);
    else if (radioName == "step4") this->ui->step4_checkBox->setChecked(checked);
    else if (radioName == "step5") this->ui->step5_checkBox->setChecked(checked);
}

int MainWindow::getFieldValue(const QString fieldName)
{
    if (fieldName == "verificationId") return this->ui->verification_lineEdit->text().toInt();
    else if (fieldName == "maskFilterSize") return this->ui->maskFilterSize_spinBox->value();
    else if (fieldName == "gaborBlockSize") return this->ui->gaborBlockSize_spinBox->value();
    else if (fieldName == "gaborThreshold") return this->ui->gaborThreshold_spinBox->value();
    else if (fieldName == "gaborLambda") return this->ui->gaborLambda_spinBox->value();
    else if (fieldName == "gaborSigma") return this->ui->gaborSigma_spinBox->value();
    else if (fieldName == "extractionBlockSize") return this->ui->extractionBlock_spinBox->value();
    else if (fieldName == "extractionBorderSize") return this->ui->extractionBorder_spinBox->value();
    else if (fieldName == "probability") return this->ui->probability_spinBox->value();
    //else if (fieldName == "lineEdit_2") return this->ui->lineEdit_2->text(); // name
    //else if (fieldName == "lineEdit") return this->ui->lineEdit->text(); // surname

    return -1;
}

void MainWindow::setProgressBarValue(const QString progressName, const int progressValue)
{
    qApp->processEvents();
    if (progressName == "processState") {
        this->ui->progressBar->setValue(progressValue);
    }
    else if (progressName == "captureQuality") {
        this->ui->quality_progressBar->setValue(progressValue);
        this->addUser->setFpQuality(progressValue);
    }
}

void MainWindow::changeImageView(const QString graphicsView)
{
    this->sceneInput->clear();
    if (graphicsView == "input") {
        QImage qImg = Helper::Mat2QImage(this->tcpC->getReq().getImg(), QImage::Format_Grayscale8);
        this->sceneInput->addPixmap(QPixmap::fromImage(qImg).scaledToWidth(this->ui->inputImg_view->size().width()));
        this->ui->inputImg_view->setAlignment(Qt::AlignCenter | Qt::AlignHCenter);
        this->ui->inputImg_view->setScene(this->sceneInput);
    }
    else if (graphicsView == "mask") {
        QImage qImg = Helper::Mat2QImage(this->tcpC->getResExp().getImgMask(), QImage::Format_Grayscale8);
        this->sceneMask->addPixmap(QPixmap::fromImage(qImg)/*.scaledToHeight(this->ui->mask_view->size().height())*/);
        this->ui->mask_view->setScene(this->sceneMask);
    }
    else if (graphicsView == "gaborFiltered") {
        QImage qImg = Helper::Mat2QImage(this->tcpC->getResExp().getImgGaborFiltered(), QImage::Format_Grayscale8);
        this->sceneGaborFiltered->addPixmap(QPixmap::fromImage(qImg)/*.scaledToHeight(this->ui->gaborFiltered_view->size().height())*/);
        this->ui->gaborFiltered_view->setScene(this->sceneGaborFiltered);
    }
    else if (graphicsView == "binarized") {
        QImage qImg = Helper::Mat2QImage(this->tcpC->getResExp().getImgBinarized(), QImage::Format_Grayscale8);
        this->sceneBinarized->addPixmap(QPixmap::fromImage(qImg)/*.scaledToHeight(this->ui->binarized_view->size().height())*/);
        this->ui->binarized_view->setScene(this->sceneBinarized);
    }
    else if (graphicsView == "skeleton") {
        QImage qImg = Helper::Mat2QImage(this->tcpC->getResExp().getImgSkeleton(), QImage::Format_Grayscale8);
        this->sceneSkeleton->addPixmap(QPixmap::fromImage(qImg)/*.scaledToHeight(this->ui->skeleton_view->size().height())*/);
        this->ui->skeleton_view->setScene(this->sceneSkeleton);
    }else if (graphicsView == "graphicsView") {
        QImage qImg = Helper::Mat2QImage(this->tcpC->getReq().getImg(), QImage::Format_Grayscale8);
        this->sceneLogin->addPixmap(QPixmap::fromImage(qImg).scaledToWidth(this->ui->graphicsView->size().width()));
        this->ui->graphicsView->setAlignment(Qt::AlignCenter | Qt::AlignHCenter);
        this->ui->graphicsView->setScene(this->sceneLogin);
    }else if (graphicsView == "graphicsView_2") {
        QImage qImg = Helper::Mat2QImage(this->tcpC->getReq().getImg(), QImage::Format_Grayscale8);
        this->sceneRegistration->addPixmap(QPixmap::fromImage(qImg).scaledToWidth(this->ui->graphicsView_2->size().width()));
        this->ui->graphicsView_2->setAlignment(Qt::AlignCenter | Qt::AlignHCenter);
        this->ui->graphicsView_2->setScene(this->sceneRegistration);
    }
}

void MainWindow::clearImageView(const QString graphicsView)
{
    if (graphicsView == "livePreview") {
        this->sceneLivePreview->clear();
    }
}

void MainWindow::changeMarkedImageView()
{
    MinutiaeMarker minMar;

    QImage qImg = Helper::Mat2QImage(minMar.getImgMarked(this->guiH, this->tcpC->getReq(), this->tcpC->getResExp()), QImage::Format_RGB888);
    this->sceneMarked->addPixmap(QPixmap::fromImage(qImg)/*.scaledToHeight(this->ui->marked_view->size().height())*/);
    this->ui->marked_view->setScene(this->sceneMarked);
}

void MainWindow::changeImage(const QString imageView, const QImage &qImage)
{
    if (imageView == "finger") {
        this->sceneFinger->clear();
        this->sceneFinger->addPixmap(QPixmap::fromImage(qImage));
        this->ui->fingerHelp_view->setScene(this->sceneFinger);
    }
    if (imageView == "livePreview") {
        this->sceneLivePreview->clear();
        this->sceneLivePreview->addPixmap(QPixmap::fromImage(qImage).scaledToWidth(this->ui->livePreview_view->size().width()));
        this->ui->livePreview_view->setScene(this->sceneLivePreview);
        this->addUser->setQImgFp(qImage);
    }
}

void MainWindow::changeTab(const QString tabName)
{
    if (tabName == "expertResults") { // main_tab

            //this->ui->tabWidget->setTabEnabled(1, true);
            this->ui->tabWidget->setCurrentIndex(3);
     }else if (tabName == "main_tab") { // main_tab

            this->ui->tabWidget->setCurrentIndex(2);
            this->ui->tabWidget->setTabEnabled(0, false);
            this->ui->tabWidget->setTabEnabled(1, false);


            QString meno = this->ui->lineEdit_2->text();
            QString prie = this->ui->lineEdit->text();



            this->ui->label->setStyleSheet("QLabel {color :  red ;}");
            this->ui->label->setText("Person logged in: " + meno + " " + prie);
            this->ui->tabWidget->setTabEnabled(2, true);
            this->ui->tabWidget->setTabEnabled(3, true);
            QMessageBox::warning(this, "Warning", " You have been identified!");
     }
}


void MainWindow::setUnactiveTab(const QString tabName)
{
    if (tabName == "main_tab") { // main_tab

            //this->ui->tabWidget->setTabEnabled(1, true);
            this->ui->tabWidget->setTabEnabled(2, true);


     }else if (tabName == "expertResults_tab") { // main_tab
            this->ui->tabWidget->setTabEnabled(3, true);
     }
}



//GUI HANDLER SLOTS END


void MainWindow::on_connectToServer_button_clicked()
{
    this->tcpC->connectToServer(5556, "localhost");
}

void MainWindow::on_readFromFile_button_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("(*.png *.jpg *.bmp *.tif);;All files (*.*)"));
    cv::Mat inputImg = cv::imread(imagePath.toStdString().c_str(), CV_8UC1);
    this->tcpC->setReqImg(inputImg);
    this->tcpC->setReqWidth(inputImg.cols);
    this->tcpC->setReqHeight(inputImg.rows);


    if (!inputImg.data) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::warning(this, "Warning", "Failed to load image!");
    }
    else {
        this->ui->progressBar->setValue(0);
        changeImageView("input");
        this->ui->imageName_label->setText(QFileInfo(imagePath).baseName());
        this->ui->imageType_label->setText("Type: " + QFileInfo(imagePath).suffix());
        this->ui->imageWidth_label->setText("Width: " + QString::number(inputImg.cols) + " px");
        this->ui->imageHeight_label->setText("Height: " + QString::number(inputImg.rows) + " px");
        this->ui->imageInfo_groupBox->setVisible(true);

        this->tcpC->setIsResult(false);
    }
}

void MainWindow::on_readFromScanner_comboBox_activated(const QString &arg1)
{
    if (arg1 == "Suprema BioMini Slim") {
        QImage qCapturedImg;
        SensorSuprema ss(this->guiH);

        int scanStatus = ss.captureImage(qCapturedImg, 1);

        switch(scanStatus) {
        case -1:
            QMessageBox::critical(this, "Error", "The selected scanner is not available");
            this->ui->readFromScanner_comboBox->setCurrentIndex(0);
            break;
        case -2:
            QMessageBox::critical(this, "Error", "Failed to capture image");
            this->ui->readFromScanner_comboBox->setCurrentIndex(0);
            break;
        case 1:
            cv::Mat capturedImg = Helper::QImage2Mat(qCapturedImg, cv::IMREAD_GRAYSCALE);
            this->ui->progressBar->setValue(0);
            this->tcpC->setReqImg(capturedImg);
            this->tcpC->setReqWidth(capturedImg.cols);
            this->tcpC->setReqHeight(capturedImg.rows);

            QString imageView = "input";
            changeImageView(imageView);

            this->ui->imageName_label->setText("Suprema FP");
            this->ui->imageType_label->setText("Type: raw");
            this->ui->imageWidth_label->setText("Width: " + QString::number(capturedImg.cols) + " px");
            this->ui->imageHeight_label->setText("Height: " + QString::number(capturedImg.rows) + " px");
            this->ui->imageInfo_groupBox->setVisible(true);

            this->tcpC->setIsResult(false);
            break;
        }
    }
    else if (arg1 == "Biometrika HiScan-PRO") {
        QImage qCapturedImg;
        SensorBiometrika sb(this->guiH);

        int scanStatus = sb.captureImage(qCapturedImg, 1);

        switch(scanStatus) {
        case -1:
            QMessageBox::critical(this, "Error", "Error during scanner initialization");
            this->ui->readFromScanner_comboBox->setCurrentIndex(0);
            break;
        case -2:
            QMessageBox::critical(this, "Error", "The selected scanner is not available");
            this->ui->readFromScanner_comboBox->setCurrentIndex(0);
            break;
        case -3:
            QMessageBox::warning(this, "Warning", "You need to insert your finger on the scanner");
            this->ui->readFromScanner_comboBox->setCurrentIndex(0);
            break;
        case -4:
            QMessageBox::critical(this, "Error", "Memory error during fingerprint capturing");
            this->ui->readFromScanner_comboBox->setCurrentIndex(0);
            break;
        case 0:
            cv::Mat capturedImg = Helper::QImage2Mat(qCapturedImg, cv::IMREAD_GRAYSCALE);
            this->ui->progressBar->setValue(0);
            this->tcpC->setReqImg(capturedImg);
            this->tcpC->setReqWidth(capturedImg.cols);
            this->tcpC->setReqHeight(capturedImg.rows);

            QString imageView = "input";
            changeImageView(imageView);

            this->ui->imageName_label->setText("Biometrika FP");
            this->ui->imageType_label->setText("Type: raw");
            this->ui->imageWidth_label->setText("Width: " + QString::number(capturedImg.cols) + " px");
            this->ui->imageHeight_label->setText("Height: " + QString::number(capturedImg.rows) + " px");
            this->ui->imageInfo_groupBox->setVisible(true);

            this->tcpC->setIsResult(false);
            break;
        }
    }
}

void MainWindow::on_sendToServer_button_clicked()
{

    //clearParameters();
    // *sceneMask, *sceneGaborFiltered, *sceneBinarized, *sceneSkeleton,
    this->ui->result_label->clear();
    this->sceneMask->clear();
    this->sceneGaborFiltered->clear();
    this->sceneBinarized->clear();
    this->sceneSkeleton->clear();
    this->sceneMarked->clear();

    if (!this->tcpC->getIsResult()) {
        this->ui->progressBar->setValue(0);
        int sendStatus = this->tcpC->sendToServer();

        switch(sendStatus) {
        case -1:
            QMessageBox::warning(this, "Warning", "There is no connection to the server");
            break;
        case -2:
            QMessageBox::warning(this, "Warning", "There is no image to send");
            break;
        }
    }
    else {
        QMessageBox::warning(this, "Warning", "You have to wait until previous request is processed");
    }
}

void MainWindow::on_identification_radioButton_clicked()
{
    this->ui->expert_groupBox->setDisabled(true);
    this->ui->verification_label->setDisabled(true);
    this->ui->verification_lineEdit->setDisabled(true);
    setParamsToDefault();
}

void MainWindow::on_verification_radioButton_clicked()
{
    this->ui->expert_groupBox->setDisabled(true);
    this->ui->verification_label->setDisabled(false);
    this->ui->verification_lineEdit->setDisabled(false);
    setParamsToDefault();
}

void MainWindow::on_expert_radioButton_clicked()
{
    this->ui->expert_groupBox->setDisabled(false);
    this->ui->verification_label->setDisabled(true);
    this->ui->verification_lineEdit->setDisabled(true);
}

void MainWindow::on_cnEnding_checkBox_clicked()
{
    changeMarkedImageView();
}

void MainWindow::on_cnBifurcation_checkBox_clicked()
{
    changeMarkedImageView();
}

void MainWindow::on_nnEnding_checkBox_clicked()
{
    changeMarkedImageView();
}

void MainWindow::on_nnBifurcation_checkBox_clicked()
{
    changeMarkedImageView();
}

void MainWindow::on_nnFalseMinutiae_checkBox_clicked()
{
    changeMarkedImageView();
}

void MainWindow::on_probability_checkBox_clicked()
{
    changeMarkedImageView();
}

void MainWindow::on_probability_spinBox_valueChanged(int arg1)
{
    if (this->ui->probability_checkBox->isChecked()) changeMarkedImageView();
}


//ADD NEW USER TAB

void MainWindow::on_leftHand1_pushButton_clicked()
{
    this->addUser->setSelectedFinger(1);
    this->addUser->changeImage(this->guiH, 1);
    this->addUser->changeButtonColor(this->guiH);
}

void MainWindow::on_leftHand2_pushButton_clicked()
{
    this->addUser->setSelectedFinger(2);
    this->addUser->changeImage(this->guiH, 2);
    this->addUser->changeButtonColor(this->guiH);
}

void MainWindow::on_leftHand3_pushButton_clicked()
{
    this->addUser->setSelectedFinger(3);
    this->addUser->changeImage(this->guiH, 3);
    this->addUser->changeButtonColor(this->guiH);
}

void MainWindow::on_leftHand4_pushButton_clicked()
{
    this->addUser->setSelectedFinger(4);
    this->addUser->changeImage(this->guiH, 4);
    this->addUser->changeButtonColor(this->guiH);
}

void MainWindow::on_leftHand5_pushButton_clicked()
{
    this->addUser->setSelectedFinger(5);
    this->addUser->changeImage(this->guiH, 5);
    this->addUser->changeButtonColor(this->guiH);
}

void MainWindow::on_rightHand1_pushButton_clicked()
{
    this->addUser->setSelectedFinger(6);
    this->addUser->changeImage(this->guiH, 6);
    this->addUser->changeButtonColor(this->guiH);
}

void MainWindow::on_rightHand2_pushButton_clicked()
{
    this->addUser->setSelectedFinger(7);
    this->addUser->changeImage(this->guiH, 7);
    this->addUser->changeButtonColor(this->guiH);
}

void MainWindow::on_rightHand3_pushButton_clicked()
{
    this->addUser->setSelectedFinger(8);
    this->addUser->changeImage(this->guiH, 8);
    this->addUser->changeButtonColor(this->guiH);
}

void MainWindow::on_rightHand4_pushButton_clicked()
{
    this->addUser->setSelectedFinger(9);
    this->addUser->changeImage(this->guiH, 9);
    this->addUser->changeButtonColor(this->guiH);
}

void MainWindow::on_rightHand5_pushButton_clicked()
{
    this->addUser->setSelectedFinger(10);
    this->addUser->changeImage(this->guiH, 10);
    this->addUser->changeButtonColor(this->guiH);
}

void MainWindow::on_livePreview_comboBox_activated(const QString &arg1)
{
    if (arg1 == "- Choose -") {
        if (this->isSupremaCapturing) {
            this->sSuprema->stopCapturing();
            this->isSupremaCapturing = false;
            this->addUser->setIsCapturing(false);
        }
        if (this->isBiometrikaCapturing) {
            this->sBiometrika->stopCapturing();
            this->isBiometrikaCapturing = false;
            this->addUser->setIsCapturing(false);
        }
    }
    else if (arg1 == "Suprema BioMini Slim") {
        QImage qCapturedImg;
        sSuprema = new SensorSuprema(this->guiH);

        int scanStatus = sSuprema->captureImage(qCapturedImg, 2);

        switch(scanStatus) {
        case -1:
            QMessageBox::critical(this, "Error", "The selected scanner is not available");
            this->ui->readFromScanner_comboBox->setCurrentIndex(0);
            break;
        case -2:
            QMessageBox::critical(this, "Error", "Failed to capture image");
            this->ui->readFromScanner_comboBox->setCurrentIndex(0);
            break;
        case 1:
            this->isSupremaCapturing = true;
            this->addUser->setIsCapturing(true);
            changeButtonState("capture", true);
            break;
        }

    }
    else if (arg1 == "Biometrika HiScan-PRO") {
        QImage qCapturedImg;
        sBiometrika = new SensorBiometrika(this->guiH);

        int scanStatus = sBiometrika->captureImage(qCapturedImg, 2);

        switch(scanStatus) {
        case -1:
            QMessageBox::critical(this, "Error", "Error during scanner initialization");
            this->ui->readFromScanner_comboBox->setCurrentIndex(0);
            break;
        case -2:
            QMessageBox::critical(this, "Error", "The selected scanner is not available");
            this->ui->readFromScanner_comboBox->setCurrentIndex(0);
            break;
        case 1:
            this->isBiometrikaCapturing = true;
            this->addUser->setIsCapturing(true);
            changeButtonState("capture", true);
            break;
        }

    }
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    if (isSupremaCapturing) {
        this->sSuprema->stopCapturing();
        isSupremaCapturing = false;
        delete sSuprema;
    }
    if (index == 2) {
        if (!addUserActive) {
            this->addUser = new AddUser();
            this->addUser->setSelectedFinger(1);
            this->addUser->changeImage(this->guiH, 1);
            this->addUser->changeButtonColor(this->guiH);

            this->addUserActive = true;
        }
        else {
            this->addUser->changeImage(this->guiH, this->addUser->getSelectedFinger());
            this->addUser->changeButtonColor(this->guiH);
        }
    }
}

void MainWindow::on_capture_pushButton_clicked()
{
    this->addUser->captureFingerprint(this->guiH);
}

void MainWindow::on_clear_pushButton_clicked()
{
    this->addUser->removeFingerprint(this->guiH, this->addUser->getSelectedFinger());
}

void MainWindow::on_saveNewUser_pushButton_clicked()
{
    //funkcia pre send request sem
    this->addUser->setToDefault(this->guiH);
}

void MainWindow::on_pushButton_2_clicked() // login // login // login
{
    // login
    // ak sa klikne tento buttoon mode = 1;
    if (!this->tcpC->getIsResult()) {

        int sendStatus = this->tcpC->sendToServerLogin();

        switch(sendStatus){
        case -1:
            QMessageBox::warning(this, "Warning", "There is no connection to the server");
            break;
        case -2:
            QMessageBox::warning(this, "Warning", "There is no image to send");
            break;
        }
    }
    else {
        QMessageBox::warning(this, "Warning", "You have to wait until previous request is processed");
    }
    bool loginSuccess = false;
        this->name = ui->lineEdit_2->text();
        this->surname = ui->lineEdit->text();

        // na konci sa resetnu vsetky hodnoty
        if(this->name == "" || this->surname == "")
        {
            QMessageBox::critical(this, "Error", "Name or surname is not filled in!");
        }
        if(captureSucces == false)
        {
            QMessageBox::critical(this, "Error", "Fingerprint was not captured!");
        }
    QMessageBox::critical(this, "Error", "You was not identified!");
}

void MainWindow::on_connectToServer_button_2_clicked()
{
    this->tcpC->connectToServer(5556, "localhost");

    ui->connectToServer_button->setDisabled(true);
    ui->connectToServer_button_2->setDisabled(true);
    ui->connectToServer_button_3->setDisabled(true);
}

void MainWindow::on_connectToServer_button_3_clicked()
{
    this->tcpC->connectToServer(5556, "localhost");
}

void MainWindow::on_comboBox_activated(const QString &arg1)
{
    if (arg1 == "Suprema BioMini Slim") {
        QImage qCapturedImg;
        SensorSuprema ss(this->guiH);

        int scanStatus = ss.captureImage(qCapturedImg, 1);

        switch(scanStatus) {
        case -1:
            QMessageBox::critical(this, "Error", "The selected scanner is not available");
            this->ui->comboBox->setCurrentIndex(0);
            break;
        case -2:
            QMessageBox::critical(this, "Error", "Failed to capture image");
            this->ui->comboBox->setCurrentIndex(0);
            break;
        case 1:
            cv::Mat capturedImg = Helper::QImage2Mat(qCapturedImg, cv::IMREAD_GRAYSCALE);
            this->tcpC->setReqImg(capturedImg);
            this->tcpC->setReqWidth(capturedImg.cols);
            this->tcpC->setReqHeight(capturedImg.rows);
            this->captureSucces = true;


            QString imageView = "graphicsView";
            changeImageView(imageView);

            this->tcpC->setIsResult(false);
            break;
        }
    }

}

void MainWindow::on_pushButton_3_clicked()
{
    // register
    if (!this->tcpC->getIsResult()) {
        int sendStatus = this->tcpC->sendToServerRegister();
        switch(sendStatus){
        case -1:
            QMessageBox::warning(this, "Warning", "There is no connection to the server");
            break;
        case -2:
            QMessageBox::warning(this, "Warning", "There is no image to send");
            break;
        }
    }
    else {
        QMessageBox::warning(this, "Warning", "You have to wait until previous request is processed");
    }

    bool registerSucces = false;
        this->nameR = ui->lineEdit_3->text();
        this->surnameR = ui->lineEdit_4->text();

        // na konci sa resetnu vsetky hodnoty
        if(this->nameR == "" || this->surnameR == "")
        {
            QMessageBox::critical(this, "Error", "Name or surname is not filled in!");
        }
        if(captureSucces == false)
        {
            QMessageBox::critical(this, "Error", "Fingerprint was not captured!");

        }

        if(registerSucces == true) // ak sa podari tak zmazem vsetko a vypnem okno a mozem ist na login
        {
            this->ui->tabWidget->setTabEnabled(1, false); // registration
            this->ui->tabWidget->setTabEnabled(0, false); // login

            this->ui->tabWidget->setTabEnabled(2, true); // registration
            this->ui->tabWidget->setTabEnabled(3, true); // login
            this->ui->tabWidget->setTabEnabled(4, true); // registration
            QMessageBox::critical(this, "Information", "You have been registered!");
        }

       QString str = "Person " + this->ui->lineEdit_3->text() + " " + ui->lineEdit_4->text() + " was registered!";
       QMessageBox::critical(this, "Information", str);
       ui->tabWidget->setTabEnabled(1, false);
       this->ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::on_comboBox_2_activated(const QString &arg1)
{
    if (arg1 == "Suprema BioMini Slim") {
        QImage qCapturedImg;
        SensorSuprema ss(this->guiH);

        int scanStatus = ss.captureImage(qCapturedImg, 1);

        switch(scanStatus) {
        case -1:
            QMessageBox::critical(this, "Error", "The selected scanner is not available");
            this->ui->comboBox->setCurrentIndex(0);
            break;
        case -2:
            QMessageBox::critical(this, "Error", "Failed to capture image");
            this->ui->comboBox->setCurrentIndex(0);
            break;
        case 1:
            cv::Mat capturedImg = Helper::QImage2Mat(qCapturedImg, cv::IMREAD_GRAYSCALE);
            //this->ui->progressBar->setValue(0);
            this->tcpC->setReqImg(capturedImg);
            this->tcpC->setReqWidth(capturedImg.cols);
            this->tcpC->setReqHeight(capturedImg.rows);

            this->captureSucces = true;

            QString imageView = "graphicsView_2";
            changeImageView(imageView);
            this->tcpC->setIsResult(false);
            break;
        }
    }
}

void MainWindow::on_pushButton_clicked()
{
    setParamsToDefault();
}

void MainWindow::on_pushButton_4_clicked()
{

}
