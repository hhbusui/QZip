#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


#include "JlCompress.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnZip_clicked();

    void on_btnUpZip_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
