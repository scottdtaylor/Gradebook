#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(customslot(int)));
    connect(this, SIGNAL(newvalue(int)), ui->spinBox, SLOT(setValue(int)));
}

void MainWindow::customslot(int value){
    emit newvalue(value);
}

MainWindow::~MainWindow()
{
    delete ui;
}
