#include "LM35.h"
#include <Arduino.h>

uint16_t LM35::getTemperature(Microcontroller* mcc) const {
    uint16_t data = mcc->readAdc(_adcPosition);
    double temp = (data /1023.0) * 5000;

    return (uint16_t) temp;
}