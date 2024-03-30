#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem * item_1 = new QListWidgetItem(QIcon(":/resource/IMG/close.png"), "Mark");
    ui->listWidget->addItem(item_1);
    QListWidgetItem * item_2 = new QListWidgetItem(QIcon(":/resource/IMG/open.png"), "John");
    ui->listWidget->addItem(item_2);
    QListWidgetItem * item_3 = new QListWidgetItem(QIcon(":/resource/IMG/new.jpeg"), "July");
    ui->listWidget->addItem(item_3);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // QMessageBox::information(this, "title", ui -> listWidget -> currentItem() -> text());
    ui -> listWidget -> currentItem() -> setBackground(Qt::red);
    ui -> listWidget -> currentItem() -> setForeground(Qt::white);
}

