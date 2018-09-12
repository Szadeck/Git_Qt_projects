#include "testos.h"
#include "operatingsystem.h"
#include "Prototypeos.cpp"

bool TestOS::test()
{

    //PrototypeOS<OperatingSystem> * os = std::unique_ptr<OperatingSystem>(new OperatingSystem());
    PrototypeOS<OperatingSystem> * os = new OperatingSystem();
    std::cout << "Os in version : " << os->getVersion() << std::endl;

    os->updateVersion(UpdateLevel::Minor);
    std::cout << "Os in version : " << os->getVersion() << std::endl;

    auto newos = os->updateAndClone(UpdateLevel::Major);
    std::cout << "newOs in version : " << newos->getVersion() << std::endl;

    delete os;

    return true;
}
