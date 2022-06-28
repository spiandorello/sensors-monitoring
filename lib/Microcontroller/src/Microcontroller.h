#ifndef MCC_MONITORING_MICROCONTROLLER_H
#define MCC_MONITORING_MICROCONTROLLER_H

class Microcontroller {
public:
    virtual Microcontroller* init() { return nullptr; };
    virtual uint16_t readAdc(uint8_t pos) { return 0; };
};

#include "./Types/Avr/Avr.h"

#endif
