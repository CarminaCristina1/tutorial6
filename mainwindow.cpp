#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<dialog.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    setCentralWidget(ui->plainTextEdit);
}

void MainWindow::on_actionNew_Window_triggered()
{
    //pt interactiunea cu o singura fereastra cand ambele sunt deschide
    //Dialog dialog;
    //dialog.setModal(true);
    //dialog.exec();

    //pt interactiunea cu ambele ferestre deodata
    dialog=new Dialog(this);
    dialog->show();
}
