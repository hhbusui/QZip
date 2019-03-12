#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);





}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnZip_clicked()
{
    // 压缩文件
    JlCompress::compressDir(ui->txtYSName->text() ,ui->txtYSDir->text());


//    JlCompress::compressDir("F:\\a.zip", "F:\\a");



}

void MainWindow::on_btnUpZip_clicked()
{
    // 解压文件
    JlCompress::extractDir(ui->txtJYName->text(), ui->txtJYPath->text());

}
