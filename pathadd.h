#ifndef PATHADD_H
#define PATHADD_H

#include <QMainWindow>
#include "Graph.h"
namespace Ui {
class pathadd;
}

class pathadd : public QMainWindow
{
    Q_OBJECT

public:
    explicit pathadd(QWidget *parent = nullptr);
    ~pathadd();
    Graph *p;
private slots:
    void on_addButton_clicked();

private:
    Ui::pathadd *ui;
};

#endif // PATHADD_H
