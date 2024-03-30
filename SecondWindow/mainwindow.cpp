#include "mainwindow.h"
#include "ui_mainwindow.h"
// #include "secdialog.h"
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
{   // 이 방법은 모델 접근 방식 포인터를 만들지 않으면 바로 사라져 버리기 때문에
    // SecDialog secDeilog;
    // secDeilog.setModal(true);
    // secDeilog.exec();
    hide();
    secDialog = new SecDialog(this);
    secDialog->show();
}
