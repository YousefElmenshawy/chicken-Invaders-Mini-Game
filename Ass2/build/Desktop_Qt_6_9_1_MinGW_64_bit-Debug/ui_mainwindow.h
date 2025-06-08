/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QLabel *Backgroundlabel;
    QPushButton *PlayButton;
    QLabel *label;

    void setupUi(QDialog *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        Backgroundlabel = new QLabel(MainWindow);
        Backgroundlabel->setObjectName("Backgroundlabel");
        Backgroundlabel->setGeometry(QRect(0, 0, 800, 600));
        PlayButton = new QPushButton(MainWindow);
        PlayButton->setObjectName("PlayButton");
        PlayButton->setGeometry(QRect(280, 330, 241, 71));
        PlayButton->setStyleSheet(QString::fromUtf8("font: 18pt \"Showcard Gothic\";\n"
"background-color: rgb(0, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(MainWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 100, 671, 81));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"font: 50pt  \"Comic Sans MS\";\n"
"\n"
""));

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QDialog *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Dialog", nullptr));
        Backgroundlabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        PlayButton->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Chicken Invaders", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
