#ifndef MCC_MONITORING_AVR_H
#define MCC_MONITORING_AVR_H

#include <Array.h>
#include <Microcontroller.h>

#include "./AvrAdc.h"

#include "../../Adc/Adc.h"

const int ELEMENT_COUNT_MAX = 5;

class Avr : public Microcontroller {
public:
    static const uint8_t ADC_LENGTH = 5;
    static const uint8_t ADC_0 = 0;
    static const uint8_t ADC_1 = 1;
    static const uint8_t ADC_2 = 2;
    static const uint8_t ADC_3 = 3;
    static const uint8_t ADC_4 = 4;

private:
    Array<Adc*, ADC_LENGTH> _adcs;

private:
    void initializeAdcs();

public:
    Microcontroller* init() override;
    uint16_t readAdc(uint8_t pos);
};

#include "Communication/Serial/SerialProtocol.h"

#endif
