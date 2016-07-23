#ifndef SQEQSOLV_H
#define SQEQSOLV_H

#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <float.h>
#include <math.h>
#include <QString>
#include <QList>
#include <QDebug>
#include <QFile>

struct result{
    int roots;
    int x1;
    int x2;
};

class SqEqSolv
{
public:
    SqEqSolv();

    static result SqEquation(double a, double b, double c);
    static bool IsZero(double x);
    static QString results(QList<double>);
    static bool Incryptor(QString);
};

//void some_f(){

//}

#endif // SQEQSOLV_H
