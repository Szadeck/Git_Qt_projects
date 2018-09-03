#include <QCoreApplication>

#include <iostream>
#include <operatingsystem.h>
#include "testmanager.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TestManager testmanager;
    testmanager.launchAllTest();

    return a.exec();
}
