#include "testexmr.h"
#include "proxyexceptionmanager.h"

bool TestExMr::test()
{
    std::cout << "Create the Proxy Manager." << std::endl;
    ProxyExceptionManager proxymanager(new ExceptionManager());
    try {
        throw std::domain_error("Exception launched !");
    } catch (std::exception e) {
        proxymanager.HandleExceptionWithResponsibles(e);
    }
    return true;
}

void TestExMr::caughtExceptionStep()
{
    std::cout << "Exception caught !" << std::endl << "Test OK" << std::endl;
}

