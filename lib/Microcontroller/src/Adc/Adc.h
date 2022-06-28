#ifndef MCC_MONITORING_ADC_H
#define MCC_MONITORING_ADC_H

class Adc {
public:
    virtual uint16_t read() const { return 0; };
};

#endif //MCC_MONITORING_ADC_H
