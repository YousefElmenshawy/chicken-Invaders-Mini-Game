#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include "player.h"
#include "score.h"
#include "health.h"

class game :public QWidget {
    Q_OBJECT

public:
    explicit game(QWidget *parent = nullptr);
    void startGame();

private:
    QGraphicsView *view;
    QGraphicsScene *scene;
    Player *player;
    QTimer *enemyTimer;
    QMediaPlayer *musicPlayer;
    QAudioOutput *audioOutput;
};



#endif // GAME_H
