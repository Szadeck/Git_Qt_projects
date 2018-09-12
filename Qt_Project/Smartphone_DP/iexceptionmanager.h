#ifndef IEXCEPTIONMANAGER_H
#define IEXCEPTIONMANAGER_H

#include "iexceptionresponsible.h"

class IExceptionManager
{
public:
    IExceptionManager() = default;
    virtual ~   IExceptionManager() = default;
    virtual void HandleExceptionWithResponsibles(std::exception const & e) = 0;
};

#endif // IEXCEPTIONMANAGER_H
