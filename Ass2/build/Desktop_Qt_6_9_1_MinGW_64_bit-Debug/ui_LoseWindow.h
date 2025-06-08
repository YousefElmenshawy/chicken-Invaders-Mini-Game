/********************************************************************************
** Form generated from reading UI file 'LoseWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOSEWINDOW_H
#define UI_LOSEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoseWindow
{
public:
    QLabel *Image;
    QPushButton *PlayButton;
    QPushButton *PlayButton_2;
    QLabel *scoreLabel;

    void setupUi(QDialog *LoseWindow)
    {
        if (LoseWindow->objectName().isEmpty())
            LoseWindow->setObjectName("LoseWindow");
        LoseWindow->resize(800, 600);
        Image = new QLabel(LoseWindow);
        Image->setObjectName("Image");
        Image->setGeometry(QRect(0, 0, 800, 600));
        PlayButton = new QPushButton(LoseWindow);
        PlayButton->setObjectName("PlayButton");
        PlayButton->setGeometry(QRect(250, 440, 341, 71));
        PlayButton->setStyleSheet(QString::fromUtf8("font: 18pt \"Showcard Gothic\";\n"
"background-color: rgb(0, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        PlayButton_2 = new QPushButton(LoseWindow);
        PlayButton_2->setObjectName("PlayButton_2");
        PlayButton_2->setGeometry(QRect(250, 360, 341, 71));
        PlayButton_2->setStyleSheet(QString::fromUtf8("font: 18pt \"Showcard Gothic\";\n"
"background-color: rgb(0, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        scoreLabel = new QLabel(LoseWindow);
        scoreLabel->setObjectName("scoreLabel");
        scoreLabel->setGeometry(QRect(230, 100, 331, 91));

        retranslateUi(LoseWindow);

        QMetaObject::connectSlotsByName(LoseWindow);
    } // setupUi

    void retranslateUi(QDialog *LoseWindow)
    {
        LoseWindow->setWindowTitle(QCoreApplication::translate("LoseWindow", "Dialog", nullptr));
        Image->setText(QCoreApplication::translate("LoseWindow", "TextLabel", nullptr));
        PlayButton->setText(QCoreApplication::translate("LoseWindow", "Exit the game", nullptr));
        PlayButton_2->setText(QCoreApplication::translate("LoseWindow", "Return to Main-Menue", nullptr));
        scoreLabel->setText(QCoreApplication::translate("LoseWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoseWindow: public Ui_LoseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOSEWINDOW_H
