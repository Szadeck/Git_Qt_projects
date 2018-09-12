#include "exceptionmanager.h"

ExceptionManager::ExceptionManager()
{
    this->er_list.push_front(new ERMemory());
}

ExceptionManager::~ExceptionManager()
{
    for (auto it = this->er_list.begin(); it != this->er_list.end(); it++)
    {
        std::cout << "i destroy " << (*it) << std::endl;
        delete (*it);
    }
}

void ExceptionManager::HandleExceptionWithResponsibles(std::exception const & e)
{
    for (auto it = this->er_list.begin(); it != this->er_list.end(); it++)
    {
        (*it)->AnalyseAndTakeResponsability(e);
    }
}
