/********************************************************************************
** Form generated from reading UI file 'musicplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICPLAYER_H
#define UI_MUSICPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicPlayer
{
public:
    QAction *actionOpen;
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionObrazek;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuVideo;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MusicPlayer)
    {
        if (MusicPlayer->objectName().isEmpty())
            MusicPlayer->setObjectName(QStringLiteral("MusicPlayer"));
        MusicPlayer->resize(800, 600);
        actionOpen = new QAction(MusicPlayer);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/Eject-Hot-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionPlay = new QAction(MusicPlayer);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/Play-Hot-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon1);
        actionPause = new QAction(MusicPlayer);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/Pause-Pressed-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon2);
        actionStop = new QAction(MusicPlayer);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/Stop-Normal-Red-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon3);
        actionObrazek = new QAction(MusicPlayer);
        actionObrazek->setObjectName(QStringLiteral("actionObrazek"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/music_player.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionObrazek->setIcon(icon4);
        centralwidget = new QWidget(MusicPlayer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MusicPlayer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MusicPlayer);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuVideo = new QMenu(menubar);
        menuVideo->setObjectName(QStringLiteral("menuVideo"));
        MusicPlayer->setMenuBar(menubar);
        statusbar = new QStatusBar(MusicPlayer);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MusicPlayer->setStatusBar(statusbar);
        toolBar = new QToolBar(MusicPlayer);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MusicPlayer->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuVideo->menuAction());
        menuFile->addAction(actionOpen);
        menuVideo->addAction(actionPlay);
        menuVideo->addAction(actionPause);
        menuVideo->addAction(actionStop);
        toolBar->addAction(actionOpen);
        toolBar->addSeparator();
        toolBar->addAction(actionPlay);
        toolBar->addAction(actionPause);
        toolBar->addAction(actionStop);

        retranslateUi(MusicPlayer);

        QMetaObject::connectSlotsByName(MusicPlayer);
    } // setupUi

    void retranslateUi(QMainWindow *MusicPlayer)
    {
        MusicPlayer->setWindowTitle(QApplication::translate("MusicPlayer", "MainWindow", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MusicPlayer", "Open", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MusicPlayer", "Open a File", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPlay->setText(QApplication::translate("MusicPlayer", "Play", Q_NULLPTR));
        actionPause->setText(QApplication::translate("MusicPlayer", "Pause", Q_NULLPTR));
        actionStop->setText(QApplication::translate("MusicPlayer", "Stop", Q_NULLPTR));
        actionObrazek->setText(QApplication::translate("MusicPlayer", "Obrazek", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MusicPlayer", "File", Q_NULLPTR));
        menuVideo->setTitle(QApplication::translate("MusicPlayer", "Video", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MusicPlayer", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MusicPlayer: public Ui_MusicPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICPLAYER_H
