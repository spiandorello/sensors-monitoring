#ifndef MONITORING_SYSTEM_TEMPERATURE_H
#define MONITORING_SYSTEM_TEMPERATURE_H

#include "../../Sensor.h"
#include "./TemperatureInterface.h"

class Temperature : public Sensor {
private:
    TemperatureInterface *_strategy;

public:
    explicit Temperature(TemperatureInterface *temperature) : _strategy(temperature) {};
    uint16_t fetchData() const override;
    String getType() const override;
    String getName() const override;
};

#endif
