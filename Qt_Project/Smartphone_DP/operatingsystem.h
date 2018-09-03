#ifndef OPERATINGSYSTEM_H
#define OPERATINGSYSTEM_H

#include"prototypeos.h"

class OperatingSystem : public PrototypeOS<OperatingSystem>
{
public:
    OperatingSystem(double firstVersion = 1.00) : PrototypeOS<OperatingSystem> (firstVersion) {}
    virtual ~OperatingSystem(){}

    virtual std::unique_ptr<OperatingSystem> clone() const;
};

#endif // OPERATINGSYSTEM_H
