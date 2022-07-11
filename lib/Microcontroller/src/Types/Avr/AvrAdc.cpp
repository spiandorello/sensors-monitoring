#include "AvrAdc.h"

uint16_t AvrAdc::read() const {
    while(!TST_BIT(ADCS->ADC_SRA, ADIF));

    return ADC;
}

void AvrAdc::setReadChanel(uint8_t channel) {
    setAdMux(channel);
}

void AvrAdc::setPrescaler(uint8_t scale) {
    if (scale == AvrAdc::SCALE_128) {
        ADCS->ADC_SRA |=
                SET(ADPS0) | SET(ADPS1) | SET(ADPS2);
    }
}
