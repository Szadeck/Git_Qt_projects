#include "proxyexceptionmanager.h"

ProxyExceptionManager::ProxyExceptionManager(IExceptionManager * em) : _em(em)
{
}

ProxyExceptionManager::~ProxyExceptionManager()
{
    delete this->_em;
}

void ProxyExceptionManager::HandleExceptionWithResponsibles(std::exception const & e)
{
    this->_em->HandleExceptionWithResponsibles(e);
}
