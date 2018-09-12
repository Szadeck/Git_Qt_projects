#include <QCoreApplication>

#include <iostream>
#include <operatingsystem.h>
#include "testmanager.h"
#include "exceptionmanager.h"
#include "proxyexceptionmanager.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TestManager  * testmanager = new TestManager();
    IExceptionManager * proxyexceptionmanager = new ProxyExceptionManager(new ExceptionManager());

    try
    {
        testmanager->launchAllTest();
    }
    catch (std::exception e)
    {
        proxyexceptionmanager->HandleExceptionWithResponsibles(e);
    }


    return a.exec();
}
