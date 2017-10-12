#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "QDateTime"
#include <QPixmap>
#include <QCryptographicHash>


SimpleCrypt crypto(Q_UINT64_C(0x0c2ad4a4acb9f023));

void MainWindow::box(){
    QMessageBox::information(this,"Password","Old password is not correct!");
}

class encrypt_password{
private:
    QString pom="password"; //można je przechowywać w bazie danych zaszyfrowane
    QString id="admin";
    QString password=crypto.encryptToString(pom);

    bool czy_rowne(QString key,QString ide){
        QString password_k = crypto.decryptToString(password);
        if(password_k==key&&id==ide)return true;
        else return false;
    }

public:

    void zmien_haslo(QString new_password,QString old_password,QString old_id){
        if(czy_rowne(old_password,old_id)){
        password=crypto.encryptToString(new_password);
        }
        else{
          MainWindow box();
        }
    }

    friend void MainWindow::on_pushButton_clicked();
};



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/login.png");
    int w=ui->label_3->width();
    int h=ui->label_3->height();
    ui->label_3->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(czas()));
            timer->start(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::czas()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->label_zegar->setText(time_text);
}

void MainWindow::on_pushButton_clicked()
{
    QString username=ui->lineEdit_username->text();
    QString password=ui->lineEdit_password->text();
    encrypt_password pom;
    if(pom.czy_rowne(password,username)){
        hide();
        mainWindow2=new MainWindow2(this);
        mainWindow2->show();
    }
    else {
        ui->statusBar->showMessage("Username or password is not correct",3000);
    }
}


