/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_44;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_26;
    QVBoxLayout *verticalLayout_46;
    QGroupBox *serverStatus_groupBox_2;
    QHBoxLayout *horizontalLayout_19;
    QHBoxLayout *horizontalLayout_21;
    QLabel *serverStatus_label_2;
    QSpacerItem *horizontalSpacer_27;
    QPushButton *connectToServer_button_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_24;
    QVBoxLayout *verticalLayout_45;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_29;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_30;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_31;
    QPushButton *pushButton_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_49;
    QVBoxLayout *verticalLayout_48;
    QGroupBox *serverStatus_groupBox_3;
    QHBoxLayout *horizontalLayout_22;
    QHBoxLayout *horizontalLayout_23;
    QLabel *serverStatus_label_3;
    QSpacerItem *horizontalSpacer_28;
    QPushButton *connectToServer_button_3;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_27;
    QVBoxLayout *verticalLayout_47;
    QGraphicsView *graphicsView_2;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_32;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer_33;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer_34;
    QPushButton *pushButton_3;
    QWidget *main_tab;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QGroupBox *serverStatus_groupBox;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *serverStatus_label;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *connectToServer_button;
    QGroupBox *imageInput_groupBox;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QPushButton *readFromFile_button;
    QLabel *readFromScanner_label;
    QComboBox *readFromScanner_comboBox;
    QSpacerItem *verticalSpacer_10;
    QGroupBox *imageInfo_groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *imageNameInfo_label;
    QLabel *imageName_label;
    QSpacerItem *verticalSpacer_9;
    QLabel *imageType_label;
    QLabel *imageWidth_label;
    QLabel *imageHeight_label;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_37;
    QGraphicsView *inputImg_view;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *process_groupBox;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *process_label;
    QHBoxLayout *horizontalLayout_7;
    QProgressBar *progressBar;
    QPushButton *sendToServer_button;
    QGroupBox *settings_groupBox;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *mode_groupBox;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_13;
    QRadioButton *identification_radioButton;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *verification_radioButton;
    QSpacerItem *horizontalSpacer_10;
    QLabel *verification_label;
    QLineEdit *verification_lineEdit;
    QRadioButton *expert_radioButton;
    QGroupBox *expert_groupBox;
    QVBoxLayout *verticalLayout_29;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *cpuGpuMode_groupBox;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *cpu_radioButton;
    QRadioButton *gpu_radioButton;
    QSpacerItem *horizontalSpacer;
    QGroupBox *imageMask_groupBox;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *maskStandard_radioButton;
    QRadioButton *maskNeural_radioButton;
    QHBoxLayout *horizontalLayout_6;
    QLabel *maskFilterSize_label;
    QSpacerItem *horizontalSpacer_9;
    QSpinBox *maskFilterSize_spinBox;
    QSpacerItem *horizontalSpacer_11;
    QGroupBox *gaborFilter_groupBox;
    QVBoxLayout *verticalLayout_12;
    QGridLayout *gridLayout;
    QLabel *gaborSigma_label;
    QSpacerItem *horizontalSpacer_7;
    QSpinBox *gaborLambda_spinBox;
    QLabel *gaborLambda_label;
    QSpacerItem *horizontalSpacer_8;
    QSpinBox *gaborSigma_spinBox;
    QSpinBox *gaborThreshold_spinBox;
    QLabel *blockSize_label;
    QSpacerItem *horizontalSpacer_5;
    QSpinBox *gaborBlockSize_spinBox;
    QLabel *gaborThreshold_label;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_12;
    QGroupBox *extraction_groupBox;
    QVBoxLayout *verticalLayout_28;
    QGridLayout *gridLayout_2;
    QLabel *extractionBlock_label;
    QSpacerItem *horizontalSpacer_14;
    QLabel *extractionBorder_label;
    QSpacerItem *horizontalSpacer_15;
    QSpinBox *extractionBlock_spinBox;
    QSpinBox *extractionBorder_spinBox;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QGroupBox *result_groupBox;
    QVBoxLayout *verticalLayout_14;
    QLabel *time_label;
    QLabel *result_label;
    QWidget *expertResults_tab;
    QVBoxLayout *verticalLayout_35;
    QVBoxLayout *verticalLayout_34;
    QGroupBox *preprocessResults_groupBox;
    QVBoxLayout *verticalLayout_24;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_27;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_18;
    QLabel *mask_label;
    QGraphicsView *mask_view;
    QVBoxLayout *verticalLayout_19;
    QLabel *gaborFiltered_label;
    QGraphicsView *gaborFiltered_view;
    QVBoxLayout *verticalLayout_20;
    QLabel *binarized_label;
    QGraphicsView *binarized_view;
    QVBoxLayout *verticalLayout_21;
    QLabel *skeleton_label;
    QGraphicsView *skeleton_view;
    QGroupBox *extractionResults_groupBox;
    QVBoxLayout *verticalLayout_33;
    QHBoxLayout *horizontalLayout_13;
    QGraphicsView *marked_view;
    QGroupBox *minutiaeToShow_groupBox;
    QVBoxLayout *verticalLayout_32;
    QGroupBox *crossingNumber_groupBox;
    QVBoxLayout *verticalLayout_30;
    QGridLayout *gridLayout_3;
    QCheckBox *cnEnding_checkBox;
    QCheckBox *cnBifurcation_checkBox;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *neuralNetwork_groupBox;
    QVBoxLayout *verticalLayout_31;
    QGridLayout *gridLayout_4;
    QCheckBox *nnEnding_checkBox;
    QCheckBox *nnBifurcation_checkBox;
    QCheckBox *nnFalseMinutiae_checkBox;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *probability_checkBox;
    QSpacerItem *horizontalSpacer_17;
    QSpinBox *probability_spinBox;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_13;
    QVBoxLayout *verticalLayout_26;
    QGroupBox *baseMinutiae_groupBox;
    QVBoxLayout *verticalLayout_22;
    QTextBrowser *baseMinutiae_textBrowser;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *complexMinutiae_groupBox;
    QVBoxLayout *verticalLayout_25;
    QTextBrowser *complexMinutiae_textBrowser;
    QSpacerItem *verticalSpacer_6;
    QWidget *addUser_tab;
    QVBoxLayout *verticalLayout_43;
    QVBoxLayout *verticalLayout_42;
    QHBoxLayout *horizontalLayout_20;
    QGroupBox *selectedFinger_groupBox;
    QVBoxLayout *verticalLayout_38;
    QLabel *addUserInstructions_label;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_23;
    QGraphicsView *fingerHelp_view;
    QSpacerItem *horizontalSpacer_25;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_15;
    QLabel *step_label;
    QCheckBox *step1_checkBox;
    QCheckBox *step2_checkBox;
    QCheckBox *step3_checkBox;
    QCheckBox *step4_checkBox;
    QCheckBox *step5_checkBox;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *clear_pushButton;
    QPushButton *capture_pushButton;
    QSpacerItem *horizontalSpacer_21;
    QVBoxLayout *verticalLayout_41;
    QGroupBox *source_groupBox;
    QVBoxLayout *verticalLayout_40;
    QHBoxLayout *horizontalLayout_16;
    QComboBox *livePreview_comboBox;
    QSpacerItem *horizontalSpacer_24;
    QGroupBox *livePreview_groupBox;
    QVBoxLayout *verticalLayout_36;
    QHBoxLayout *horizontalLayout_17;
    QGraphicsView *livePreview_view;
    QSpacerItem *horizontalSpacer_26;
    QProgressBar *quality_progressBar;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_12;
    QGroupBox *capturedFingers_groupBox;
    QVBoxLayout *verticalLayout_23;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *leftHand1_pushButton;
    QPushButton *leftHand2_pushButton;
    QPushButton *leftHand3_pushButton;
    QPushButton *leftHand4_pushButton;
    QPushButton *leftHand5_pushButton;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *rightHand1_pushButton;
    QPushButton *rightHand2_pushButton;
    QPushButton *rightHand3_pushButton;
    QPushButton *rightHand4_pushButton;
    QPushButton *rightHand5_pushButton;
    QGroupBox *output_groupBox;
    QVBoxLayout *verticalLayout_39;
    QHBoxLayout *horizontalLayout_14;
    QLabel *firstName_label;
    QLineEdit *firstName_lineEdit;
    QSpacerItem *horizontalSpacer_19;
    QLabel *lastName_label;
    QLineEdit *lastName_lineEdit;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *saveNewUser_pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1065, 850);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_44 = new QVBoxLayout(centralWidget);
        verticalLayout_44->setSpacing(6);
        verticalLayout_44->setContentsMargins(11, 11, 11, 11);
        verticalLayout_44->setObjectName(QStringLiteral("verticalLayout_44"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setEnabled(true);
        horizontalLayout_26 = new QHBoxLayout(tab);
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        verticalLayout_46 = new QVBoxLayout();
        verticalLayout_46->setSpacing(6);
        verticalLayout_46->setObjectName(QStringLiteral("verticalLayout_46"));
        serverStatus_groupBox_2 = new QGroupBox(tab);
        serverStatus_groupBox_2->setObjectName(QStringLiteral("serverStatus_groupBox_2"));
        serverStatus_groupBox_2->setMinimumSize(QSize(0, 60));
        serverStatus_groupBox_2->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_19 = new QHBoxLayout(serverStatus_groupBox_2);
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        serverStatus_label_2 = new QLabel(serverStatus_groupBox_2);
        serverStatus_label_2->setObjectName(QStringLiteral("serverStatus_label_2"));
        serverStatus_label_2->setMinimumSize(QSize(0, 0));
        serverStatus_label_2->setMaximumSize(QSize(250, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        serverStatus_label_2->setFont(font);
        serverStatus_label_2->setAutoFillBackground(false);
        serverStatus_label_2->setScaledContents(false);

        horizontalLayout_21->addWidget(serverStatus_label_2);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_27);

        connectToServer_button_2 = new QPushButton(serverStatus_groupBox_2);
        connectToServer_button_2->setObjectName(QStringLiteral("connectToServer_button_2"));
        connectToServer_button_2->setMinimumSize(QSize(120, 0));
        connectToServer_button_2->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_21->addWidget(connectToServer_button_2);


        horizontalLayout_19->addLayout(horizontalLayout_21);


        verticalLayout_46->addWidget(serverStatus_groupBox_2);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_24 = new QHBoxLayout(groupBox_2);
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        verticalLayout_45 = new QVBoxLayout();
        verticalLayout_45->setSpacing(6);
        verticalLayout_45->setObjectName(QStringLiteral("verticalLayout_45"));
        graphicsView = new QGraphicsView(groupBox_2);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout_45->addWidget(graphicsView);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_25->addWidget(label_2);

        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_25->addWidget(lineEdit_2);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_29);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_25->addWidget(label_3);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_25->addWidget(lineEdit);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_30);

        comboBox = new QComboBox(groupBox_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_25->addWidget(comboBox);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_31);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_25->addWidget(pushButton_2);


        verticalLayout_45->addLayout(horizontalLayout_25);


        horizontalLayout_24->addLayout(verticalLayout_45);


        verticalLayout_46->addWidget(groupBox_2);


        horizontalLayout_26->addLayout(verticalLayout_46);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_49 = new QVBoxLayout(tab_2);
        verticalLayout_49->setSpacing(6);
        verticalLayout_49->setContentsMargins(11, 11, 11, 11);
        verticalLayout_49->setObjectName(QStringLiteral("verticalLayout_49"));
        verticalLayout_48 = new QVBoxLayout();
        verticalLayout_48->setSpacing(6);
        verticalLayout_48->setObjectName(QStringLiteral("verticalLayout_48"));
        serverStatus_groupBox_3 = new QGroupBox(tab_2);
        serverStatus_groupBox_3->setObjectName(QStringLiteral("serverStatus_groupBox_3"));
        serverStatus_groupBox_3->setMinimumSize(QSize(0, 60));
        serverStatus_groupBox_3->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_22 = new QHBoxLayout(serverStatus_groupBox_3);
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        serverStatus_label_3 = new QLabel(serverStatus_groupBox_3);
        serverStatus_label_3->setObjectName(QStringLiteral("serverStatus_label_3"));
        serverStatus_label_3->setMinimumSize(QSize(0, 0));
        serverStatus_label_3->setMaximumSize(QSize(250, 16777215));
        serverStatus_label_3->setFont(font);
        serverStatus_label_3->setAutoFillBackground(false);
        serverStatus_label_3->setScaledContents(false);

        horizontalLayout_23->addWidget(serverStatus_label_3);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_28);

        connectToServer_button_3 = new QPushButton(serverStatus_groupBox_3);
        connectToServer_button_3->setObjectName(QStringLiteral("connectToServer_button_3"));
        connectToServer_button_3->setMinimumSize(QSize(120, 0));
        connectToServer_button_3->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_23->addWidget(connectToServer_button_3);


        horizontalLayout_22->addLayout(horizontalLayout_23);


        verticalLayout_48->addWidget(serverStatus_groupBox_3);

        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_27 = new QHBoxLayout(groupBox_3);
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        verticalLayout_47 = new QVBoxLayout();
        verticalLayout_47->setSpacing(6);
        verticalLayout_47->setObjectName(QStringLiteral("verticalLayout_47"));
        graphicsView_2 = new QGraphicsView(groupBox_3);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));

        verticalLayout_47->addWidget(graphicsView_2);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_28->addWidget(label_4);

        lineEdit_3 = new QLineEdit(groupBox_3);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_28->addWidget(lineEdit_3);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_32);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_28->addWidget(label_5);

        lineEdit_4 = new QLineEdit(groupBox_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_28->addWidget(lineEdit_4);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_33);

        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_28->addWidget(comboBox_2);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_34);

        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_28->addWidget(pushButton_3);


        verticalLayout_47->addLayout(horizontalLayout_28);


        horizontalLayout_27->addLayout(verticalLayout_47);


        verticalLayout_48->addWidget(groupBox_3);


        verticalLayout_49->addLayout(verticalLayout_48);

        tabWidget->addTab(tab_2, QString());
        main_tab = new QWidget();
        main_tab->setObjectName(QStringLiteral("main_tab"));
        verticalLayout_17 = new QVBoxLayout(main_tab);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        serverStatus_groupBox = new QGroupBox(main_tab);
        serverStatus_groupBox->setObjectName(QStringLiteral("serverStatus_groupBox"));
        serverStatus_groupBox->setMinimumSize(QSize(0, 60));
        serverStatus_groupBox->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_4 = new QHBoxLayout(serverStatus_groupBox);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        serverStatus_label = new QLabel(serverStatus_groupBox);
        serverStatus_label->setObjectName(QStringLiteral("serverStatus_label"));
        serverStatus_label->setMinimumSize(QSize(0, 0));
        serverStatus_label->setMaximumSize(QSize(250, 16777215));
        serverStatus_label->setFont(font);
        serverStatus_label->setAutoFillBackground(false);
        serverStatus_label->setScaledContents(false);

        horizontalLayout->addWidget(serverStatus_label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        connectToServer_button = new QPushButton(serverStatus_groupBox);
        connectToServer_button->setObjectName(QStringLiteral("connectToServer_button"));
        connectToServer_button->setMinimumSize(QSize(120, 0));
        connectToServer_button->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(connectToServer_button);


        horizontalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addWidget(serverStatus_groupBox);

        imageInput_groupBox = new QGroupBox(main_tab);
        imageInput_groupBox->setObjectName(QStringLiteral("imageInput_groupBox"));
        horizontalLayout_3 = new QHBoxLayout(imageInput_groupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        readFromFile_button = new QPushButton(imageInput_groupBox);
        readFromFile_button->setObjectName(QStringLiteral("readFromFile_button"));
        readFromFile_button->setMinimumSize(QSize(120, 0));
        readFromFile_button->setMaximumSize(QSize(120, 16777215));

        verticalLayout_7->addWidget(readFromFile_button);

        readFromScanner_label = new QLabel(imageInput_groupBox);
        readFromScanner_label->setObjectName(QStringLiteral("readFromScanner_label"));

        verticalLayout_7->addWidget(readFromScanner_label);

        readFromScanner_comboBox = new QComboBox(imageInput_groupBox);
        readFromScanner_comboBox->addItem(QString());
        readFromScanner_comboBox->addItem(QString());
        readFromScanner_comboBox->addItem(QString());
        readFromScanner_comboBox->setObjectName(QStringLiteral("readFromScanner_comboBox"));
        readFromScanner_comboBox->setMinimumSize(QSize(120, 0));
        readFromScanner_comboBox->setMaximumSize(QSize(120, 16777215));

        verticalLayout_7->addWidget(readFromScanner_comboBox);

        verticalSpacer_10 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_10);

        imageInfo_groupBox = new QGroupBox(imageInput_groupBox);
        imageInfo_groupBox->setObjectName(QStringLiteral("imageInfo_groupBox"));
        imageInfo_groupBox->setMinimumSize(QSize(120, 0));
        imageInfo_groupBox->setMaximumSize(QSize(120, 16777215));
        verticalLayout_2 = new QVBoxLayout(imageInfo_groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        imageNameInfo_label = new QLabel(imageInfo_groupBox);
        imageNameInfo_label->setObjectName(QStringLiteral("imageNameInfo_label"));
        imageNameInfo_label->setMinimumSize(QSize(100, 0));
        imageNameInfo_label->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(imageNameInfo_label);

        imageName_label = new QLabel(imageInfo_groupBox);
        imageName_label->setObjectName(QStringLiteral("imageName_label"));
        imageName_label->setMinimumSize(QSize(100, 0));
        imageName_label->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(imageName_label);

        verticalSpacer_9 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_9);

        imageType_label = new QLabel(imageInfo_groupBox);
        imageType_label->setObjectName(QStringLiteral("imageType_label"));
        imageType_label->setMinimumSize(QSize(100, 0));
        imageType_label->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(imageType_label);

        imageWidth_label = new QLabel(imageInfo_groupBox);
        imageWidth_label->setObjectName(QStringLiteral("imageWidth_label"));
        imageWidth_label->setMinimumSize(QSize(100, 0));
        imageWidth_label->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(imageWidth_label);

        imageHeight_label = new QLabel(imageInfo_groupBox);
        imageHeight_label->setObjectName(QStringLiteral("imageHeight_label"));
        imageHeight_label->setMinimumSize(QSize(100, 0));
        imageHeight_label->setMaximumSize(QSize(100, 16777215));

        verticalLayout_2->addWidget(imageHeight_label);


        verticalLayout_7->addWidget(imageInfo_groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_7);

        horizontalSpacer_4 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        verticalLayout_37 = new QVBoxLayout();
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        inputImg_view = new QGraphicsView(imageInput_groupBox);
        inputImg_view->setObjectName(QStringLiteral("inputImg_view"));
        inputImg_view->setMinimumSize(QSize(300, 400));
        inputImg_view->setMaximumSize(QSize(500, 400));
        inputImg_view->setMouseTracking(false);
        inputImg_view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        inputImg_view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        inputImg_view->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_37->addWidget(inputImg_view);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_37->addItem(verticalSpacer_11);


        horizontalLayout_3->addLayout(verticalLayout_37);

        horizontalSpacer_2 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(imageInput_groupBox);


        verticalLayout_5->addLayout(verticalLayout);

        process_groupBox = new QGroupBox(main_tab);
        process_groupBox->setObjectName(QStringLiteral("process_groupBox"));
        process_groupBox->setMinimumSize(QSize(0, 85));
        process_groupBox->setMaximumSize(QSize(16777215, 85));
        verticalLayout_8 = new QVBoxLayout(process_groupBox);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        process_label = new QLabel(process_groupBox);
        process_label->setObjectName(QStringLiteral("process_label"));

        verticalLayout_4->addWidget(process_label);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        progressBar = new QProgressBar(process_groupBox);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);

        horizontalLayout_7->addWidget(progressBar);

        sendToServer_button = new QPushButton(process_groupBox);
        sendToServer_button->setObjectName(QStringLiteral("sendToServer_button"));
        sendToServer_button->setMinimumSize(QSize(120, 0));
        sendToServer_button->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_7->addWidget(sendToServer_button);


        verticalLayout_4->addLayout(horizontalLayout_7);


        verticalLayout_8->addLayout(verticalLayout_4);


        verticalLayout_5->addWidget(process_groupBox);


        horizontalLayout_8->addLayout(verticalLayout_5);

        settings_groupBox = new QGroupBox(main_tab);
        settings_groupBox->setObjectName(QStringLiteral("settings_groupBox"));
        settings_groupBox->setMinimumSize(QSize(270, 0));
        settings_groupBox->setMaximumSize(QSize(270, 16777215));
        verticalLayout_10 = new QVBoxLayout(settings_groupBox);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        mode_groupBox = new QGroupBox(settings_groupBox);
        mode_groupBox->setObjectName(QStringLiteral("mode_groupBox"));
        mode_groupBox->setMinimumSize(QSize(0, 100));
        mode_groupBox->setMaximumSize(QSize(16777215, 100));
        verticalLayout_16 = new QVBoxLayout(mode_groupBox);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        identification_radioButton = new QRadioButton(mode_groupBox);
        identification_radioButton->setObjectName(QStringLiteral("identification_radioButton"));
        identification_radioButton->setEnabled(false);
        identification_radioButton->setChecked(false);
        identification_radioButton->setAutoExclusive(true);

        verticalLayout_13->addWidget(identification_radioButton);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verification_radioButton = new QRadioButton(mode_groupBox);
        verification_radioButton->setObjectName(QStringLiteral("verification_radioButton"));
        verification_radioButton->setEnabled(false);

        horizontalLayout_11->addWidget(verification_radioButton);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);

        verification_label = new QLabel(mode_groupBox);
        verification_label->setObjectName(QStringLiteral("verification_label"));
        verification_label->setEnabled(false);
        verification_label->setMinimumSize(QSize(17, 0));
        verification_label->setMaximumSize(QSize(17, 16777215));

        horizontalLayout_11->addWidget(verification_label);

        verification_lineEdit = new QLineEdit(mode_groupBox);
        verification_lineEdit->setObjectName(QStringLiteral("verification_lineEdit"));
        verification_lineEdit->setEnabled(false);
        verification_lineEdit->setMinimumSize(QSize(70, 0));
        verification_lineEdit->setMaximumSize(QSize(70, 16777215));
        verification_lineEdit->setInputMethodHints(Qt::ImhNone);

        horizontalLayout_11->addWidget(verification_lineEdit);


        verticalLayout_13->addLayout(horizontalLayout_11);

        expert_radioButton = new QRadioButton(mode_groupBox);
        expert_radioButton->setObjectName(QStringLiteral("expert_radioButton"));
        expert_radioButton->setChecked(true);

        verticalLayout_13->addWidget(expert_radioButton);


        verticalLayout_16->addLayout(verticalLayout_13);


        verticalLayout_10->addWidget(mode_groupBox);

        expert_groupBox = new QGroupBox(settings_groupBox);
        expert_groupBox->setObjectName(QStringLiteral("expert_groupBox"));
        expert_groupBox->setEnabled(false);
        expert_groupBox->setCheckable(false);
        verticalLayout_29 = new QVBoxLayout(expert_groupBox);
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setContentsMargins(11, 11, 11, 11);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        cpuGpuMode_groupBox = new QGroupBox(expert_groupBox);
        cpuGpuMode_groupBox->setObjectName(QStringLiteral("cpuGpuMode_groupBox"));
        verticalLayout_9 = new QVBoxLayout(cpuGpuMode_groupBox);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        cpu_radioButton = new QRadioButton(cpuGpuMode_groupBox);
        cpu_radioButton->setObjectName(QStringLiteral("cpu_radioButton"));
        cpu_radioButton->setMinimumSize(QSize(80, 0));
        cpu_radioButton->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(cpu_radioButton);

        gpu_radioButton = new QRadioButton(cpuGpuMode_groupBox);
        gpu_radioButton->setObjectName(QStringLiteral("gpu_radioButton"));
        gpu_radioButton->setMinimumSize(QSize(60, 0));
        gpu_radioButton->setMaximumSize(QSize(60, 16777215));
        gpu_radioButton->setChecked(true);

        horizontalLayout_2->addWidget(gpu_radioButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_9->addLayout(horizontalLayout_2);


        verticalLayout_11->addWidget(cpuGpuMode_groupBox);

        imageMask_groupBox = new QGroupBox(expert_groupBox);
        imageMask_groupBox->setObjectName(QStringLiteral("imageMask_groupBox"));
        imageMask_groupBox->setMinimumSize(QSize(0, 80));
        imageMask_groupBox->setMaximumSize(QSize(16777215, 80));
        verticalLayout_15 = new QVBoxLayout(imageMask_groupBox);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        maskStandard_radioButton = new QRadioButton(imageMask_groupBox);
        maskStandard_radioButton->setObjectName(QStringLiteral("maskStandard_radioButton"));
        maskStandard_radioButton->setMinimumSize(QSize(80, 0));
        maskStandard_radioButton->setMaximumSize(QSize(80, 16777215));
        maskStandard_radioButton->setChecked(true);

        horizontalLayout_5->addWidget(maskStandard_radioButton);

        maskNeural_radioButton = new QRadioButton(imageMask_groupBox);
        maskNeural_radioButton->setObjectName(QStringLiteral("maskNeural_radioButton"));

        horizontalLayout_5->addWidget(maskNeural_radioButton);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        maskFilterSize_label = new QLabel(imageMask_groupBox);
        maskFilterSize_label->setObjectName(QStringLiteral("maskFilterSize_label"));
        maskFilterSize_label->setMinimumSize(QSize(60, 0));
        maskFilterSize_label->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_6->addWidget(maskFilterSize_label);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        maskFilterSize_spinBox = new QSpinBox(imageMask_groupBox);
        maskFilterSize_spinBox->setObjectName(QStringLiteral("maskFilterSize_spinBox"));
        maskFilterSize_spinBox->setMinimumSize(QSize(70, 0));
        maskFilterSize_spinBox->setMaximumSize(QSize(70, 16777215));
        maskFilterSize_spinBox->setValue(13);

        horizontalLayout_6->addWidget(maskFilterSize_spinBox);

        horizontalSpacer_11 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);


        verticalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout_15->addLayout(verticalLayout_3);


        verticalLayout_11->addWidget(imageMask_groupBox);

        gaborFilter_groupBox = new QGroupBox(expert_groupBox);
        gaborFilter_groupBox->setObjectName(QStringLiteral("gaborFilter_groupBox"));
        gaborFilter_groupBox->setMinimumSize(QSize(0, 140));
        gaborFilter_groupBox->setMaximumSize(QSize(16777215, 140));
        verticalLayout_12 = new QVBoxLayout(gaborFilter_groupBox);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gaborSigma_label = new QLabel(gaborFilter_groupBox);
        gaborSigma_label->setObjectName(QStringLiteral("gaborSigma_label"));

        gridLayout->addWidget(gaborSigma_label, 3, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 2, 1, 1, 1);

        gaborLambda_spinBox = new QSpinBox(gaborFilter_groupBox);
        gaborLambda_spinBox->setObjectName(QStringLiteral("gaborLambda_spinBox"));
        gaborLambda_spinBox->setMinimumSize(QSize(70, 0));
        gaborLambda_spinBox->setMaximumSize(QSize(70, 16777215));
        gaborLambda_spinBox->setValue(8);

        gridLayout->addWidget(gaborLambda_spinBox, 2, 2, 1, 1);

        gaborLambda_label = new QLabel(gaborFilter_groupBox);
        gaborLambda_label->setObjectName(QStringLiteral("gaborLambda_label"));

        gridLayout->addWidget(gaborLambda_label, 2, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 3, 1, 1, 1);

        gaborSigma_spinBox = new QSpinBox(gaborFilter_groupBox);
        gaborSigma_spinBox->setObjectName(QStringLiteral("gaborSigma_spinBox"));
        gaborSigma_spinBox->setMinimumSize(QSize(70, 0));
        gaborSigma_spinBox->setMaximumSize(QSize(70, 16777215));
        gaborSigma_spinBox->setValue(4);

        gridLayout->addWidget(gaborSigma_spinBox, 3, 2, 1, 1);

        gaborThreshold_spinBox = new QSpinBox(gaborFilter_groupBox);
        gaborThreshold_spinBox->setObjectName(QStringLiteral("gaborThreshold_spinBox"));
        gaborThreshold_spinBox->setMinimumSize(QSize(70, 0));
        gaborThreshold_spinBox->setMaximumSize(QSize(70, 16777215));
        gaborThreshold_spinBox->setMaximum(255);
        gaborThreshold_spinBox->setValue(125);

        gridLayout->addWidget(gaborThreshold_spinBox, 1, 2, 1, 1);

        blockSize_label = new QLabel(gaborFilter_groupBox);
        blockSize_label->setObjectName(QStringLiteral("blockSize_label"));

        gridLayout->addWidget(blockSize_label, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        gaborBlockSize_spinBox = new QSpinBox(gaborFilter_groupBox);
        gaborBlockSize_spinBox->setObjectName(QStringLiteral("gaborBlockSize_spinBox"));
        gaborBlockSize_spinBox->setMinimumSize(QSize(70, 0));
        gaborBlockSize_spinBox->setMaximumSize(QSize(70, 16777215));
        gaborBlockSize_spinBox->setReadOnly(false);
        gaborBlockSize_spinBox->setSingleStep(2);
        gaborBlockSize_spinBox->setValue(17);

        gridLayout->addWidget(gaborBlockSize_spinBox, 0, 2, 1, 1);

        gaborThreshold_label = new QLabel(gaborFilter_groupBox);
        gaborThreshold_label->setObjectName(QStringLiteral("gaborThreshold_label"));

        gridLayout->addWidget(gaborThreshold_label, 1, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 1, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 0, 3, 1, 1);


        verticalLayout_12->addLayout(gridLayout);


        verticalLayout_11->addWidget(gaborFilter_groupBox);

        extraction_groupBox = new QGroupBox(expert_groupBox);
        extraction_groupBox->setObjectName(QStringLiteral("extraction_groupBox"));
        extraction_groupBox->setEnabled(false);
        extraction_groupBox->setMinimumSize(QSize(0, 100));
        extraction_groupBox->setMaximumSize(QSize(16777215, 100));
        verticalLayout_28 = new QVBoxLayout(extraction_groupBox);
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setContentsMargins(11, 11, 11, 11);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        extractionBlock_label = new QLabel(extraction_groupBox);
        extractionBlock_label->setObjectName(QStringLiteral("extractionBlock_label"));

        gridLayout_2->addWidget(extractionBlock_label, 0, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_14, 0, 1, 1, 2);

        extractionBorder_label = new QLabel(extraction_groupBox);
        extractionBorder_label->setObjectName(QStringLiteral("extractionBorder_label"));

        gridLayout_2->addWidget(extractionBorder_label, 1, 0, 1, 2);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_15, 1, 2, 1, 1);

        extractionBlock_spinBox = new QSpinBox(extraction_groupBox);
        extractionBlock_spinBox->setObjectName(QStringLiteral("extractionBlock_spinBox"));
        extractionBlock_spinBox->setMinimumSize(QSize(70, 0));
        extractionBlock_spinBox->setMaximumSize(QSize(70, 16777215));
        extractionBlock_spinBox->setValue(19);

        gridLayout_2->addWidget(extractionBlock_spinBox, 0, 3, 1, 1);

        extractionBorder_spinBox = new QSpinBox(extraction_groupBox);
        extractionBorder_spinBox->setObjectName(QStringLiteral("extractionBorder_spinBox"));
        extractionBorder_spinBox->setMinimumSize(QSize(70, 0));
        extractionBorder_spinBox->setMaximumSize(QSize(70, 16777215));
        extractionBorder_spinBox->setValue(5);

        gridLayout_2->addWidget(extractionBorder_spinBox, 1, 3, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_16, 0, 4, 1, 1);


        verticalLayout_28->addLayout(gridLayout_2);


        verticalLayout_11->addWidget(extraction_groupBox);


        verticalLayout_29->addLayout(verticalLayout_11);


        verticalLayout_10->addWidget(expert_groupBox);

        pushButton = new QPushButton(settings_groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);

        verticalLayout_10->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);

        label = new QLabel(settings_groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_10->addWidget(label);


        horizontalLayout_8->addWidget(settings_groupBox);


        verticalLayout_6->addLayout(horizontalLayout_8);

        result_groupBox = new QGroupBox(main_tab);
        result_groupBox->setObjectName(QStringLiteral("result_groupBox"));
        result_groupBox->setMinimumSize(QSize(0, 70));
        result_groupBox->setMaximumSize(QSize(16777215, 70));
        verticalLayout_14 = new QVBoxLayout(result_groupBox);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        time_label = new QLabel(result_groupBox);
        time_label->setObjectName(QStringLiteral("time_label"));

        verticalLayout_14->addWidget(time_label);

        result_label = new QLabel(result_groupBox);
        result_label->setObjectName(QStringLiteral("result_label"));

        verticalLayout_14->addWidget(result_label);


        verticalLayout_6->addWidget(result_groupBox);


        verticalLayout_17->addLayout(verticalLayout_6);

        tabWidget->addTab(main_tab, QString());
        expertResults_tab = new QWidget();
        expertResults_tab->setObjectName(QStringLiteral("expertResults_tab"));
        verticalLayout_35 = new QVBoxLayout(expertResults_tab);
        verticalLayout_35->setSpacing(6);
        verticalLayout_35->setContentsMargins(11, 11, 11, 11);
        verticalLayout_35->setObjectName(QStringLiteral("verticalLayout_35"));
        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        preprocessResults_groupBox = new QGroupBox(expertResults_tab);
        preprocessResults_groupBox->setObjectName(QStringLiteral("preprocessResults_groupBox"));
        preprocessResults_groupBox->setMinimumSize(QSize(0, 250));
        verticalLayout_24 = new QVBoxLayout(preprocessResults_groupBox);
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setContentsMargins(11, 11, 11, 11);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        scrollArea = new QScrollArea(preprocessResults_groupBox);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 995, 249));
        verticalLayout_27 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setContentsMargins(11, 11, 11, 11);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        mask_label = new QLabel(scrollAreaWidgetContents);
        mask_label->setObjectName(QStringLiteral("mask_label"));

        verticalLayout_18->addWidget(mask_label);

        mask_view = new QGraphicsView(scrollAreaWidgetContents);
        mask_view->setObjectName(QStringLiteral("mask_view"));
        mask_view->setMinimumSize(QSize(200, 0));
        mask_view->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_18->addWidget(mask_view);


        horizontalLayout_12->addLayout(verticalLayout_18);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        gaborFiltered_label = new QLabel(scrollAreaWidgetContents);
        gaborFiltered_label->setObjectName(QStringLiteral("gaborFiltered_label"));

        verticalLayout_19->addWidget(gaborFiltered_label);

        gaborFiltered_view = new QGraphicsView(scrollAreaWidgetContents);
        gaborFiltered_view->setObjectName(QStringLiteral("gaborFiltered_view"));
        gaborFiltered_view->setMinimumSize(QSize(200, 0));
        gaborFiltered_view->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_19->addWidget(gaborFiltered_view);


        horizontalLayout_12->addLayout(verticalLayout_19);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        binarized_label = new QLabel(scrollAreaWidgetContents);
        binarized_label->setObjectName(QStringLiteral("binarized_label"));

        verticalLayout_20->addWidget(binarized_label);

        binarized_view = new QGraphicsView(scrollAreaWidgetContents);
        binarized_view->setObjectName(QStringLiteral("binarized_view"));
        binarized_view->setMinimumSize(QSize(200, 0));
        binarized_view->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_20->addWidget(binarized_view);


        horizontalLayout_12->addLayout(verticalLayout_20);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        skeleton_label = new QLabel(scrollAreaWidgetContents);
        skeleton_label->setObjectName(QStringLiteral("skeleton_label"));

        verticalLayout_21->addWidget(skeleton_label);

        skeleton_view = new QGraphicsView(scrollAreaWidgetContents);
        skeleton_view->setObjectName(QStringLiteral("skeleton_view"));
        skeleton_view->setMinimumSize(QSize(200, 0));
        skeleton_view->setDragMode(QGraphicsView::ScrollHandDrag);

        verticalLayout_21->addWidget(skeleton_view);


        horizontalLayout_12->addLayout(verticalLayout_21);


        verticalLayout_27->addLayout(horizontalLayout_12);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_24->addWidget(scrollArea);


        verticalLayout_34->addWidget(preprocessResults_groupBox);

        extractionResults_groupBox = new QGroupBox(expertResults_tab);
        extractionResults_groupBox->setObjectName(QStringLiteral("extractionResults_groupBox"));
        verticalLayout_33 = new QVBoxLayout(extractionResults_groupBox);
        verticalLayout_33->setSpacing(6);
        verticalLayout_33->setContentsMargins(11, 11, 11, 11);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        marked_view = new QGraphicsView(extractionResults_groupBox);
        marked_view->setObjectName(QStringLiteral("marked_view"));
        marked_view->setMinimumSize(QSize(290, 340));
        marked_view->setDragMode(QGraphicsView::ScrollHandDrag);

        horizontalLayout_13->addWidget(marked_view);

        minutiaeToShow_groupBox = new QGroupBox(extractionResults_groupBox);
        minutiaeToShow_groupBox->setObjectName(QStringLiteral("minutiaeToShow_groupBox"));
        minutiaeToShow_groupBox->setMinimumSize(QSize(175, 0));
        minutiaeToShow_groupBox->setMaximumSize(QSize(175, 16777215));
        verticalLayout_32 = new QVBoxLayout(minutiaeToShow_groupBox);
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setContentsMargins(11, 11, 11, 11);
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        crossingNumber_groupBox = new QGroupBox(minutiaeToShow_groupBox);
        crossingNumber_groupBox->setObjectName(QStringLiteral("crossingNumber_groupBox"));
        verticalLayout_30 = new QVBoxLayout(crossingNumber_groupBox);
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setContentsMargins(11, 11, 11, 11);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        cnEnding_checkBox = new QCheckBox(crossingNumber_groupBox);
        cnEnding_checkBox->setObjectName(QStringLiteral("cnEnding_checkBox"));

        gridLayout_3->addWidget(cnEnding_checkBox, 0, 0, 1, 1);

        cnBifurcation_checkBox = new QCheckBox(crossingNumber_groupBox);
        cnBifurcation_checkBox->setObjectName(QStringLiteral("cnBifurcation_checkBox"));

        gridLayout_3->addWidget(cnBifurcation_checkBox, 1, 0, 1, 1);


        verticalLayout_30->addLayout(gridLayout_3);


        verticalLayout_32->addWidget(crossingNumber_groupBox);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_32->addItem(verticalSpacer_4);

        neuralNetwork_groupBox = new QGroupBox(minutiaeToShow_groupBox);
        neuralNetwork_groupBox->setObjectName(QStringLiteral("neuralNetwork_groupBox"));
        verticalLayout_31 = new QVBoxLayout(neuralNetwork_groupBox);
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setContentsMargins(11, 11, 11, 11);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        nnEnding_checkBox = new QCheckBox(neuralNetwork_groupBox);
        nnEnding_checkBox->setObjectName(QStringLiteral("nnEnding_checkBox"));
        nnEnding_checkBox->setChecked(true);

        gridLayout_4->addWidget(nnEnding_checkBox, 0, 0, 1, 1);

        nnBifurcation_checkBox = new QCheckBox(neuralNetwork_groupBox);
        nnBifurcation_checkBox->setObjectName(QStringLiteral("nnBifurcation_checkBox"));
        nnBifurcation_checkBox->setChecked(true);

        gridLayout_4->addWidget(nnBifurcation_checkBox, 1, 0, 1, 1);

        nnFalseMinutiae_checkBox = new QCheckBox(neuralNetwork_groupBox);
        nnFalseMinutiae_checkBox->setObjectName(QStringLiteral("nnFalseMinutiae_checkBox"));
        nnFalseMinutiae_checkBox->setChecked(false);

        gridLayout_4->addWidget(nnFalseMinutiae_checkBox, 2, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        probability_checkBox = new QCheckBox(neuralNetwork_groupBox);
        probability_checkBox->setObjectName(QStringLiteral("probability_checkBox"));
        probability_checkBox->setMinimumSize(QSize(68, 0));
        probability_checkBox->setMaximumSize(QSize(68, 16777215));

        horizontalLayout_10->addWidget(probability_checkBox);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_17);

        probability_spinBox = new QSpinBox(neuralNetwork_groupBox);
        probability_spinBox->setObjectName(QStringLiteral("probability_spinBox"));
        probability_spinBox->setMinimumSize(QSize(40, 0));
        probability_spinBox->setMaximumSize(QSize(40, 16777215));
        probability_spinBox->setMaximum(100);
        probability_spinBox->setValue(70);

        horizontalLayout_10->addWidget(probability_spinBox);


        gridLayout_4->addLayout(horizontalLayout_10, 3, 0, 1, 1);


        verticalLayout_31->addLayout(gridLayout_4);


        verticalLayout_32->addWidget(neuralNetwork_groupBox);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_32->addItem(verticalSpacer_5);


        horizontalLayout_13->addWidget(minutiaeToShow_groupBox);

        horizontalSpacer_13 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_13);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        baseMinutiae_groupBox = new QGroupBox(extractionResults_groupBox);
        baseMinutiae_groupBox->setObjectName(QStringLiteral("baseMinutiae_groupBox"));
        baseMinutiae_groupBox->setMaximumSize(QSize(220, 155));
        verticalLayout_22 = new QVBoxLayout(baseMinutiae_groupBox);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        baseMinutiae_textBrowser = new QTextBrowser(baseMinutiae_groupBox);
        baseMinutiae_textBrowser->setObjectName(QStringLiteral("baseMinutiae_textBrowser"));
        baseMinutiae_textBrowser->setMaximumSize(QSize(200, 120));

        verticalLayout_22->addWidget(baseMinutiae_textBrowser);


        verticalLayout_26->addWidget(baseMinutiae_groupBox);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_26->addItem(verticalSpacer_3);

        complexMinutiae_groupBox = new QGroupBox(extractionResults_groupBox);
        complexMinutiae_groupBox->setObjectName(QStringLiteral("complexMinutiae_groupBox"));
        complexMinutiae_groupBox->setMaximumSize(QSize(220, 155));
        verticalLayout_25 = new QVBoxLayout(complexMinutiae_groupBox);
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        complexMinutiae_textBrowser = new QTextBrowser(complexMinutiae_groupBox);
        complexMinutiae_textBrowser->setObjectName(QStringLiteral("complexMinutiae_textBrowser"));
        complexMinutiae_textBrowser->setMaximumSize(QSize(200, 120));

        verticalLayout_25->addWidget(complexMinutiae_textBrowser);


        verticalLayout_26->addWidget(complexMinutiae_groupBox);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_26->addItem(verticalSpacer_6);


        horizontalLayout_13->addLayout(verticalLayout_26);


        verticalLayout_33->addLayout(horizontalLayout_13);


        verticalLayout_34->addWidget(extractionResults_groupBox);


        verticalLayout_35->addLayout(verticalLayout_34);

        tabWidget->addTab(expertResults_tab, QString());
        addUser_tab = new QWidget();
        addUser_tab->setObjectName(QStringLiteral("addUser_tab"));
        verticalLayout_43 = new QVBoxLayout(addUser_tab);
        verticalLayout_43->setSpacing(6);
        verticalLayout_43->setContentsMargins(11, 11, 11, 11);
        verticalLayout_43->setObjectName(QStringLiteral("verticalLayout_43"));
        verticalLayout_42 = new QVBoxLayout();
        verticalLayout_42->setSpacing(6);
        verticalLayout_42->setObjectName(QStringLiteral("verticalLayout_42"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        selectedFinger_groupBox = new QGroupBox(addUser_tab);
        selectedFinger_groupBox->setObjectName(QStringLiteral("selectedFinger_groupBox"));
        selectedFinger_groupBox->setMinimumSize(QSize(390, 0));
        selectedFinger_groupBox->setMaximumSize(QSize(390, 16777215));
        verticalLayout_38 = new QVBoxLayout(selectedFinger_groupBox);
        verticalLayout_38->setSpacing(6);
        verticalLayout_38->setContentsMargins(11, 11, 11, 11);
        verticalLayout_38->setObjectName(QStringLiteral("verticalLayout_38"));
        addUserInstructions_label = new QLabel(selectedFinger_groupBox);
        addUserInstructions_label->setObjectName(QStringLiteral("addUserInstructions_label"));
        addUserInstructions_label->setMinimumSize(QSize(350, 0));
        addUserInstructions_label->setMaximumSize(QSize(350, 16777215));

        verticalLayout_38->addWidget(addUserInstructions_label);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_23 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_23);

        fingerHelp_view = new QGraphicsView(selectedFinger_groupBox);
        fingerHelp_view->setObjectName(QStringLiteral("fingerHelp_view"));
        fingerHelp_view->setMinimumSize(QSize(350, 420));
        fingerHelp_view->setMaximumSize(QSize(350, 420));
        fingerHelp_view->setFrameShape(QFrame::NoFrame);
        fingerHelp_view->setLineWidth(0);
        fingerHelp_view->setInteractive(true);

        horizontalLayout_9->addWidget(fingerHelp_view);

        horizontalSpacer_25 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_25);


        verticalLayout_38->addLayout(horizontalLayout_9);

        verticalSpacer_8 = new QSpacerItem(17, 14, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_38->addItem(verticalSpacer_8);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        step_label = new QLabel(selectedFinger_groupBox);
        step_label->setObjectName(QStringLiteral("step_label"));
        step_label->setMinimumSize(QSize(27, 0));
        step_label->setMaximumSize(QSize(27, 16777215));

        horizontalLayout_15->addWidget(step_label);

        step1_checkBox = new QCheckBox(selectedFinger_groupBox);
        step1_checkBox->setObjectName(QStringLiteral("step1_checkBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(step1_checkBox->sizePolicy().hasHeightForWidth());
        step1_checkBox->setSizePolicy(sizePolicy);
        step1_checkBox->setMinimumSize(QSize(32, 0));
        step1_checkBox->setMaximumSize(QSize(32, 16777215));
        step1_checkBox->setCheckable(true);

        horizontalLayout_15->addWidget(step1_checkBox);

        step2_checkBox = new QCheckBox(selectedFinger_groupBox);
        step2_checkBox->setObjectName(QStringLiteral("step2_checkBox"));
        step2_checkBox->setEnabled(true);
        sizePolicy.setHeightForWidth(step2_checkBox->sizePolicy().hasHeightForWidth());
        step2_checkBox->setSizePolicy(sizePolicy);
        step2_checkBox->setMinimumSize(QSize(32, 0));
        step2_checkBox->setMaximumSize(QSize(32, 16777215));
        step2_checkBox->setCheckable(true);

        horizontalLayout_15->addWidget(step2_checkBox);

        step3_checkBox = new QCheckBox(selectedFinger_groupBox);
        step3_checkBox->setObjectName(QStringLiteral("step3_checkBox"));
        sizePolicy.setHeightForWidth(step3_checkBox->sizePolicy().hasHeightForWidth());
        step3_checkBox->setSizePolicy(sizePolicy);
        step3_checkBox->setMinimumSize(QSize(32, 0));
        step3_checkBox->setMaximumSize(QSize(32, 16777215));
        step3_checkBox->setCheckable(true);

        horizontalLayout_15->addWidget(step3_checkBox);

        step4_checkBox = new QCheckBox(selectedFinger_groupBox);
        step4_checkBox->setObjectName(QStringLiteral("step4_checkBox"));
        sizePolicy.setHeightForWidth(step4_checkBox->sizePolicy().hasHeightForWidth());
        step4_checkBox->setSizePolicy(sizePolicy);
        step4_checkBox->setMinimumSize(QSize(32, 0));
        step4_checkBox->setMaximumSize(QSize(32, 16777215));
        step4_checkBox->setCheckable(true);

        horizontalLayout_15->addWidget(step4_checkBox);

        step5_checkBox = new QCheckBox(selectedFinger_groupBox);
        step5_checkBox->setObjectName(QStringLiteral("step5_checkBox"));
        sizePolicy.setHeightForWidth(step5_checkBox->sizePolicy().hasHeightForWidth());
        step5_checkBox->setSizePolicy(sizePolicy);
        step5_checkBox->setMinimumSize(QSize(32, 0));
        step5_checkBox->setMaximumSize(QSize(32, 16777215));
        step5_checkBox->setCheckable(true);

        horizontalLayout_15->addWidget(step5_checkBox);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_22);

        clear_pushButton = new QPushButton(selectedFinger_groupBox);
        clear_pushButton->setObjectName(QStringLiteral("clear_pushButton"));
        clear_pushButton->setEnabled(false);
        clear_pushButton->setMinimumSize(QSize(40, 0));
        clear_pushButton->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_15->addWidget(clear_pushButton);

        capture_pushButton = new QPushButton(selectedFinger_groupBox);
        capture_pushButton->setObjectName(QStringLiteral("capture_pushButton"));
        capture_pushButton->setEnabled(false);
        capture_pushButton->setMinimumSize(QSize(75, 0));
        capture_pushButton->setMaximumSize(QSize(75, 16777215));

        horizontalLayout_15->addWidget(capture_pushButton);


        verticalLayout_38->addLayout(horizontalLayout_15);


        horizontalLayout_20->addWidget(selectedFinger_groupBox);

        horizontalSpacer_21 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_21);

        verticalLayout_41 = new QVBoxLayout();
        verticalLayout_41->setSpacing(6);
        verticalLayout_41->setObjectName(QStringLiteral("verticalLayout_41"));
        source_groupBox = new QGroupBox(addUser_tab);
        source_groupBox->setObjectName(QStringLiteral("source_groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(source_groupBox->sizePolicy().hasHeightForWidth());
        source_groupBox->setSizePolicy(sizePolicy1);
        source_groupBox->setMinimumSize(QSize(340, 60));
        source_groupBox->setMaximumSize(QSize(340, 60));
        verticalLayout_40 = new QVBoxLayout(source_groupBox);
        verticalLayout_40->setSpacing(6);
        verticalLayout_40->setContentsMargins(11, 11, 11, 11);
        verticalLayout_40->setObjectName(QStringLiteral("verticalLayout_40"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        livePreview_comboBox = new QComboBox(source_groupBox);
        livePreview_comboBox->addItem(QString());
        livePreview_comboBox->addItem(QString());
        livePreview_comboBox->addItem(QString());
        livePreview_comboBox->setObjectName(QStringLiteral("livePreview_comboBox"));
        livePreview_comboBox->setMinimumSize(QSize(150, 20));
        livePreview_comboBox->setMaximumSize(QSize(150, 20));

        horizontalLayout_16->addWidget(livePreview_comboBox);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_24);


        verticalLayout_40->addLayout(horizontalLayout_16);


        verticalLayout_41->addWidget(source_groupBox);

        livePreview_groupBox = new QGroupBox(addUser_tab);
        livePreview_groupBox->setObjectName(QStringLiteral("livePreview_groupBox"));
        livePreview_groupBox->setMinimumSize(QSize(340, 0));
        livePreview_groupBox->setMaximumSize(QSize(340, 16777215));
        verticalLayout_36 = new QVBoxLayout(livePreview_groupBox);
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setContentsMargins(11, 11, 11, 11);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        livePreview_view = new QGraphicsView(livePreview_groupBox);
        livePreview_view->setObjectName(QStringLiteral("livePreview_view"));
        livePreview_view->setMinimumSize(QSize(260, 390));
        livePreview_view->setMaximumSize(QSize(260, 390));
        livePreview_view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        livePreview_view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_17->addWidget(livePreview_view);

        horizontalSpacer_26 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_26);

        quality_progressBar = new QProgressBar(livePreview_groupBox);
        quality_progressBar->setObjectName(QStringLiteral("quality_progressBar"));
        quality_progressBar->setMinimumSize(QSize(20, 390));
        quality_progressBar->setMaximumSize(QSize(20, 390));
        quality_progressBar->setValue(0);
        quality_progressBar->setTextVisible(false);
        quality_progressBar->setOrientation(Qt::Vertical);

        horizontalLayout_17->addWidget(quality_progressBar);


        verticalLayout_36->addLayout(horizontalLayout_17);

        verticalSpacer_7 = new QSpacerItem(17, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_36->addItem(verticalSpacer_7);


        verticalLayout_41->addWidget(livePreview_groupBox);


        horizontalLayout_20->addLayout(verticalLayout_41);


        verticalLayout_42->addLayout(horizontalLayout_20);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_42->addItem(verticalSpacer_12);

        capturedFingers_groupBox = new QGroupBox(addUser_tab);
        capturedFingers_groupBox->setObjectName(QStringLiteral("capturedFingers_groupBox"));
        capturedFingers_groupBox->setMinimumSize(QSize(0, 100));
        capturedFingers_groupBox->setMaximumSize(QSize(16777215, 100));
        verticalLayout_23 = new QVBoxLayout(capturedFingers_groupBox);
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setContentsMargins(11, 11, 11, 11);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        leftHand1_pushButton = new QPushButton(capturedFingers_groupBox);
        leftHand1_pushButton->setObjectName(QStringLiteral("leftHand1_pushButton"));
        leftHand1_pushButton->setMinimumSize(QSize(60, 60));
        leftHand1_pushButton->setMaximumSize(QSize(60, 60));
        QFont font1;
        font1.setStrikeOut(false);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferDefault);
        leftHand1_pushButton->setFont(font1);
        leftHand1_pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        leftHand1_pushButton->setCheckable(false);

        horizontalLayout_18->addWidget(leftHand1_pushButton);

        leftHand2_pushButton = new QPushButton(capturedFingers_groupBox);
        leftHand2_pushButton->setObjectName(QStringLiteral("leftHand2_pushButton"));
        leftHand2_pushButton->setMinimumSize(QSize(60, 60));
        leftHand2_pushButton->setMaximumSize(QSize(60, 60));
        QFont font2;
        font2.setKerning(true);
        leftHand2_pushButton->setFont(font2);
        leftHand2_pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_18->addWidget(leftHand2_pushButton);

        leftHand3_pushButton = new QPushButton(capturedFingers_groupBox);
        leftHand3_pushButton->setObjectName(QStringLiteral("leftHand3_pushButton"));
        leftHand3_pushButton->setMinimumSize(QSize(60, 60));
        leftHand3_pushButton->setMaximumSize(QSize(60, 60));
        leftHand3_pushButton->setFont(font2);
        leftHand3_pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_18->addWidget(leftHand3_pushButton);

        leftHand4_pushButton = new QPushButton(capturedFingers_groupBox);
        leftHand4_pushButton->setObjectName(QStringLiteral("leftHand4_pushButton"));
        leftHand4_pushButton->setMinimumSize(QSize(60, 60));
        leftHand4_pushButton->setMaximumSize(QSize(60, 60));
        leftHand4_pushButton->setFont(font2);
        leftHand4_pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_18->addWidget(leftHand4_pushButton);

        leftHand5_pushButton = new QPushButton(capturedFingers_groupBox);
        leftHand5_pushButton->setObjectName(QStringLiteral("leftHand5_pushButton"));
        leftHand5_pushButton->setMinimumSize(QSize(60, 60));
        leftHand5_pushButton->setMaximumSize(QSize(60, 60));
        leftHand5_pushButton->setFont(font2);
        leftHand5_pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_18->addWidget(leftHand5_pushButton);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_18);

        rightHand1_pushButton = new QPushButton(capturedFingers_groupBox);
        rightHand1_pushButton->setObjectName(QStringLiteral("rightHand1_pushButton"));
        rightHand1_pushButton->setMinimumSize(QSize(60, 60));
        rightHand1_pushButton->setMaximumSize(QSize(60, 60));
        rightHand1_pushButton->setFont(font2);
        rightHand1_pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_18->addWidget(rightHand1_pushButton);

        rightHand2_pushButton = new QPushButton(capturedFingers_groupBox);
        rightHand2_pushButton->setObjectName(QStringLiteral("rightHand2_pushButton"));
        rightHand2_pushButton->setMinimumSize(QSize(60, 60));
        rightHand2_pushButton->setMaximumSize(QSize(60, 60));
        rightHand2_pushButton->setFont(font2);
        rightHand2_pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_18->addWidget(rightHand2_pushButton);

        rightHand3_pushButton = new QPushButton(capturedFingers_groupBox);
        rightHand3_pushButton->setObjectName(QStringLiteral("rightHand3_pushButton"));
        rightHand3_pushButton->setMinimumSize(QSize(60, 60));
        rightHand3_pushButton->setMaximumSize(QSize(60, 60));
        rightHand3_pushButton->setFont(font2);
        rightHand3_pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_18->addWidget(rightHand3_pushButton);

        rightHand4_pushButton = new QPushButton(capturedFingers_groupBox);
        rightHand4_pushButton->setObjectName(QStringLiteral("rightHand4_pushButton"));
        rightHand4_pushButton->setMinimumSize(QSize(60, 60));
        rightHand4_pushButton->setMaximumSize(QSize(60, 60));
        rightHand4_pushButton->setFont(font2);
        rightHand4_pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_18->addWidget(rightHand4_pushButton);

        rightHand5_pushButton = new QPushButton(capturedFingers_groupBox);
        rightHand5_pushButton->setObjectName(QStringLiteral("rightHand5_pushButton"));
        rightHand5_pushButton->setMinimumSize(QSize(60, 60));
        rightHand5_pushButton->setMaximumSize(QSize(60, 60));
        rightHand5_pushButton->setFont(font2);
        rightHand5_pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_18->addWidget(rightHand5_pushButton);


        verticalLayout_23->addLayout(horizontalLayout_18);


        verticalLayout_42->addWidget(capturedFingers_groupBox);

        output_groupBox = new QGroupBox(addUser_tab);
        output_groupBox->setObjectName(QStringLiteral("output_groupBox"));
        output_groupBox->setEnabled(false);
        output_groupBox->setMinimumSize(QSize(0, 60));
        output_groupBox->setMaximumSize(QSize(16777215, 60));
        verticalLayout_39 = new QVBoxLayout(output_groupBox);
        verticalLayout_39->setSpacing(6);
        verticalLayout_39->setContentsMargins(11, 11, 11, 11);
        verticalLayout_39->setObjectName(QStringLiteral("verticalLayout_39"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        firstName_label = new QLabel(output_groupBox);
        firstName_label->setObjectName(QStringLiteral("firstName_label"));
        firstName_label->setMinimumSize(QSize(60, 0));
        firstName_label->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_14->addWidget(firstName_label);

        firstName_lineEdit = new QLineEdit(output_groupBox);
        firstName_lineEdit->setObjectName(QStringLiteral("firstName_lineEdit"));
        firstName_lineEdit->setMinimumSize(QSize(100, 0));
        firstName_lineEdit->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_14->addWidget(firstName_lineEdit);

        horizontalSpacer_19 = new QSpacerItem(20, 15, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_19);

        lastName_label = new QLabel(output_groupBox);
        lastName_label->setObjectName(QStringLiteral("lastName_label"));
        lastName_label->setMinimumSize(QSize(60, 0));
        lastName_label->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_14->addWidget(lastName_label);

        lastName_lineEdit = new QLineEdit(output_groupBox);
        lastName_lineEdit->setObjectName(QStringLiteral("lastName_lineEdit"));
        lastName_lineEdit->setMinimumSize(QSize(100, 0));
        lastName_lineEdit->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_14->addWidget(lastName_lineEdit);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_20);

        saveNewUser_pushButton = new QPushButton(output_groupBox);
        saveNewUser_pushButton->setObjectName(QStringLiteral("saveNewUser_pushButton"));

        horizontalLayout_14->addWidget(saveNewUser_pushButton);


        verticalLayout_39->addLayout(horizontalLayout_14);


        verticalLayout_42->addWidget(output_groupBox);


        verticalLayout_43->addLayout(verticalLayout_42);

        tabWidget->addTab(addUser_tab, QString());

        verticalLayout_44->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1065, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "D-Box Client", nullptr));
        serverStatus_groupBox_2->setTitle(QApplication::translate("MainWindow", "Server Status", nullptr));
        serverStatus_label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Not Connected</span></p></body></html>", nullptr));
        connectToServer_button_2->setText(QApplication::translate("MainWindow", "Connect to Server", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Image loaded", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Name", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Surname", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "---Choose---", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Suprema BioMini Slim", nullptr));

        pushButton_2->setText(QApplication::translate("MainWindow", "Login!", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Login", nullptr));
        serverStatus_groupBox_3->setTitle(QApplication::translate("MainWindow", "Server Status", nullptr));
        serverStatus_label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Not Connected</span></p></body></html>", nullptr));
        connectToServer_button_3->setText(QApplication::translate("MainWindow", "Connect to Server", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Image loaded", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Name", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Surname", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("MainWindow", "---Choose---", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("MainWindow", "Suprema BioMini Slim", nullptr));

        pushButton_3->setText(QApplication::translate("MainWindow", "Registration!", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Registration", nullptr));
        serverStatus_groupBox->setTitle(QApplication::translate("MainWindow", "Server Status", nullptr));
        serverStatus_label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Not Connected</span></p></body></html>", nullptr));
        connectToServer_button->setText(QApplication::translate("MainWindow", "Connect to Server", nullptr));
        imageInput_groupBox->setTitle(QApplication::translate("MainWindow", "Image Input", nullptr));
        readFromFile_button->setText(QApplication::translate("MainWindow", "Read from File", nullptr));
        readFromScanner_label->setText(QApplication::translate("MainWindow", "Read from Scanner:", nullptr));
        readFromScanner_comboBox->setItemText(0, QApplication::translate("MainWindow", "- Choose -", nullptr));
        readFromScanner_comboBox->setItemText(1, QApplication::translate("MainWindow", "Suprema BioMini Slim", nullptr));
        readFromScanner_comboBox->setItemText(2, QApplication::translate("MainWindow", "Biometrika HiScan-PRO", nullptr));

        imageInfo_groupBox->setTitle(QApplication::translate("MainWindow", "Image Information", nullptr));
        imageNameInfo_label->setText(QApplication::translate("MainWindow", "Name: ", nullptr));
        imageName_label->setText(QApplication::translate("MainWindow", "-imageName-", nullptr));
        imageType_label->setText(QApplication::translate("MainWindow", "Type:", nullptr));
        imageWidth_label->setText(QApplication::translate("MainWindow", "Width:", nullptr));
        imageHeight_label->setText(QApplication::translate("MainWindow", "Height:", nullptr));
        process_groupBox->setTitle(QApplication::translate("MainWindow", "Process", nullptr));
        process_label->setText(QApplication::translate("MainWindow", "Load an image, select mode and press the start button", nullptr));
        sendToServer_button->setText(QApplication::translate("MainWindow", "Start", nullptr));
        settings_groupBox->setTitle(QApplication::translate("MainWindow", "Settings", nullptr));
        mode_groupBox->setTitle(QApplication::translate("MainWindow", "Mode", nullptr));
        identification_radioButton->setText(QApplication::translate("MainWindow", "Identification", nullptr));
        verification_radioButton->setText(QApplication::translate("MainWindow", "Verification", nullptr));
        verification_label->setText(QApplication::translate("MainWindow", "ID:", nullptr));
        expert_radioButton->setText(QApplication::translate("MainWindow", "Expert", nullptr));
        expert_groupBox->setTitle(QApplication::translate("MainWindow", "Expert Mode", nullptr));
        cpuGpuMode_groupBox->setTitle(QApplication::translate("MainWindow", "CPU/GPU Mode", nullptr));
        cpu_radioButton->setText(QApplication::translate("MainWindow", "CPU", nullptr));
        gpu_radioButton->setText(QApplication::translate("MainWindow", "GPU", nullptr));
        imageMask_groupBox->setTitle(QApplication::translate("MainWindow", "Image Mask", nullptr));
        maskStandard_radioButton->setText(QApplication::translate("MainWindow", "Standard", nullptr));
        maskNeural_radioButton->setText(QApplication::translate("MainWindow", "Neural Network", nullptr));
        maskFilterSize_label->setText(QApplication::translate("MainWindow", "Filter Size", nullptr));
        gaborFilter_groupBox->setTitle(QApplication::translate("MainWindow", "Gabor Filter", nullptr));
        gaborSigma_label->setText(QApplication::translate("MainWindow", "Sigma", nullptr));
        gaborLambda_label->setText(QApplication::translate("MainWindow", "Lambda", nullptr));
        blockSize_label->setText(QApplication::translate("MainWindow", "Block size", nullptr));
        gaborThreshold_label->setText(QApplication::translate("MainWindow", "Threshold", nullptr));
        extraction_groupBox->setTitle(QApplication::translate("MainWindow", "Extraction", nullptr));
        extractionBlock_label->setText(QApplication::translate("MainWindow", "Block Size", nullptr));
        extractionBorder_label->setText(QApplication::translate("MainWindow", "Border Ignore", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Set default parameters", nullptr));
        label->setText(QApplication::translate("MainWindow", "Person logged in: ", nullptr));
        result_groupBox->setTitle(QApplication::translate("MainWindow", "Result", nullptr));
        time_label->setText(QString());
        result_label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(main_tab), QApplication::translate("MainWindow", "D-Box", nullptr));
        preprocessResults_groupBox->setTitle(QApplication::translate("MainWindow", "Preprocess Results", nullptr));
        mask_label->setText(QApplication::translate("MainWindow", "Map of quality", nullptr));
        gaborFiltered_label->setText(QApplication::translate("MainWindow", "Gabor Filtered", nullptr));
        binarized_label->setText(QApplication::translate("MainWindow", "Binarized", nullptr));
        skeleton_label->setText(QApplication::translate("MainWindow", "Skeleton", nullptr));
        extractionResults_groupBox->setTitle(QApplication::translate("MainWindow", "Extraction Results", nullptr));
        minutiaeToShow_groupBox->setTitle(QApplication::translate("MainWindow", "Minutiae to Show", nullptr));
        crossingNumber_groupBox->setTitle(QApplication::translate("MainWindow", "Crossing Number", nullptr));
        cnEnding_checkBox->setText(QApplication::translate("MainWindow", "Ending", nullptr));
        cnBifurcation_checkBox->setText(QApplication::translate("MainWindow", "Bifurcation", nullptr));
        neuralNetwork_groupBox->setTitle(QApplication::translate("MainWindow", "Neural Network", nullptr));
        nnEnding_checkBox->setText(QApplication::translate("MainWindow", "Ending", nullptr));
        nnBifurcation_checkBox->setText(QApplication::translate("MainWindow", "Bifurcation", nullptr));
        nnFalseMinutiae_checkBox->setText(QApplication::translate("MainWindow", "False minutiae", nullptr));
        probability_checkBox->setText(QApplication::translate("MainWindow", "Probability", nullptr));
        baseMinutiae_groupBox->setTitle(QApplication::translate("MainWindow", "Base Minutiae", nullptr));
        complexMinutiae_groupBox->setTitle(QApplication::translate("MainWindow", "Complex Minutiae", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(expertResults_tab), QApplication::translate("MainWindow", "Expert Results", nullptr));
        selectedFinger_groupBox->setTitle(QApplication::translate("MainWindow", "Selected Finger", nullptr));
        addUserInstructions_label->setText(QApplication::translate("MainWindow", "Please select a finger you want to capture", nullptr));
        step_label->setText(QApplication::translate("MainWindow", "Step", nullptr));
        step1_checkBox->setText(QApplication::translate("MainWindow", "1", nullptr));
        step2_checkBox->setText(QApplication::translate("MainWindow", "2", nullptr));
#ifndef QT_NO_SHORTCUT
        step2_checkBox->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        step3_checkBox->setText(QApplication::translate("MainWindow", "3", nullptr));
        step4_checkBox->setText(QApplication::translate("MainWindow", "4", nullptr));
        step5_checkBox->setText(QApplication::translate("MainWindow", "5", nullptr));
        clear_pushButton->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        capture_pushButton->setText(QApplication::translate("MainWindow", "Capture", nullptr));
        source_groupBox->setTitle(QApplication::translate("MainWindow", "Source", nullptr));
        livePreview_comboBox->setItemText(0, QApplication::translate("MainWindow", "- Choose -", nullptr));
        livePreview_comboBox->setItemText(1, QApplication::translate("MainWindow", "Suprema BioMini Slim", nullptr));
        livePreview_comboBox->setItemText(2, QApplication::translate("MainWindow", "Biometrika HiScan-PRO", nullptr));

        livePreview_groupBox->setTitle(QApplication::translate("MainWindow", "Live Preview", nullptr));
        capturedFingers_groupBox->setTitle(QApplication::translate("MainWindow", "Captured Fingers", nullptr));
        leftHand1_pushButton->setText(QApplication::translate("MainWindow", "Left\n"
"Pinky\n"
"Finger", nullptr));
        leftHand2_pushButton->setText(QApplication::translate("MainWindow", "Left\n"
"Ring\n"
"Finger", nullptr));
        leftHand3_pushButton->setText(QApplication::translate("MainWindow", "Left\n"
"Middle\n"
"Finger", nullptr));
        leftHand4_pushButton->setText(QApplication::translate("MainWindow", "Left\n"
"Index\n"
"Finger", nullptr));
        leftHand5_pushButton->setText(QApplication::translate("MainWindow", "Left\n"
"Thumb", nullptr));
        rightHand1_pushButton->setText(QApplication::translate("MainWindow", "Right\n"
"Thumb", nullptr));
        rightHand2_pushButton->setText(QApplication::translate("MainWindow", "Right\n"
"Index\n"
"Finger", nullptr));
        rightHand3_pushButton->setText(QApplication::translate("MainWindow", "Right\n"
"Middle\n"
"Finger", nullptr));
        rightHand4_pushButton->setText(QApplication::translate("MainWindow", "Right\n"
"Ring\n"
"Finger", nullptr));
        rightHand5_pushButton->setText(QApplication::translate("MainWindow", "Right\n"
"Pinky\n"
"Finger", nullptr));
        output_groupBox->setTitle(QApplication::translate("MainWindow", "Output", nullptr));
        firstName_label->setText(QApplication::translate("MainWindow", "First Name", nullptr));
        lastName_label->setText(QApplication::translate("MainWindow", "Last Name", nullptr));
        saveNewUser_pushButton->setText(QApplication::translate("MainWindow", "Save new user", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(addUser_tab), QApplication::translate("MainWindow", "Add user", nullptr));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "D-Box client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
