#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    map=Map(":/txt/bornplace");
    ui->setupUi(this);
}
void MainWindow::paintEvent(QPaintEvent *e){
    QPainter pa(this);
    this->map.show(pa);

}

MainWindow::~MainWindow()
{
    delete ui;
}
