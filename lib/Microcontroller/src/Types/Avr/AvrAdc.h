#ifndef MCC_MONITORING_AVRADC_H
#define MCC_MONITORING_AVRADC_H

#include "../../../../../include/bits.h"
#include "../../../../../include/avr_adc.h"

#include "../../Adc/Adc.h"

class AvrAdc : public Adc {
private:
    const uint16_t SCALE_128 = 128;

private:
    void enable() {
        ADCS->ADC_SRA |= SET(ADEN)  |	//Adc Enable
                        SET(ADSC)  | 	// Adc Start conversion
                        SET(ADATE);	// Adc Auto Trigger
    }

    void setAdMux(uint8_t item) {
        ADCS->AD_MUX |= SET(item);
    }

    void disableDigitalHardwarePc0() {
        ADCS->DIDr0.BITS.ADC0 = 1;
    }

public:
    AvrAdc(uint8_t voltage, uint8_t resolution) : Adc(voltage, resolution) {
        enable();
        disableDigitalHardwarePc0();
    }

    void setPrescaler(uint8_t scale) override;
    void setReadChanel(uint8_t channel) override;
    uint16_t read() const override;
};

#endif
