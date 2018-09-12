#ifndef IEXCEPTIONRESPONSIBLE_H
#define IEXCEPTIONRESPONSIBLE_H


#include <iostream>
#include <exception>

class IExceptionResponsible
{
public:
    IExceptionResponsible() = default;
    virtual ~IExceptionResponsible() = default;
    virtual void AnalyseAndTakeResponsability(std::exception const & e) = 0;
};

#endif // IEXCEPTIONRESPONSIBLE_H
