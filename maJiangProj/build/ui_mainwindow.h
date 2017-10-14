/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *trainBtn;
    QPushButton *openBtn;
    QPushButton *loadModelBtn;
    QPushButton *predictBtn;
    QRadioButton *radioButton_152;
    QRadioButton *radioButton_136;
    QGroupBox *groupBox_2;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(900, 700);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 640, 480));
        label->setFrameShape(QFrame::Box);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(760, 10, 120, 301));
        trainBtn = new QPushButton(groupBox);
        trainBtn->setObjectName(QStringLiteral("trainBtn"));
        trainBtn->setGeometry(QRect(10, 30, 89, 25));
        openBtn = new QPushButton(groupBox);
        openBtn->setObjectName(QStringLiteral("openBtn"));
        openBtn->setGeometry(QRect(10, 100, 89, 25));
        loadModelBtn = new QPushButton(groupBox);
        loadModelBtn->setObjectName(QStringLiteral("loadModelBtn"));
        loadModelBtn->setGeometry(QRect(10, 70, 91, 25));
        predictBtn = new QPushButton(groupBox);
        predictBtn->setObjectName(QStringLiteral("predictBtn"));
        predictBtn->setGeometry(QRect(10, 140, 89, 25));
        radioButton_152 = new QRadioButton(groupBox);
        radioButton_152->setObjectName(QStringLiteral("radioButton_152"));
        radioButton_152->setGeometry(QRect(20, 190, 61, 23));
        radioButton_136 = new QRadioButton(groupBox);
        radioButton_136->setObjectName(QStringLiteral("radioButton_136"));
        radioButton_136->setGeometry(QRect(20, 170, 61, 23));
        radioButton_136->setChecked(true);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 500, 641, 141));
        textBrowser = new QTextBrowser(groupBox_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 20, 621, 111));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "tools", 0));
        trainBtn->setText(QApplication::translate("MainWindow", "\350\256\255     \347\273\203", 0));
        openBtn->setText(QApplication::translate("MainWindow", "\346\211\223    \345\274\200", 0));
        loadModelBtn->setText(QApplication::translate("MainWindow", "\345\212\240\350\275\275\346\250\241\345\236\213\346\226\207\344\273\266", 0));
        predictBtn->setText(QApplication::translate("MainWindow", "\350\257\206    \345\210\253", 0));
        radioButton_152->setText(QApplication::translate("MainWindow", "152", 0));
        radioButton_136->setText(QApplication::translate("MainWindow", "136", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\350\276\223\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
