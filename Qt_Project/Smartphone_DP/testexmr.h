#ifndef TESTEXMR_H
#define TESTEXMR_H

#include "itest.h"

class TestExMr : public ITest
{
public:
    TestExMr(std::string testname) : ITest(testname) {}
    virtual ~TestExMr() = default;

    virtual bool test();
    static void caughtExceptionStep();
};

#endif // TESTEXMR_H
