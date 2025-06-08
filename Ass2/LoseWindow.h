#ifndef LOSEWINDOW_H
#define LOSEWINDOW_H

#include <QDialog>

namespace Ui {
class LoseWindow;
}

class LoseWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LoseWindow(int FinalScore,QWidget *parent = nullptr);
    ~LoseWindow();

private slots:
    void on_PlayButton_2_clicked();

    void on_PlayButton_clicked();

private:
    Ui::LoseWindow *ui;
};

#endif // LOSEWINDOW_H
