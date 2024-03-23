   #include "player.h"
#include <QKeyEvent>
#include "bullet.h"
#include <QGraphicsScene>
#include<QGraphicsTextItem>
#include <QDebug>
#include "enemy.h"


Player::Player() {

    bs = new QMediaPlayer();
    bs->setSource(QUrl("qrc:/Aud/bulletshot.wav"));
    audio = new QAudioOutput;
    bs->setAudioOutput(audio);

}

void Player::keyPressEvent(QKeyEvent *event)
{
    // *******  Event Handling for the Player ********
    if(event->key()== Qt::Key_Left)
    {
        if(x()>0) // to prevent the player from getting out of the screen
        {
            setPos(x()-10,y());
        }
    }
    else if(event->key()== Qt::Key_Right)

    { if(x()+100<800) // to prevent the player from getting out of the screen
            setPos(x()+10,y());
    }
    else if(event->key()== Qt::Key_Space)
    {
        Bullet * bullet = new Bullet();
        bullet->setPos(x()+30,y());
        scene()->addItem(bullet);
        //sound
        if(bs->playbackState()== QMediaPlayer::PlayingState){
            bs->setPosition(0);
        }
        else if(bs->playbackState()==QMediaPlayer::StoppedState){


           // bs->setPlaybackRate(0.5);
            audio->setVolume(50);
            bs->play();
        }



    }


}

// CreateEnemy function used to create the eneimes
void Player::createEnemy()
{
    Enemy* enemy = new Enemy();

    scene()->addItem(enemy);

}
