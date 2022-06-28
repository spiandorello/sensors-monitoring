#include "Avr.h"

Microcontroller* Avr::init() {
    _adcs.push_back(new AvrAdc());

    return (Microcontroller *) this;
}

uint16_t Avr::readAdc(uint8_t pos) {
    return _adcs.at(pos)->read();
}
