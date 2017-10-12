#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCryptographicHash>
#include <simplecrypt.h>
//#include "secdialog.h"
#include "QTimer"
#include "mainwindow2.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
        void czas();
        void box();
        void on_pushButton_clicked();

private slots:


private:
    Ui::MainWindow *ui;
    //SecDialog *secDialog;
    MainWindow2 *mainWindow2;
        QTimer *timer;

};



#endif // MAINWINDOW_H
