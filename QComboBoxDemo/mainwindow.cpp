#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // ui -> comboBox -> addItem(QIcon(":/resource/IMG/close.png"), "Mark");
    // ui -> comboBox -> addItem(QIcon(":/resource/IMG/open.png"), "Jhon");
    // ui -> comboBox -> addItem(QIcon(":/resource/IMG/new.jpeg"), "July");

    for(int i = 0; i < 10; i++) {
        ui -> comboBox -> addItem(QIcon(":/resource/IMG/close.png"), QString::number(i) + "name");
    }
    ui -> comboBox -> insertItem(3, QIcon(":/resource/IMG/close.png"), "Nex text");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "title", ui->comboBox->currentText());
    QMessageBox::information(this, "title", QString::number(ui->comboBox->currentIndex()));
}

