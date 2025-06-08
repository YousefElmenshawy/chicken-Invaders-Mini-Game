#include <QApplication>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include<QGraphicsView>
#include "player.h"
#include <QTimer>
#include <QDebug>
#include <QBrush>
#include "score.h"
#include"health.h"
#include<QMediaPlayer>
#include<QtMultimedia>
#include<QAudioOutput>
#include<mainwindow.h>
#include"game.h"
QGraphicsView *gameView;
Score * score;
Health*health;
 game *gameWindow;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    MainWindow menu;
    menu.show();



    return a.exec();
}
