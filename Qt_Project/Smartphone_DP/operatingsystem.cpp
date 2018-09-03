#include "operatingsystem.h"

std::unique_ptr<OperatingSystem> OperatingSystem::clone() const
{
    return std::unique_ptr<OperatingSystem>(new OperatingSystem(*this));
}
