#include "Arduino.h"
#include "SerialProtocol.h"

void SerialProtocol::send(uint16_t data) {
    Serial.println(data);
}

void SerialProtocol::send(String data) {
    Serial.println(data);
}
