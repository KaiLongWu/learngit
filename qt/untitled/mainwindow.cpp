#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>
#include <QString>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this->ui->pushButton,SIGNAL(click(bool)),this,SLOT(login()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::login(){
    QString name=this->ui->lineEdit->text();
    QString key=this->ui->lineEdit_2->text();
    if(name=="173813575"&&key=="wkl201114"){
        qDebug()<<"登录成功";
    }else{
        qDebug()<<"登录失败";
    }
}

