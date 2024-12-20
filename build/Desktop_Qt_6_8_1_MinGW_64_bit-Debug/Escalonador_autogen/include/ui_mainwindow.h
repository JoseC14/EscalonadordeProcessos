/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pDezMil;
    QPushButton *pMil;
    QPushButton *pDez;
    QPushButton *pCem;
    QPushButton *pCemMil;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *iteracoes;
    QLabel *label_4;
    QProgressBar *loading;
    QLabel *cronometro;
    QPushButton *btnParar;
    QLabel *label_5;
    QSpinBox *randomizacao;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(652, 475);
        MainWindow->setStyleSheet(QString::fromUtf8("image: \"https://w7.pngwing.com/pngs/257/925/png-transparent-desktop-computers-personal-computer-computer-icons-computer-monitors-computer-rectangle-computer-computer-monitor-accessory-thumbnail.png\";\n"
"background-color: #daf87d;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 100, 351, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #143d59;\n"
"font: 9pt \"Showcard Gothic\";\n"
""));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(200, 210, 261, 111));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pDezMil = new QPushButton(gridLayoutWidget);
        pDezMil->setObjectName("pDezMil");
        pDezMil->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;\n"
"color: #000000;"));

        gridLayout->addWidget(pDezMil, 1, 1, 1, 1);

        pMil = new QPushButton(gridLayoutWidget);
        pMil->setObjectName("pMil");
        pMil->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;\n"
"color: #000000;"));

        gridLayout->addWidget(pMil, 1, 0, 1, 1);

        pDez = new QPushButton(gridLayoutWidget);
        pDez->setObjectName("pDez");
        pDez->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;\n"
"color: #000000;"));

        gridLayout->addWidget(pDez, 0, 0, 1, 1);

        pCem = new QPushButton(gridLayoutWidget);
        pCem->setObjectName("pCem");
        pCem->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;\n"
"color: #000000;"));

        gridLayout->addWidget(pCem, 0, 1, 1, 1);

        pCemMil = new QPushButton(gridLayoutWidget);
        pCemMil->setObjectName("pCemMil");
        pCemMil->setStyleSheet(QString::fromUtf8("background-color: #FFFFFF;\n"
"color: #000000;"));

        gridLayout->addWidget(pCemMil, 2, 0, 1, 2);

        pDez->raise();
        pDezMil->raise();
        pMil->raise();
        pCem->raise();
        pCemMil->raise();
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 20, 101, 91));
        label_2->setPixmap(QPixmap(QString::fromUtf8("Imagem/comput.png.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 50, 49, 16));
        iteracoes = new QSpinBox(centralwidget);
        iteracoes->setObjectName("iteracoes");
        iteracoes->setGeometry(QRect(320, 327, 141, 25));
        iteracoes->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        iteracoes->setMaximum(1000);
        iteracoes->setValue(99);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 330, 111, 16));
        label_4->setStyleSheet(QString::fromUtf8("color:black"));
        loading = new QProgressBar(centralwidget);
        loading->setObjectName("loading");
        loading->setGeometry(QRect(67, 380, 571, 23));
        loading->setValue(0);
        cronometro = new QLabel(centralwidget);
        cronometro->setObjectName("cronometro");
        cronometro->setGeometry(QRect(300, 360, 49, 16));
        cronometro->setStyleSheet(QString::fromUtf8("color:black;"));
        btnParar = new QPushButton(centralwidget);
        btnParar->setObjectName("btnParar");
        btnParar->setEnabled(false);
        btnParar->setGeometry(QRect(70, 350, 80, 24));
        btnParar->setStyleSheet(QString::fromUtf8("color:black;\n"
"background-color:red;"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(210, 190, 111, 16));
        label_5->setStyleSheet(QString::fromUtf8("color:black"));
        randomizacao = new QSpinBox(centralwidget);
        randomizacao->setObjectName("randomizacao");
        randomizacao->setGeometry(QRect(330, 187, 141, 20));
        randomizacao->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        randomizacao->setMaximum(1000);
        randomizacao->setValue(99);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 652, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#0000ff;\">ESCOLHA A QUANTIDADE DE PROCESSOS </span></p><p align=\"center\"><span style=\" font-size:12pt; color:#0000ff;\">A SEREM EXECUTADOS:</span></p></body></html>", nullptr));
        pDezMil->setText(QCoreApplication::translate("MainWindow", "10000", nullptr));
        pMil->setText(QCoreApplication::translate("MainWindow", "1000", nullptr));
        pDez->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        pCem->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        pCemMil->setText(QCoreApplication::translate("MainWindow", "100000", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Numero de Iteracoes", nullptr));
        cronometro->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        btnParar->setText(QCoreApplication::translate("MainWindow", "PARAR", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Randomiza\303\247\303\243o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
