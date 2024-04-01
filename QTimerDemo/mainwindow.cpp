#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this); //
    connect(timer, SIGNAL(timeout()), this, SLOT(myfunction())); // timeout 이 될때마다 myfunction 호출
    timer -> start(1000); // timeout은 1000 ms 마다 반복
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myfunction()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    if (time.second() % 2 == 0) {
            time_text[3] = ' ';
            time_text[8] = ' ';

        }
    ui -> label_date_time -> setText(time_text);
}
