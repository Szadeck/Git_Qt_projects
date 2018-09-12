#ifndef ERMEMORY_H
#define ERMEMORY_H

#include "iexceptionresponsible.h"

class ERMemory : public IExceptionResponsible
{
public:
    ERMemory() = default;
    virtual ~ERMemory() = default;
    virtual void AnalyseAndTakeResponsability(std::exception const & e);
};

#endif // ERMEMORY_H
