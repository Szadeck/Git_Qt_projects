#include "ermemory.h"
#include "testexmr.h"

void ERMemory::AnalyseAndTakeResponsability(std::exception const & e)
{
    std::cout << "I check and take responsability for test." << std::endl;
    TestExMr::caughtExceptionStep();
}
