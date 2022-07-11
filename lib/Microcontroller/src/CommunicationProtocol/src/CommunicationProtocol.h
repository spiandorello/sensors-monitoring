#ifndef MCC_MONITORING_COMMUNICATIONPROTOCOL_H
#define MCC_MONITORING_COMMUNICATIONPROTOCOL_H

class CommunicationProtocol {
public:
    virtual void send(uint16_t data) {};
};

#endif
