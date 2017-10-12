#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include <QFontDialog>
#include <QFont>
#include <QColorDialog>
#include <QMessageBox>
#include <QPrinter>
#include <QCryptographicHash>
#include <QPrintDialog>
#include <QDesktopServices>
#include <QUrl>
#include "simplecrypt.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_actionNew_triggered()
{
    mFileName="";
    ui->textEdit->setPlainText("");
}

SimpleCrypt cryptoo(Q_UINT64_C(0x3c2ad6a4dcb9f024));

void MainWindow2::on_actionOpen_triggered()
{
    QString file = QFileDialog::getOpenFileName(this,"Open a file");
    if(!file.isEmpty()){
        QFile sFile(file);
        if(sFile.open(QFile::ReadOnly | QFile::Text)){
            mFileName=file;
            QTextStream in(&sFile);
            QString text = in.readAll();
            QByteArray plaintext=cryptoo.decryptToByteArray(text);
            QBuffer buffer(&plaintext);
            buffer.open(QIODevice::ReadOnly);
            QDataStream s(&buffer);
            s.setVersion(QDataStream::Qt_4_7);
            s>>text;
            buffer.close();
            sFile.close();
            ui->textEdit->setPlainText(text);
        }
    }

}


void MainWindow2::on_actionSave_triggered()
{
    if(mFileName==""){
        QMessageBox::warning(this,"Save","You don't have created file!!!");
    }
    else{
    QFile sFile(mFileName);
    if(sFile.open(QFile::WriteOnly | QFile::Text)){
        QTextStream out(&sFile);
        QString pom=ui->textEdit->toPlainText();
        cryptoo.setCompressionMode(SimpleCrypt::CompressionAlways);
        cryptoo.setIntegrityProtectionMode(SimpleCrypt::ProtectionHash);
        QBuffer buffer;
        buffer.open(QIODevice::WriteOnly);
        QDataStream s(&buffer);
        s.setVersion(QDataStream::Qt_4_7);
        s<<pom;
        QString myCypherText = cryptoo.encryptToString(buffer.data());
        if(cryptoo.lastError()==SimpleCrypt::ErrorNoError){
            //zapisanie kopii danych
        }
        buffer.close();

        out<<myCypherText;
        sFile.flush();
        sFile.close();
    }
    }
}

void MainWindow2::on_actionSave_as_triggered()
{
    QString file = QFileDialog::getSaveFileName(this,"Save a file");
    if(!file.isEmpty()){
        mFileName=file;
        on_actionSave_triggered();

    }
}

void MainWindow2::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow2::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow2::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow2::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void MainWindow2::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}
void MainWindow2::on_actionInfo_about_program_triggered()
{
    secDialog=new SecDialog(this);
    secDialog->show();
}

void MainWindow2::on_actionFont_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok,this);
    if(ok){
        ui->textEdit->setFont(font);
    }
    else return;
}

void MainWindow2::on_actionColor_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white,this,"Choose color");
    if(color.isValid()){
        ui->textEdit->setTextColor(color);
    }
}

void MainWindow2::on_actionBackground_Color_triggered()
{
    QColor color = QColorDialog::getColor(Qt::white,this,"Choose color");
    if(color.isValid()){
        ui->textEdit->setTextBackgroundColor(color);
    }
}

void MainWindow2::on_actionNight_Mode_triggered()
{
    if(ui->actionNight_Mode->isChecked()){
    QColor color = Qt::black;
    ui->textEdit->setPalette(color);
    color=Qt::green;
    ui->textEdit->setTextColor(color);
    }
    else{
        QColor color = Qt::white;
        ui->textEdit->setPalette(color);
        color=Qt::black;
        ui->textEdit->setTextColor(color);
    }
}

void MainWindow2::on_actionPrint_triggered()
{
    QPrinter printer;
    printer.setPrinterName("Printer1");
    QPrintDialog dialog(&printer,this);
    if(dialog.exec() == QDialog::Rejected) return;
    ui->textEdit->print(&printer);
}

void MainWindow2::on_actionMusic_Player_triggered()
{
    musicPlayer = new MusicPlayer(this);
    musicPlayer->show();
}

void MainWindow2::on_actionJustify_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignJustify);
}

void MainWindow2::on_actionCenter_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignCenter);
}

void MainWindow2::on_actionLeft_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignLeft);
}

void MainWindow2::on_actionAdjustLeft_triggered()
{
    ui->textEdit->setAlignment(Qt::AlignRight);
}

void MainWindow2::on_actionBullet_pionts_triggered()
{
    QMessageBox::information(this,"Lista","By utworzyc liste wciśnij 'SHIFT' + '*'");
    ui->textEdit->setAutoFormatting(QTextEdit::AutoBulletList);
}

void MainWindow2::on_actionUFO_Racing_Game_triggered()
{
    QString filename="C:/Users/Lenovo/Desktop/Programowanie/pong/Release/pong.exe";
    //QString filename =QFileDialog::getOpenFileName(this,tr("Open File"),"C:/Users/Lenovo/Desktop/Programowanie/pong/Release","Exe files (*.exe)");
    QDesktopServices::openUrl(QUrl("file:///"+filename,QUrl::TolerantMode));
}
