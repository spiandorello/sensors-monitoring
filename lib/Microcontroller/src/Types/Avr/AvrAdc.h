#ifndef MCC_MONITORING_AVRADC_H
#define MCC_MONITORING_AVRADC_H

#include <stdint.h>

#include "../../../../../include/bits.h"
#include "../../../../../include/avr_adc.h"

#include "../../Adc/Adc.h"

class AvrAdc : public Adc {

public:
    AvrAdc() {
        /* Ref externa no pino AVCC com capacitor de 100n em VREF.
        * Habiltiação apenas no Canal 0 */
        ADCS->AD_MUX = SET(REFS0);
        /* Habilita AD:
         * Conversão contínua
         * IRQ ativo
         * Prescaler de 128 */
        ADCS->ADC_SRA = SET(ADEN)  |	//Adc Enable
                        SET(ADSC)  | 	// Adc Start conversion
                        SET(ADATE) |	// Adc Auto Trigger
                        SET(ADPS0) | SET(ADPS1) | SET(ADPS2);

        /* Desabilita hardware digital de PC0 */
        ADCS->DIDr0.BITS.ADC0 = 1;
    }

    uint16_t read() const override;
};

#endif
