#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(customslot(int)));
    connect(this, SIGNAL(newvalue(int)), ui->label_13, SLOT(setNum(int)));
}

void MainWindow::customslot(int value){
    emit newvalue(value);
}

void MainWindow::changegrade(){

}
MainWindow::~MainWindow()
{
    delete ui;
}
