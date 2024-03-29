#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow // QMainWindow 에 기본적인 창이 많다
{
    Q_OBJECT // 시그널 및 슬롯 사용 위한 매크로

public:
    MainWindow(QWidget *parent = nullptr); // parenet widget is pointer of
    ~MainWindow(); // 파괴자

private slots:
    void on_pushButtonCLose_clicked();

private:
    Ui::MainWindow *ui; // 객체 ui 생성
};
#endif // MAINWINDOW_H
