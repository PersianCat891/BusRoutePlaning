    #ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPaintEvent>
#include<QPixmap>
#include "refresh.h"
#include "bustime.h"
#include "Graph.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void initScene();   //初始化背景
    QPixmap map;
    Graph G;
    ~MainWindow();

private slots:
    void on_refreshButton_clicked();

    void on_inquireButton_clicked();

    void on_timeButton_clicked();

    void on_moneyButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
