#ifndef ITEST_H
#define ITEST_H

#include <iostream>

class ITest
{
public:
    ITest(std::string testname) : _testname(testname) {}
    virtual ~ITest() = default;
    // Core method of the NVI
    void launchAndCheckTest();

private:
    virtual bool test() = 0;

    // Attributes
    std::string _testname;

};

#endif // ITEST_H
