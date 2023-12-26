#ifndef BUSTIME_H
#define BUSTIME_H

#include <QMainWindow>
#include "Graph.h"

namespace Ui {
class BusTime;
}

class BusTime : public QMainWindow
{
    Q_OBJECT

public:
    explicit BusTime(QWidget *parent = nullptr);
    ~BusTime();
    Graph *p;
private slots:
    void on_timeButton_clicked();

private:
    Ui::BusTime *ui;
};

#endif // BUSTIME_H
