#include <QCoreApplication>

#include "GetFileText.h"
#include "StringToList.h"
#include "SqEquation.h"
#include "ResultToText.h"
#include "WriteStringToFile.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WriteStringToFile(ResultsToText(StringToList(GetFileText())));

    return a.exec();
}
