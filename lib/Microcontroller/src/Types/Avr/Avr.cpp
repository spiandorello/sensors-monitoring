#include "Avr.h"

Microcontroller* Avr::init() {
    this->initializeAdcs();

    return (Microcontroller *) this;
}

uint16_t Avr::readAdc(uint8_t pos) {
    return _adcs[pos]->read();
}

void Avr::initializeAdcs() {
    auto adc = new AvrAdc(5, 128);
    adc->setPrescaler(128);
    adc->setReadChanel(REFS0);

    auto adc1 = new AvrAdc(5, 128);
    adc->setPrescaler(128);
    adc->setReadChanel(REFS1);

    auto adc2 = new AvrAdc(5, 128);
    adc->setPrescaler(128);

    _adcs[Avr::ADC_0] = adc;
    _adcs[Avr::ADC_1] = adc1;
}
