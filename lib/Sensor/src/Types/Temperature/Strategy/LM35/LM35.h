#ifndef MONITORING_SYSTEM_LM35_H
#define MONITORING_SYSTEM_LM35_H

#include <WString.h>
#include <Microcontroller.h>

#include "../../TemperatureInterface.h"

class LM35 : public TemperatureInterface {
private:
    String _name;
    uint8_t _adcPosition;

public:
    explicit LM35(String name, uint8_t adcPosition) {
        _name = name;
        _adcPosition = adcPosition;
    }

    String getName() const override { return _name; }
    uint16_t getTemperature(Microcontroller* mcc) const override;
};

#endif
