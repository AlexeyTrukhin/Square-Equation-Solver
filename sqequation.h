#ifndef SQEQUATION_H
#define SQEQUATION_H

#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <QDebug>
#include "IsZero.h"
#include "SqEquation.h"

const int SQER_INF = -1;

struct result{
    int roots;
    int x1;
    int x2;
};


result SqEquation(double a, double b, double c);


#endif // SQEQUATION_H
