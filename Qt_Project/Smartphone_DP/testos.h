#ifndef TESTOS_H
#define TESTOS_H

#include "itest.h"

class TestOS : public ITest
{
public:
    TestOS(std::string testname) : ITest(testname) {}
    ~TestOS() = default;
    virtual bool test();
};

#endif // TESTOS_H
