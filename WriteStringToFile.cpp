#include "WriteStringToFile.h"

bool WriteStringToFile(QString str)
{
    QFile file("Answer.txt");

    if ( file.open(QIODevice::ReadWrite) )
    {
        QTextStream stream( &file );
        stream << str;
        return true;
    }
    else
        return false;

}
