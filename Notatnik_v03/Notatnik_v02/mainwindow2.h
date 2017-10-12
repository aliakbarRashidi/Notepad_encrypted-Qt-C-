#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QFileDialog>
#include "secdialog.h"
#include <QColor>
#include "musicplayer.h"

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = 0);
    ~MainWindow2();

private slots:
    void on_actionNew_triggered();
    void on_actionSave_triggered();
    void on_actionOpen_triggered();
    void on_actionSave_as_triggered();
    void on_actionCopy_triggered();
    void on_actionCut_triggered();
    void on_actionPaste_triggered();
    void on_actionUndo_triggered();
    void on_actionRedo_triggered();
    void on_actionInfo_about_program_triggered();
    void on_actionFont_triggered();
    void on_actionColor_triggered();
    void on_actionBackground_Color_triggered();
    void on_actionNight_Mode_triggered();
    void on_actionPrint_triggered();
    void on_actionMusic_Player_triggered();
    void on_actionJustify_triggered();
    void on_actionCenter_triggered();
    void on_actionLeft_triggered();
    void on_actionAdjustLeft_triggered();
    void on_actionBullet_pionts_triggered();
    void on_actionUFO_Racing_Game_triggered();

private:
    Ui::MainWindow2 *ui;
    QString mFileName;
    SecDialog *secDialog;
    MusicPlayer *musicPlayer;
};

#endif // MAINWINDOW2_H
