#include "itest.h"

void ITest::launchAndCheckTest()
{
    // Do check before launching the test
    std::cout << "Test : " << this->_testname << " is starting ..." << std::endl;

    bool testResult = this->test();

    // Do check after the test
    if (testResult != true)
        std::cout << "Test failed" << std::endl;
    else
        std::cout << "Test OK" << std::endl;
}
