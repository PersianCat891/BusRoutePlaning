#include "bustime.h"
#include "ui_bustime.h"
#include "config.h"
BusTime::BusTime(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BusTime)
{
    ui->setupUi(this);
}

BusTime::~BusTime()
{
    delete ui;
}

void BusTime::on_timeButton_clicked()
{
    QString starts = ui->startEdit->text();
    QString ends = ui->endEdit->text();
    bool ok = true;
    int start = starts.toInt(&ok,10);
    int end = starts.toInt(&ok,10);
    QString result = p->findMinTime(start, end);
    ui->resultEdit->insertPlainText(result);
}

