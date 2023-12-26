#ifndef INQUIRE_H
#define INQUIRE_H

#include <QMainWindow>
#include "Graph.h"
namespace Ui {
class inquire;
}

class inquire : public QMainWindow
{
    Q_OBJECT

public:
    explicit inquire(QWidget *parent = nullptr);
    ~inquire();
    Graph *p;
private:
    Ui::inquire *ui;
};

#endif // INQUIRE_H
