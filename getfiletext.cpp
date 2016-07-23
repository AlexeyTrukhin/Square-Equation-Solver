#include "getfiletext.h"

QString GetFileText(){

    QFile file("C:/MPhTI/Project/QtSqEq/data.txt");

    if(!file.open(QIODevice::ReadOnly)){
        return "ERROR";
    }

    return QString(file.readAll());
    }
