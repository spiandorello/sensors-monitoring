#ifndef MCC_MONITORING_SERIALPROTOCOL_H
#define MCC_MONITORING_SERIALPROTOCOL_H

#include "../../../../CommunicationProtocol/src/CommunicationProtocol.h"

class SerialProtocol : public CommunicationProtocol {
public:
    explicit SerialProtocol(uint32_t boundRate) {
        Serial.begin(boundRate);
    }

    void send(uint16_t data) override;
};

#endif //MCC_MONITORING_SERIALPROTOCOL_H
