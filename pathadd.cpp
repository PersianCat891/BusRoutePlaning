#include "pathadd.h"
#include "ui_pathadd.h"

pathadd::pathadd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pathadd)
{
    ui->setupUi(this);
}

pathadd::~pathadd()
{
    delete ui;
}

void pathadd::on_addButton_clicked()
{
    bool ok = true;
    QString bus = ui->busEdit->text();
    QString start = ui->startEdit->text();
    QString end = ui->endEdit->text();
    QString time = ui->timeEdit->text();
    QString cost = ui->costEdit->text();
    int busint = bus.toInt(&ok,10);
    int startint = start.toInt(&ok,10);
    int endint = end.toInt(&ok,10);
    int timeint = time.toInt(&ok,10);
    int costint = cost.toInt(&ok,10);
    p->addPath(busint,startint,endint,timeint,costint);
    this->hide();
}

