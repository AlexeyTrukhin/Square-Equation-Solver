#include "sqequation.h"

result SqEquation(double a, double b, double c) //
{
    result res;
//    assert(x1 != NULL);
//    assert(x2 != NULL);// assert(x2); - проверяем на ноль в неявном виде.
//    assert(x1 != x2); // функция сравнения номеров ячеек, если *x1 то мы обращаемся за значением в ячейку, изначально инициализируются ячейки с 0ми. Эссерт слетит если *.
//                     // assert включает в себе if, но он лучше организован, если условие истинно, то этот иф ничего не делает, если не истино,
//                     // то прирывается программа и фрагмент неверного кода с местом ошибки попадает в командную строку
                     // assert определён дважды.

    if (IsZero(a) && IsZero(b) && IsZero(c))
    {
        res.roots = SQER_INF;
        return res;
    }

    if (IsZero(a))
    {
        res.x1 = - c / b;
        res.roots = 1;
        return res;
    }

    double d = b*b - 4 * a*c;
    qDebug() << "d: " << d;

    if (d < 0)
    {
        res.roots =0;
        return res;
    }

    if (d == 0)
    {
        res.x1 = (-b - sqrt(d)) / 2 / a;
        res.x2 = res.x1;
        res.roots = 1;
        return res;
    }

    if (d > 0)
    {
        res.x1 = (-b - sqrt(d)) / 2 / a;
        res.x2 = (-b + d) / 2 / a;
        res.roots = 2;
        return res;
    }
    return res;
}
