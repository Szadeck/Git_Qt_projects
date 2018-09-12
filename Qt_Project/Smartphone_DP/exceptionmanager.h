#ifndef EXCEPTIONMANAGER_H
#define EXCEPTIONMANAGER_H

#include <list>
#include <iostream>
#include "iexceptionmanager.h"
#include "iexceptionresponsible.h"
#include "ermemory.h"


class ExceptionManager : public IExceptionManager
{
public:
    ExceptionManager();
    virtual ~ExceptionManager();
private:
    // The exception responsible list is a core key for the responsability chain pattern
    std::list<IExceptionResponsible *> er_list;

public:
    virtual void HandleExceptionWithResponsibles(std::exception const & e);
};

#endif // EXCEPTIONMANAGER_H
