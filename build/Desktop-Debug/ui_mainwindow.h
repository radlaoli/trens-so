/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_trem1;
    QLabel *label_trem2;
    QLabel *label_trem3;
    QLabel *label_trem4;
    QLabel *label_trem5;
    QLabel *label_trem6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1150, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_trem1 = new QLabel(centralWidget);
        label_trem1->setObjectName(QString::fromUtf8("label_trem1"));
        label_trem1->setGeometry(QRect(60, 30, 21, 17));
        label_trem1->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trem2 = new QLabel(centralWidget);
        label_trem2->setObjectName(QString::fromUtf8("label_trem2"));
        label_trem2->setGeometry(QRect(330, 30, 21, 17));
        label_trem2->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trem3 = new QLabel(centralWidget);
        label_trem3->setObjectName(QString::fromUtf8("label_trem3"));
        label_trem3->setGeometry(QRect(540, 30, 21, 17));
        label_trem3->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trem4 = new QLabel(centralWidget);
        label_trem4->setObjectName(QString::fromUtf8("label_trem4"));
        label_trem4->setGeometry(QRect(60, 140, 21, 17));
        label_trem4->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trem5 = new QLabel(centralWidget);
        label_trem5->setObjectName(QString::fromUtf8("label_trem5"));
        label_trem5->setGeometry(QRect(330, 140, 21, 17));
        label_trem5->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trem6 = new QLabel(centralWidget);
        label_trem6->setObjectName(QString::fromUtf8("label_trem6"));
        label_trem6->setGeometry(QRect(540, 140, 21, 17));
        label_trem6->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1150, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_trem1->setText(QCoreApplication::translate("MainWindow", "T1", nullptr));
        label_trem2->setText(QCoreApplication::translate("MainWindow", "T2", nullptr));
        label_trem3->setText(QCoreApplication::translate("MainWindow", "T3", nullptr));
        label_trem4->setText(QCoreApplication::translate("MainWindow", "T4", nullptr));
        label_trem5->setText(QCoreApplication::translate("MainWindow", "T5", nullptr));
        label_trem6->setText(QCoreApplication::translate("MainWindow", "T6", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
