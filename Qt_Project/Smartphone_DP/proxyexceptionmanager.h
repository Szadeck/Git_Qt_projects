#ifndef PROXYEXCEPTIONMANAGER_H
#define PROXYEXCEPTIONMANAGER_H

#include "iexceptionmanager.h"
#include "exceptionmanager.h"

class ProxyExceptionManager : public IExceptionManager
{
public:
    ProxyExceptionManager(IExceptionManager * em);
    virtual ~ProxyExceptionManager();
    virtual void HandleExceptionWithResponsibles(std::exception const & e);

private:
    IExceptionManager * _em;
};

#endif // PROXYEXCEPTIONMANAGER_H
