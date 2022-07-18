#ifndef MCC_MONITORING_COMMUNICATIONPROTOCOL_H
#define MCC_MONITORING_COMMUNICATIONPROTOCOL_H

#include <WString.h>

class CommunicationProtocol {
public:
    virtual void send(uint16_t data) {};
    virtual void send(String data) {};
};

#endif
