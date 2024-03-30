#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // QMessageBox::about(this, "My Title", "custom");
    // QMessageBox::aboutQt(this, "My Title");
    // QMessageBox::critical(this, "My Title", "custom");
    // QMessageBox::information(this, "My Title", "custom");
    QMessageBox::StandardButton reply = QMessageBox::question(this, "My Title", "custom", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QApplication::quit();
    } else {
        qDebug() << "No is clicked";
    }
    // QMessageBox::warning(this, "My Title", "custom");
}
