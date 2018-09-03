#include "prototypeos.h"

template<class T>
void PrototypeOS<T>::updateVersion(UpdateLevel level)
{
    switch (level)
    {
    case UpdateLevel::Minor:
        this->_version += addMinor;break;

    case UpdateLevel::Major:
        this->_version += addMajor;break;

    case UpdateLevel::Critikal:
        this->_version += addCritikal;break;
    }
}


template<class T>
std::unique_ptr<T> PrototypeOS<T>::updateAndClone(UpdateLevel level)
{
    this->updateVersion(level);
    return this->clone();
}
