#ifndef MCC_MONITORING_MICROCONTROLLER_H
#define MCC_MONITORING_MICROCONTROLLER_H

#include <stdint.h>
#include "./CommunicationProtocol/src/CommunicationProtocol.h"

class Microcontroller {
private:
    CommunicationProtocol* _communicationBus = nullptr;
public:
    virtual Microcontroller* init() { return nullptr; };
    virtual uint16_t readAdc(uint8_t pos) { return 0; };

    Microcontroller* setCommunicationBus(CommunicationProtocol* communicationBus) {
        _communicationBus = communicationBus;
        return this;
    };

    Microcontroller* sendData(uint16_t data) {
        this->_communicationBus->send(data);

        return this;
    }
};

#include "./Types/Avr/Avr.h"

#endif
