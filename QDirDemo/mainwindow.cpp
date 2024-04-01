#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDir dir_1;
    foreach (QFileInfo var, dir_1.drives()) {
        ui -> comboBox -> addItem(var.absoluteFilePath());
    }

    QDir dir("/home/jsw/Desktop");
    foreach (QFileInfo var, dir.entryInfoList()) {
        if(var.isDir())
        {ui -> listWidget-> addItem("Dir : " + var.absoluteFilePath());}
        if(var.isFile())
        {ui -> listWidget-> addItem("File: " + var.absoluteFilePath());}
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QDir dir("/home/jsw/Desktop/y");
    if (dir.exists()) {
        QMessageBox::information(this, "title", "true");
    }
    else {
        dir.mkpath("/home/jsw/Desktop/y");
    }
}

