#ifndef MONITORING_SYSTEM_TEMPERATUREINTERFACE_H
#define MONITORING_SYSTEM_TEMPERATUREINTERFACE_H

#include <Microcontroller.h>

class TemperatureInterface {
public:
    virtual ~TemperatureInterface() {}
    virtual String getName() const = 0;
    virtual uint16_t getTemperature(Microcontroller* mcc) const = 0;
};

#endif
