#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFuture>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:

    void on_pDez_clicked();

    void on_pCem_clicked();

    void on_pMil_clicked();

    void on_pDezMil_clicked();

    void on_pCemMil_clicked();

    void scheduleringTime();

    void prepareSchedulering(QString numProcess);
    void on_btnParar_clicked();

    void on_pushButton_clicked();

    void on_btnPauseRes_clicked();

private:
    Ui::MainWindow *ui;
    QFuture<void> thread;
};
#endif // MAINWINDOW_H
