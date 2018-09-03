#include "testmanager.h"

#include "testos.h"

void TestManager::launchAllTest()
{
    std::cout << "Test sequence activated : Launching all test." << std::endl;

    ITest * testos = new TestOS("TestOS");

    testos->launchAndCheckTest();
    delete testos;
}
