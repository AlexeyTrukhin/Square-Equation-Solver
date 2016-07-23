#include <QFile>
#include <QString>
#include <QByteArray>
#include <QIODevice>
#include <QDebug>

QString getFileText(){

    QFile file("data.txt");

    if(!file.open(QIODevice::ReadOnly)){
        return "ERROR";
    }

    return QString(file.readAll());
}

void Decryptor(QString str){
    QList<double> list;
    while(str.size() > 4){
        list << str.left(str.indexOf(" ")).toDouble();    //44 66 88
        qDebug() << str.left(str.indexOf(" ")).toDouble();
        str.remove(0, str.indexOf(" "));

        list << str.left(str.indexOf(" ")).toDouble();    //44 66 88
        qDebug() << str.left(str.indexOf(" ")).toDouble();
        str.remove(0, str.indexOf(" "));

        list << str.left(str.indexOf("\r")).toDouble();    //44 66 88
        qDebug() << str.left(str.indexOf("\r")).toDouble();
        str.remove(0, str.indexOf(" "));
    }
}
