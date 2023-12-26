#ifndef REFRESH_H
#define REFRESH_H

#include <QMainWindow>
#include "Graph.h"
namespace Ui {
class refresh;
}

class refresh : public QMainWindow
{
    Q_OBJECT

public:
    explicit refresh(QWidget *parent = nullptr);
    ~refresh();
    Graph *p;
private slots:
    void on_placeButton_clicked();

    void on_pathButton_clicked();

private:
    Ui::refresh *ui;
};

#endif // REFRESH_H
