#include "resulttotext.h"

QString ResultsToText(QList<double> list)
{
    result res;
    QString result_text;
    for(int i = 0; i < list.size(); i+=3){
        res = SqEquation(list[i], list[i+1], list[i+2]);
        result_text.append(QString::number(res.roots));
        if(res.roots > 0){
            result_text.append(" ");
            result_text.append(QString::number(res.x1));
            if(res.roots > 1){
                result_text.append(" ");
                result_text.append(QString::number(res.x2));
            }
        }
        result_text.append("\r\n");
    }
    return result_text;
}
