#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"
extern game *gameWindow;
MainWindow::MainWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap p1 (":/Images/Space2.JPG");
    ui->Backgroundlabel->setPixmap(p1);
    ui->Backgroundlabel->setScaledContents(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PlayButton_clicked()
{
    this->hide(); // hide main menu
    gameWindow = new game(); // create game
    gameWindow->startGame(); // show game window
}

