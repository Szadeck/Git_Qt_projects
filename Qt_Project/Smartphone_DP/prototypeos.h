#ifndef PROTOTYPEOS_H
#define PROTOTYPEOS_H

#include <memory>
#include <iostream>
#include <cstdint>

#define addMinor    0.01
#define addMajor    0.1
#define addCritikal 1

enum class UpdateLevel : std::int8_t
{
    Minor       = 1,
    Major       = 2,
    Critikal    = 3
};

template<class T> class PrototypeOS
{
private:
    double _version;
public:
    // Constructor
    PrototypeOS(double firstVersion = 1.00) : _version(firstVersion) {}
    virtual ~PrototypeOS() {}
    // Getter/Setter
    double getVersion() {return _version;}

    // The prototype core method
    virtual std::unique_ptr<T> clone() const = 0;
    void updateVersion(UpdateLevel level);
    std::unique_ptr<T> updateAndClone(UpdateLevel level);

};

#endif // PROTOTYPEOS_H
