#include "enemy.h"
#include <QGraphicsScene>
#include <stdlib.h> // rand() -> to generate really large integer
#include <QTimer>
#include <QDebug>
#include<QMessageBox>
#include"health.h"
#include"score.h"
#include <QMainWindow>
extern Health *health;
extern Score* score;
 bool Enemy::gameOverMessageShown = false;
Enemy::Enemy():QObject(), QGraphicsPixmapItem() {

    QPixmap pixmap3(":/Images/enemy.jpeg");
    setPixmap(pixmap3);
    // *******  Setting the size of the enemy ********


    // *******  Setting the postion of the enemy within the view dimensions ********
    int random_number = rand() % 700;
    setPos(random_number,0);

    // *******  Moving the enemies downwards automatically every 50 milli second ********
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT (move()));
    timer->start(50);

}
// Function move: move the enemy downwards untill the end of the scene then remove it and delete it
void Enemy:: move()
{

    setPos(x(),y()+5);
    if(y()+100>800)
    {

        if(health->getHealth()<1)
        {

            if (!gameOverMessageShown)
            {
                // Show QMessageBox
                QMessageBox* msg = new QMessageBox;
                msg->setText(QString("You have LOST and your score is : ") + QString::number(score->getScore()));
                msg->setWindowTitle(QString("End Game"));
                msg->show();

                // Set the flag to true to indicate that the message has been shown
                gameOverMessageShown = true;
            }


                   // Hide the main windo

        }
        else
        {
            health->decrease();
        }
        scene()->removeItem(this);
        delete this;
    }
}
