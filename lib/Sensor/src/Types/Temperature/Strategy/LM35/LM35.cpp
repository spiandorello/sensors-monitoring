#include "LM35.h"

uint16_t LM35::getTemperature(Microcontroller* mcc) const {
    uint16_t data = mcc->readAdc(_adcPosition);
    double temp = data * 1000;

    return (uint16_t) temp;
}