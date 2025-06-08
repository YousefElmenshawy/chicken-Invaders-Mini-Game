#include "game.h"
#include <QTimer>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QBrush>
#include<QGraphicsView>
extern Score *score;
extern Health *health;
extern QGraphicsView *gameView;

game::game(QWidget *parent) : QWidget(parent) {
    gameView = new QGraphicsView(this);
    gameView->setFixedSize(800,600);

    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,800,600);
    scene->setBackgroundBrush(QBrush(QPixmap(":/Images/Space2.JPG")));
    gameView->setScene(scene);

    gameView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    gameView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    score = new Score();
    score->setPos(700,10);
    scene->addItem(score);

    health = new Health();
    health->setPos(10,10);
    scene->addItem(health);

    player = new Player();
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    QPixmap pixmap1(":/Images/ship.png");
    player->setPixmap(pixmap1);
    player->setPos(gameView->width()/2, gameView->height()-pixmap1.height());
    scene->addItem(player);

    musicPlayer = new QMediaPlayer(this);
    musicPlayer->setSource(QUrl("qrc:/Aud/bgsound.mp3"));
    audioOutput = new QAudioOutput(this);
    musicPlayer->setAudioOutput(audioOutput);
    audioOutput->setVolume(20);
    musicPlayer->play();

    enemyTimer = new QTimer(this);
    connect(enemyTimer, SIGNAL(timeout()), player, SLOT(createEnemy()));
    enemyTimer->start(2000);
}

void game::startGame() {
    show();
}

