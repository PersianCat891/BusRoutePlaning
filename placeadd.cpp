#include "placeadd.h"
#include "ui_placeadd.h"

placeadd::placeadd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::placeadd)
{
    ui->setupUi(this);
}

placeadd::~placeadd()
{
    delete ui;
}

void placeadd::on_addButton_clicked()
{
    QString order = ui->orderEdit->text();
    QString name = ui->nameEdit->text();
    p->addPlaces(order,name);
    this->hide();
}

