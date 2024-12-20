#include <QProcess>
#include <QString>
#include <QQueue>
#include <QDateTime>
#include "TaskScheduler.h"
#include <QDebug>
#include "mainwindow.h"

Scheduler::Scheduler(int n)
{
    this->processMaximum = n;
    this->processFinished = 0;
    this->canceled = false;
}

void Scheduler::schedulering(QString numProcess, QString iteration, QString randomization)
{
    qInfo() << "Iniciando escalonamento";
    //Criação da Fila
    QQueue<QProcess*> processQueue;
    QStringList arguments;
    QStringList suspendArgs;
    arguments << iteration << randomization;
    int j = numProcess.toInt();

    //Criação do processo para suspende-lo
    QProcess *suspendProcess = new QProcess();


    QStringList pIdS;
    QStringList pIdsExecuted;

    //CRIANDO A FILA DE PROCESSOS
    for(int i = 0; i < numProcess.toInt(); i++)
    {
        QProcess *processo = new QProcess();
        processQueue.enqueue(processo);
        qInfo() << "Adicionando Processos a fila";
    }



    //Enquanto a fila de processos nao tiver terminado
    while(processQueue.isEmpty() == false)
    {
        if(canceled) break;
        qInfo() << j;
        QProcess *processRunning = processQueue.dequeue();

        //Se o processo já foi executado
        if(pIdS.contains(QString::number(processRunning->processId())))
        {
            //O retoma
            qInfo() << "Retomando o processo";
            suspendArgs << "Suspend" << "\r" << QString::number(processRunning->processId());
            suspendProcess->start("Suspend", suspendArgs);
            suspendProcess->waitForStarted();
        }
        else
        {
            qInfo() << "Executando Processo";
            //Cria um novo processo e o inicializa
            processRunning->start("processo", arguments);
            processRunning->waitForStarted();
            qInfo() << "iniciando processo";
        }

        qInfo() << processRunning->state();
        // Se é o processo que esta rodando pela primeira vez
            if(processRunning->state() == QProcess::Running)
            {
            qInfo() << "Processo esta sendo executado";
                if(!processRunning->waitForFinished(50))
                {

                //Pega o Process ID do processo
                pIdS <<  "Suspend" << QString::number(processRunning->processId());
                //Suspende o processo
                suspendProcess->start("Suspend", pIdS);
                suspendProcess->waitForFinished();
                //Enfileira o processo que esta suspenso
                processQueue.enqueue(processRunning);

                //Guarda numa lista o pID do processo pra quando ele chegar na frente da fila
                pIdsExecuted << QString::number(processRunning->processId());
                pIdS.clear();
                qInfo() << "Processo interrompido";
                }
                else
                {
                    qInfo() << "Processo concluido";
                    this->processFinished++;
                    j--;
                }

            }

            else if(suspendProcess->state() == QProcess::Running)
            {
                suspendProcess->waitForFinished();
                if(!processRunning->waitForFinished(50))
                {
                    //Pega o Process ID do processo
                    pIdS << "Suspend" << QString::number(processRunning->processId());
                    //Suspende o processo
                    suspendProcess->start("Suspend",  pIdS);
                    suspendProcess->waitForFinished();
                    //Enfileira o processo que esta suspenso
                    processQueue.enqueue(processRunning);

                    //Guarda numa lista o pID do processo pra quando ele chegar na frente da fila
                    pIdsExecuted << QString::number(processRunning->processId());
                    pIdS.clear();
                }
                else
                {
                    qInfo() << "Processo concluido";
                    this->processFinished++;
                    j--;

                }

            }



    }
    if(canceled) qInfo() << "Escalonamento cancelado";
    else qInfo() << "Escalonamento concluido";

}
