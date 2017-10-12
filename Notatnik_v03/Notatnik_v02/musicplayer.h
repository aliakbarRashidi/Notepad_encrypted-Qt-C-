#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QFileDialog>
#include <QProgressBar>
#include <QSlider>

namespace Ui {
class MusicPlayer;
}

class MusicPlayer : public QMainWindow
{
    Q_OBJECT

public:
    explicit MusicPlayer(QWidget *parent = 0);
    ~MusicPlayer();

private slots:
    void on_actionOpen_triggered();

    void on_actionPlay_triggered();

    void on_actionPause_triggered();

    void on_actionStop_triggered();

private:
    Ui::MusicPlayer *ui;
    QMediaPlayer* player;
    QVideoWidget* vw;
    QProgressBar* bar;
    QSlider* slider;
};

#endif // MUSICPLAYER_H
