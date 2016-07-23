#include "iszero.h"
bool IsZero(double x)
{
    if (fabs(x) <= DBL_EPSILON)
        return true;
    else
        return false;
}
