#ifndef MCC_MONITORING_AVR_H
#define MCC_MONITORING_AVR_H

#include <Array.h>
#include <Microcontroller.h>

#include "./AvrAdc.h"

#include "../../Adc/Adc.h"

const int ELEMENT_COUNT_MAX = 5;

class Avr : public Microcontroller {
private:
    Array<Adc*,5> _adcs;

private:
    void initializeAdcs();

public:
    Microcontroller* init() override;
    uint16_t readAdc(uint8_t pos);
};

#endif
