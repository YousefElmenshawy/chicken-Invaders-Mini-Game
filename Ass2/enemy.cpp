#include "enemy.h"
#include <QGraphicsScene>
#include <stdlib.h>
#include <QTimer>
#include <QDebug>
#include "health.h"
#include "score.h"
#include "losewindow.h"
#include<QGraphicsView>
#include <QMediaPlayer>
#include <QAudioOutput>
#include<game.h>
extern Health *health;
extern Score *score;
extern QGraphicsView *gameView;
bool Enemy::gameOverMessageShown = false;
extern game *gameWindow;
Enemy::Enemy() : QObject(), QGraphicsPixmapItem()
{
    QPixmap pixmap3(":/Images/Enemy2.png");
    pixmap3 = pixmap3.scaled(50, 50, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    setPixmap(pixmap3);

    int random_number = rand() % (800 - pixmap3.width());
    setPos(random_number, 0);

    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);

    bs = new QMediaPlayer();
    bs->setSource(QUrl("qrc:/Aud/GameOver.wav"));
    audio = new QAudioOutput;
    bs->setAudioOutput(audio);
}

void Enemy::move()
{
    setPos(x(), y() + 5);

    if (y() + 100 > 800)  // If enemy goes off screen
    {
        if (health->getHealth() < 2 && !gameOverMessageShown)
        {
            health->decrease();

            // Play game over sound
            audio->setVolume(50);
            bs->play();

            // Show lose window
            LoseWindow *lose = new LoseWindow(score->getScore());
            lose->show();
            gameWindow->close();

            // Optionally close or hide current game view here if needed

            gameOverMessageShown = true;
        }
        else
        {
            health->decrease();
        }

        scene()->removeItem(this);
        delete this;
    }
}
