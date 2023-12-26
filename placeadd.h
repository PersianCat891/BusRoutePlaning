#ifndef PLACEADD_H
#define PLACEADD_H

#include <QMainWindow>
#include "Graph.h"
namespace Ui {
class placeadd;
}

class placeadd : public QMainWindow
{
    Q_OBJECT

public:
    explicit placeadd(QWidget *parent = nullptr);
    ~placeadd();
    Graph *p;
private slots:
    void on_addButton_clicked();

private:
    Ui::placeadd *ui;
};

#endif // PLACEADD_H
