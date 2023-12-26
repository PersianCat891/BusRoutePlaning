#ifndef PLACE_H
#define PLACE_H
#include "config.h"
class Places{
public:
    QString name;
    QString info;
public:
    Places();//= default;
    Places(QString _name, QString _info);
    ~Places();
};
#endif // PLACE_H
