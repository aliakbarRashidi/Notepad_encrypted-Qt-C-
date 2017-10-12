#include "musicplayer.h"
#include "ui_musicplayer.h"
#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QFileDialog>
#include <QProgressBar>
#include <QSlider>
#include <QPixmap>

MusicPlayer::MusicPlayer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MusicPlayer)
{
    ui->setupUi(this);
    this->setWindowTitle("Media Player - Notatnik version");


    player = new QMediaPlayer(this);
    vw = new QVideoWidget(this);
    player->setVideoOutput(vw);
    this->setCentralWidget(vw);

    slider =  new QSlider(this);
    bar = new QProgressBar(this);

    slider->setOrientation(Qt::Horizontal);
    ui->statusbar->addPermanentWidget(slider);
    ui->statusbar->addPermanentWidget(bar);

    connect(player,&QMediaPlayer::durationChanged,slider,&QSlider::setMaximum);
    connect(player,&QMediaPlayer::positionChanged,slider,&QSlider::setValue);
    connect(slider,&QSlider::sliderMoved,player,&QMediaPlayer::setPosition);

    connect(player,&QMediaPlayer::durationChanged,bar,&QProgressBar::setMaximum);
    connect(player,&QMediaPlayer::positionChanged,bar,&QProgressBar::setValue);


}

MusicPlayer::~MusicPlayer()
{
    delete ui;
}

void MusicPlayer::on_actionOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,"Open a File","","Video file(*.*)");
    on_actionStop_triggered();

    player->setMedia(QUrl::fromLocalFile(filename));

    on_actionPlay_triggered();
}

void MusicPlayer::on_actionPlay_triggered()
{
    player->play();
    ui->statusbar->showMessage("Playing");

}

void MusicPlayer::on_actionPause_triggered()
{
    player->pause();
    ui->statusbar->showMessage("Paused");
}

void MusicPlayer::on_actionStop_triggered()
{
    player->stop();
    ui->statusbar->showMessage("Stopped");
}
