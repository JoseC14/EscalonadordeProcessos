#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include <QElapsedTimer>
#include "TaskScheduler.h"
#include <QDebug>
#include <QtConcurrent/QtConcurrent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap imagem1("C:\\Users\\josec\\Documents\\Proejtos\\CPP\\Escalonador\\Imagem\\comput.png");
    ui->label_3->setPixmap(imagem1.scaled(100, 100, Qt::KeepAspectRatio));


}

MainWindow::~MainWindow()
{
    delete ui;
}


QElapsedTimer timeElapsed;
QTimer *timer = new QTimer();
Scheduler *schedulering;
int acTime = 0;

void MainWindow::scheduleringTime()
{
    ui->cronometro->setText(QString::number((timeElapsed.elapsed())));

    timer->stop();

    ui->loading->setValue(schedulering->processFinished);
    if(!(schedulering->processFinished == schedulering->processMaximum))
    {
        timer->start();
    }
    else
    {
        ui->pDez->setEnabled(true);
        ui->pCem->setEnabled(true);
        ui->pMil->setEnabled(true);
        ui->pDezMil->setEnabled(true);
        ui->pCemMil->setEnabled(true);
        ui->btnParar->setEnabled(false);

    }

}


void MainWindow::prepareSchedulering(QString NumProcess)
{
    QString num = NumProcess;
    QString iteration = QString::number(ui->iteracoes->value());
    QString rand = QString::number(ui->randomizacao->value());

    connect(timer, &QTimer::timeout, this, &MainWindow::scheduleringTime);
    schedulering = new Scheduler(num.toInt());
    ui->loading->setMaximum(num.toInt());
    thread = QtConcurrent::run([=]() {

        schedulering->schedulering(num, iteration, rand);
    });
    timeElapsed.start();
    timer->setInterval(50);
    timer->start();

    ui->pDez->setEnabled(false);
    ui->pCem->setEnabled(false);
    ui->pMil->setEnabled(false);
    ui->pDezMil->setEnabled(false);
    ui->pCemMil->setEnabled(false);
    ui->btnParar->setEnabled(true);
}


void MainWindow::on_pDez_clicked()
{
    this->prepareSchedulering(ui->pDez->text());
}


void MainWindow::on_pCem_clicked()
{
    this->prepareSchedulering(ui->pCem->text());
}


void MainWindow::on_pMil_clicked()
{
    prepareSchedulering(ui->pMil->text());
}


void MainWindow::on_pDezMil_clicked()
{
    prepareSchedulering(ui->pDezMil->text());
}


void MainWindow::on_pCemMil_clicked()
{
    prepareSchedulering(ui->pCemMil->text());
}



void MainWindow::on_btnParar_clicked()
{
    schedulering->canceled = true;
    timer->stop();
    ui->loading->setValue(0);

    ui->pDez->setEnabled(true);
    ui->pCem->setEnabled(true);
    ui->pMil->setEnabled(true);
    ui->pDezMil->setEnabled(true);
    ui->pCemMil->setEnabled(true);
    ui->btnParar->setEnabled(false);
}



