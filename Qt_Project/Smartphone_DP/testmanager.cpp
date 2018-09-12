#include "testmanager.h"

#include "testos.h"
#include "testexmr.h"

void TestManager::launchAllTest()
{
    std::cout << "Test sequence activated : Launching all test." << std::endl;

    ITest * testos = new TestOS("TestOS");

    TestExMr testexmr("TestExMr");
    testexmr.launchAndCheckTest();

    testos->launchAndCheckTest();
    delete testos;
}
