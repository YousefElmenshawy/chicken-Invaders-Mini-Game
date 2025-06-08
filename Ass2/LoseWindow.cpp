#include "LoseWindow.h"
#include "ui_LoseWindow.h"
#include"mainwindow.h"
LoseWindow::LoseWindow(int FinalScore, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoseWindow)
{
    ui->setupUi(this);
    ui->Image->setPixmap(QPixmap(":/Images/Space2.JPG"));
    QFont font("Georgia", 28, QFont::Bold);  // Or use another classy font like "Times New Roman"
    ui->scoreLabel->setFont(font);

    QPalette palette = ui->scoreLabel->palette();
    palette.setColor(QPalette::WindowText, Qt::red);
    ui->scoreLabel->setPalette(palette);

    ui->scoreLabel->setText(QString("You Lost!\nScore: %1").arg(FinalScore));

}


LoseWindow::~LoseWindow()
{
    delete ui;
}

void LoseWindow::on_PlayButton_2_clicked()//Return to Main Menue
{
    MainWindow *mainMenu = new MainWindow();
    mainMenu->show();

    this->close();
}


void LoseWindow::on_PlayButton_clicked()//Exit
{
    QApplication::quit();
}

