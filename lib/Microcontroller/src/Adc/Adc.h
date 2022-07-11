#ifndef MCC_MONITORING_ADC_H
#define MCC_MONITORING_ADC_H

class Adc {
protected:
    uint8_t _voltage;
    uint8_t _resolution;

    virtual void waitConversion() {};
public:
    Adc(uint8_t voltage, uint8_t resolution) {
        _voltage = voltage;
        _resolution = resolution;
    }

    virtual void setReadChanel(uint8_t channel) { };
    virtual void setPrescaler(uint8_t scale) { };

    virtual uint16_t read() const { return 0; };
};

#endif //MCC_MONITORING_ADC_H
