#include "refresh.h"
#include "ui_refresh.h"
#include "placeadd.h"
#include "pathadd.h"
refresh::refresh(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::refresh)
{
    ui->setupUi(this);
}

refresh::~refresh()
{
    delete ui;
}

void refresh::on_placeButton_clicked()
{
    placeadd *w = new placeadd;
    w->p = p;
    w->show();
}


void refresh::on_pathButton_clicked()
{
   pathadd *w = new pathadd;
   w->p = p;
   w->show();
}

