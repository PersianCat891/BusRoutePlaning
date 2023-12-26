#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "config.h"
#include<QPainter>
#include<QFont>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initScene();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow:: paintEvent(QPaintEvent *){
    QPainter painter(this);     //this 指针表示要在当前窗口对象总绘制
    map.load(MAP_BACKGROUND);
    painter.drawPixmap(0, 0, MAP_WIDTH, MAP_HEIGHT, map);

    QFont font;
    font.setPointSize(35);
    font.setBold(true);

     QFontMetrics metrics(font);
     QPainterPath path;
     QPen pen(QColor(255, 0, 0, 100));
     int penWidth = font.pointSize() * 0.5;
     if (penWidth > 6) {
          penWidth = 6;
     }
     pen.setWidth(penWidth);

     int len = metrics.width(QStringLiteral(MAP_TITILE));
     int w = width();
     int px = (len - w) / 2;
     if (px < 0) {
         px = -px;
     }

     //int py = (height() - metrics.height()) / 2 + metrics.ascent();
     int py = height() - 600;
     if(py < 0)
     {
         py = -py;
     }
     path.addText(px, py, font, QStringLiteral(MAP_TITILE));
     painter.strokePath(path, pen);
     painter.drawPath(path);
     painter.fillPath(path, QBrush(Qt::green));
}

void MainWindow:: initScene(){
    //设置窗口
    setFixedSize(MAP_WIDTH, MAP_HEIGHT);

    //设置标题
    setWindowTitle(MAP_TITILE);
    ui->refreshButton->setFixedSize(BUTTON_WIDTH,BUTTON_HEIGHT);
    ui->inquireButton->setFixedSize(BUTTON_WIDTH,BUTTON_HEIGHT);
    ui->moneyButton->setFixedSize(BUTTON_WIDTH,BUTTON_HEIGHT);
    ui->timeButton->setFixedSize(BUTTON_WIDTH,BUTTON_HEIGHT);
    ui->refreshButton->move(200,600);
    ui->inquireButton->move(450,600);
    ui->moneyButton->move(700,600);
    ui->timeButton->move(950,600);
    //ui->refreshButton->setStyleSheet("background-color: transparent;");
    QIcon inquireicon(InquireButton_BackGround);
    ui->inquireButton->setIcon(inquireicon);
    ui->inquireButton->setIconSize(QSize(ui->inquireButton->width(),ui->inquireButton->height()));
    QIcon refreshicon(RefreshButton_BackGround);
    ui->refreshButton->setIcon(refreshicon);
    ui->refreshButton->setIconSize(QSize(ui->refreshButton->width(),ui->refreshButton->height()));
    QIcon moneyicon(MoneyButton_BackGround);
    ui->moneyButton->setIcon(moneyicon);
    ui->moneyButton->setIconSize(QSize(ui->moneyButton->width(),ui->moneyButton->height()));
    QIcon timeicon(TimeButton_BackGround);
    ui->timeButton->setIcon(timeicon);
    ui->timeButton->setIconSize(QSize(ui->timeButton->width(),ui->timeButton->height()));
}

void MainWindow::on_refreshButton_clicked()
{
     //this->hide();
     refresh *w1 = new refresh;
     w1->p = &G;
     w1->show();
     G.printPlaces();
}


void MainWindow::on_inquireButton_clicked()
{

}


void MainWindow::on_timeButton_clicked()
{
     BusTime *w1 = new BusTime;
     w1->p = &G;
     w1->show();
     w1->show();
}


void MainWindow::on_moneyButton_clicked()
{

}

