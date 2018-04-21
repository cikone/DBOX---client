/********************************************************************************
** Form generated from reading UI file 'manual.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUAL_H
#define UI_MANUAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *imgMask_label;
    QGraphicsView *imgMask_view;
    QVBoxLayout *verticalLayout_2;
    QLabel *imgGaborFiltered_label;
    QGraphicsView *imgGaborFiltered_view;
    QVBoxLayout *verticalLayout_3;
    QLabel *imgBinarized_label;
    QGraphicsView *imgBinarized_view;
    QVBoxLayout *verticalLayout_4;
    QLabel *imgSkeleton_label;
    QGraphicsView *imgSkeleton_view;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(762, 756);
        widget = new QWidget(Form);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 11, 741, 731));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        imgMask_label = new QLabel(widget);
        imgMask_label->setObjectName(QStringLiteral("imgMask_label"));

        verticalLayout->addWidget(imgMask_label);

        imgMask_view = new QGraphicsView(widget);
        imgMask_view->setObjectName(QStringLiteral("imgMask_view"));

        verticalLayout->addWidget(imgMask_view);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        imgGaborFiltered_label = new QLabel(widget);
        imgGaborFiltered_label->setObjectName(QStringLiteral("imgGaborFiltered_label"));

        verticalLayout_2->addWidget(imgGaborFiltered_label);

        imgGaborFiltered_view = new QGraphicsView(widget);
        imgGaborFiltered_view->setObjectName(QStringLiteral("imgGaborFiltered_view"));

        verticalLayout_2->addWidget(imgGaborFiltered_view);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        imgBinarized_label = new QLabel(widget);
        imgBinarized_label->setObjectName(QStringLiteral("imgBinarized_label"));

        verticalLayout_3->addWidget(imgBinarized_label);

        imgBinarized_view = new QGraphicsView(widget);
        imgBinarized_view->setObjectName(QStringLiteral("imgBinarized_view"));

        verticalLayout_3->addWidget(imgBinarized_view);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        imgSkeleton_label = new QLabel(widget);
        imgSkeleton_label->setObjectName(QStringLiteral("imgSkeleton_label"));

        verticalLayout_4->addWidget(imgSkeleton_label);

        imgSkeleton_view = new QGraphicsView(widget);
        imgSkeleton_view->setObjectName(QStringLiteral("imgSkeleton_view"));

        verticalLayout_4->addWidget(imgSkeleton_view);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 1, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
        imgMask_label->setText(QApplication::translate("Form", "Mask", Q_NULLPTR));
        imgGaborFiltered_label->setText(QApplication::translate("Form", "Gabor Filtered", Q_NULLPTR));
        imgBinarized_label->setText(QApplication::translate("Form", "Binarized", Q_NULLPTR));
        imgSkeleton_label->setText(QApplication::translate("Form", "Skeleton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUAL_H
