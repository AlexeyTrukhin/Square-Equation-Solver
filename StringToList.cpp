#include "StringToList.h"

QList<double> StringToList(QString str){
    QList<double> list;
    qDebug() << str;
    //return;
    if(str == "ERROR") return list;

    while(str.size() > 4){
        list << str.left(str.indexOf(" ")).toDouble();    //44 66 88
        //qDebug() << str.left(str.indexOf(" ")).toDouble();
        str.remove(0, str.indexOf(" ") + 1);

        list << str.left(str.indexOf(" ")).toDouble();    //44 66 88
        //qDebug() << str.left(str.indexOf(" ")).toDouble();
        str.remove(0, str.indexOf(" ") + 1);

        list << str.left(str.indexOf("\r\n")).toDouble();    //44 66 88
        //qDebug() << str.left(str.indexOf("\r\n")).toDouble();
        str.remove(0, str.indexOf("\r\n") + 1);
    }
    return list;
}
