#ifndef MONITORING_SYSTEM_SENSOR_H
#define MONITORING_SYSTEM_SENSOR_H

#include <Microcontroller.h>

class Sensor {
protected:
    Microcontroller* _mcc;

public:
    virtual uint16_t fetchData() const = 0;
    virtual String getType() const = 0;
    virtual String getName() const = 0;

    Sensor* setMicrocontroller(Microcontroller *mcc) {
        _mcc = mcc;
        return this;
    };

    virtual ~Sensor() = default;
};

#include "./Types/Temperature/Temperature.h"
#include "./Types/Temperature/TemperatureInterface.h"
#include "./Types/Temperature/Strategy/LM35/LM35.h"

#endif
