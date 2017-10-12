/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionInfo_about_program;
    QAction *actionFont;
    QAction *actionColor;
    QAction *actionBackground_Color;
    QAction *actionNight_Mode;
    QAction *actionPrint;
    QAction *actionMusic_Player;
    QAction *actionUFO_Racing_Game;
    QAction *actionJustify;
    QAction *actionCenter;
    QAction *actionLeft;
    QAction *actionAdjustLeft;
    QAction *actionBullet_pionts;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuPomoc;
    QMenu *menuExtras;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName(QStringLiteral("MainWindow2"));
        MainWindow2->resize(800, 600);
        MainWindow2->setUnifiedTitleAndToolBarOnMac(false);
        actionNew = new QAction(MainWindow2);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/new-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow2);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/open-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow2);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(MainWindow2);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/save-as-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionCopy = new QAction(MainWindow2);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/copy-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionCut = new QAction(MainWindow2);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/cut-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon5);
        actionPaste = new QAction(MainWindow2);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/paste-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon6);
        actionUndo = new QAction(MainWindow2);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img/undo-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon7);
        actionRedo = new QAction(MainWindow2);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img/redo-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon8);
        actionInfo_about_program = new QAction(MainWindow2);
        actionInfo_about_program->setObjectName(QStringLiteral("actionInfo_about_program"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/img/Infobox_info_icon.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInfo_about_program->setIcon(icon9);
        actionFont = new QAction(MainWindow2);
        actionFont->setObjectName(QStringLiteral("actionFont"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/img/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon10);
        actionColor = new QAction(MainWindow2);
        actionColor->setObjectName(QStringLiteral("actionColor"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/img/color-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon11);
        actionBackground_Color = new QAction(MainWindow2);
        actionBackground_Color->setObjectName(QStringLiteral("actionBackground_Color"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/img/StylzzZ305.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackground_Color->setIcon(icon12);
        actionNight_Mode = new QAction(MainWindow2);
        actionNight_Mode->setObjectName(QStringLiteral("actionNight_Mode"));
        actionNight_Mode->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/img/04f12baa9d6325124b5ea1310364ef9e.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNight_Mode->setIcon(icon13);
        actionPrint = new QAction(MainWindow2);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/img/print-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon14);
        actionMusic_Player = new QAction(MainWindow2);
        actionMusic_Player->setObjectName(QStringLiteral("actionMusic_Player"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/img/icomoon-free_2014-12-23_film_256_0_32363b_none.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMusic_Player->setIcon(icon15);
        actionUFO_Racing_Game = new QAction(MainWindow2);
        actionUFO_Racing_Game->setObjectName(QStringLiteral("actionUFO_Racing_Game"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/img/font-awesome_4-7-0_gamepad_256_0_32363b_none.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUFO_Racing_Game->setIcon(icon16);
        actionJustify = new QAction(MainWindow2);
        actionJustify->setObjectName(QStringLiteral("actionJustify"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/img/justify.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionJustify->setIcon(icon17);
        actionCenter = new QAction(MainWindow2);
        actionCenter->setObjectName(QStringLiteral("actionCenter"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/img/center.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCenter->setIcon(icon18);
        actionLeft = new QAction(MainWindow2);
        actionLeft->setObjectName(QStringLiteral("actionLeft"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/img/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLeft->setIcon(icon19);
        actionAdjustLeft = new QAction(MainWindow2);
        actionAdjustLeft->setObjectName(QStringLiteral("actionAdjustLeft"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/img/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdjustLeft->setIcon(icon20);
        actionBullet_pionts = new QAction(MainWindow2);
        actionBullet_pionts->setObjectName(QStringLiteral("actionBullet_pionts"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/img/allipsis.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBullet_pionts->setIcon(icon21);
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(60, 60, 311, 211));
        MainWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuPomoc = new QMenu(menubar);
        menuPomoc->setObjectName(QStringLiteral("menuPomoc"));
        menuExtras = new QMenu(menubar);
        menuExtras->setObjectName(QStringLiteral("menuExtras"));
        MainWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow2->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow2);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow2->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuExtras->menuAction());
        menubar->addAction(menuPomoc->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionFont);
        menuEdit->addAction(actionColor);
        menuEdit->addAction(actionBackground_Color);
        menuEdit->addSeparator();
        menuEdit->addAction(actionJustify);
        menuEdit->addAction(actionLeft);
        menuEdit->addAction(actionCenter);
        menuEdit->addAction(actionAdjustLeft);
        menuEdit->addSeparator();
        menuEdit->addAction(actionBullet_pionts);
        menuEdit->addSeparator();
        menuEdit->addAction(actionNight_Mode);
        menuEdit->addSeparator();
        menuPomoc->addAction(actionInfo_about_program);
        menuExtras->addAction(actionMusic_Player);
        menuExtras->addSeparator();
        menuExtras->addAction(actionUFO_Racing_Game);
        menuExtras->addSeparator();
        toolBar->addAction(actionNew);
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionFont);
        toolBar->addAction(actionColor);
        toolBar->addAction(actionBackground_Color);
        toolBar->addSeparator();
        toolBar->addAction(actionBullet_pionts);
        toolBar->addSeparator();
        toolBar->addAction(actionLeft);
        toolBar->addAction(actionCenter);
        toolBar->addAction(actionAdjustLeft);
        toolBar->addAction(actionJustify);
        toolBar->addSeparator();
        toolBar->addAction(actionMusic_Player);
        toolBar->addAction(actionUFO_Racing_Game);
        toolBar->addSeparator();
        toolBar->addAction(actionInfo_about_program);
        toolBar->addSeparator();

        retranslateUi(MainWindow2);

        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QApplication::translate("MainWindow2", "Notatnik_v02", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow2", "New", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow2", "Open", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow2", "Save", Q_NULLPTR));
        actionSave_as->setText(QApplication::translate("MainWindow2", "Save as", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("MainWindow2", "Copy", Q_NULLPTR));
        actionCut->setText(QApplication::translate("MainWindow2", "Cut", Q_NULLPTR));
        actionPaste->setText(QApplication::translate("MainWindow2", "Paste", Q_NULLPTR));
        actionUndo->setText(QApplication::translate("MainWindow2", "Undo", Q_NULLPTR));
        actionRedo->setText(QApplication::translate("MainWindow2", "Redo", Q_NULLPTR));
        actionInfo_about_program->setText(QApplication::translate("MainWindow2", "Info about program", Q_NULLPTR));
        actionFont->setText(QApplication::translate("MainWindow2", "Font", Q_NULLPTR));
        actionColor->setText(QApplication::translate("MainWindow2", "Text Color", Q_NULLPTR));
        actionBackground_Color->setText(QApplication::translate("MainWindow2", "Background Color", Q_NULLPTR));
        actionNight_Mode->setText(QApplication::translate("MainWindow2", "Night Mode", Q_NULLPTR));
        actionPrint->setText(QApplication::translate("MainWindow2", "Print", Q_NULLPTR));
        actionMusic_Player->setText(QApplication::translate("MainWindow2", "Music Player", Q_NULLPTR));
        actionUFO_Racing_Game->setText(QApplication::translate("MainWindow2", "UFO Racing Game", Q_NULLPTR));
        actionJustify->setText(QApplication::translate("MainWindow2", "Justify", Q_NULLPTR));
        actionCenter->setText(QApplication::translate("MainWindow2", "Adjust Center", Q_NULLPTR));
        actionLeft->setText(QApplication::translate("MainWindow2", "Adjust Right", Q_NULLPTR));
        actionAdjustLeft->setText(QApplication::translate("MainWindow2", "Adjust Left", Q_NULLPTR));
        actionBullet_pionts->setText(QApplication::translate("MainWindow2", "Bullet pionts", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow2", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow2", "Edit", Q_NULLPTR));
        menuPomoc->setTitle(QApplication::translate("MainWindow2", "Help", Q_NULLPTR));
        menuExtras->setTitle(QApplication::translate("MainWindow2", "Extras", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow2", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
