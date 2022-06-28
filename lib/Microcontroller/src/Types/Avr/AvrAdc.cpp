#include "AvrAdc.h"

uint16_t AvrAdc::read() const {
    while(!TST_BIT(ADCS->ADC_SRA, ADIF));

    return ADC;
}