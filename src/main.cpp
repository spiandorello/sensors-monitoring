#include <avr/io.h>
#include <util/delay.h>

#include <Ecu.h>
#include <Sensor.h>
#include <Microcontroller.h>
#include "../lib/Microcontroller/src/Types/Avr/Communication/Serial/SerialProtocol.h"

int main() {
    Microcontroller* mcc = new Avr();
    mcc->init();
    mcc->setCommunicationBus(new SerialProtocol(115200));

    Ecu* ecu = new Ecu(mcc);

    TemperatureInterface* sensor = new LM35("LM35_1", 0);
    Sensor* temperature = new Temperature(sensor);

    ecu->addSensor(temperature);

    while (true) {
        ecu->read();
        _delay_ms(1000);
    }
}