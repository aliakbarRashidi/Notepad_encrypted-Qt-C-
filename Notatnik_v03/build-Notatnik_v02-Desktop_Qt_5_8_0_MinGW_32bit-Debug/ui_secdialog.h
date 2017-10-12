/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QStringLiteral("SecDialog"));
        SecDialog->setWindowModality(Qt::NonModal);
        SecDialog->resize(1701, 542);
        widget = new QWidget(SecDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 9, 1092, 515));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);


        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QApplication::translate("SecDialog", "Info", Q_NULLPTR));
        label->setText(QApplication::translate("SecDialog", "Program zosta\305\202 napisnay przy u\305\274yciu programu Qt 5.8\n"
"\n"
"\n"
"\n"
"1. Programy komputerowe podlegaj\304\205 ochronie jak utwory literackie, o ile przepisy niniejszego rozdzia\305\202u nie stanowi\304\205 inaczej.\n"
"2. Ochrona przyznana programowi komputerowemu obejmuje wszystkie formy jego wyra\305\274enia. Idee i zasady b\304\231d\304\205ce podstaw\304\205 jakiegokolwiek elementu programu komputerowego, w tym podstaw\304\205 \305\202\304\205czy, nie podlegaj\304\205 ochronie.\n"
"3. Prawa maj\304\205tkowe do programu komputerowego stworzonego przez pracownika w wyniku wykonywania obowi\304\205zk\303\263w ze stosunku pracy przys\305\202uguj\304\205 pracodawcy, o ile umowa nie stanowi inaczej.\n"
"4. Autorskie prawa maj\304\205tkowe do programu komputerowego, z zastrze\305\274eniem przepis\303\263w art. 75 ust. 2 i 3, obejmuj\304\205 prawo do:\n"
"a) trwa\305\202ego lub czasowego zwielokrotnienia programu komputerowego w ca\305\202o\305\233ci lub w cz\304\231\305\233ci jakimikolwiek \305\233"
                        "rodkami i w jakiejkolwiek formie; w zakresie,\n"
" w kt\303\263rym dla wprowadzania, wy\305\233wietlania, stosowania, przekazywania i przechowywania programu komputerowego niezb\304\231dne jest jego zwielokrotnienie, czynno\305\233ci te wymagaj\304\205 zgody uprawnionego;\n"
"b) t\305\202umaczenia, przystosowywania, zmiany uk\305\202adu lub jakichkolwiek innych zmian w programie komputerowym, z zachowaniem praw osoby, kt\303\263ra tych zmian dokona\305\202a;\n"
"c) rozpowszechniania, w tym u\305\274yczenia lub najmu, programu komputerowego lub jego kopii.\n"
"\n"
"\n"
"Autor: Szymon Janowski", Q_NULLPTR));
        label_2->setText(QApplication::translate("SecDialog", "This application contains code copyrighted by Andr\303\251 Somers. For this code, the following license applies:Copyright (c) 2011, Andre Somers\n"
"All rights reserved.\n"
"\n"
"Redistribution and use in source and binary forms, with or without\n"
"modification, are permitted provided that the following conditions are met:\n"
"* Redistributions of source code must retain the above copyright\n"
"notice, this list of conditions and the following disclaimer.\n"
"* Redistributions in binary form must reproduce the above copyright\n"
"notice, this list of conditions and the following disclaimer in the\n"
"documentation and/or other materials provided with the distribution.\n"
"* Neither the name of the Rathenau Instituut, Andre Somers nor the\n"
"names of its contributors may be used to endorse or promote products\n"
"derived from this software without specific prior written permission.\n"
"\n"
"THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS \"AS IS\" AND\n"
"ANY EXPRESS OR IMPLIED WARRANTIES,"
                        " INCLUDING, BUT NOT LIMITED TO, THE IMPLIED\n"
"WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE\n"
"DISCLAIMED. IN NO EVENT SHALL ANDRE SOMERS BE LIABLE FOR ANY\n"
"DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES\n"
"(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;\n"
"LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND\n"
"ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT\n"
"(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS\n"
"SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
