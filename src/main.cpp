#include <avr/io.h>
#include <util/delay.h>

#include <Ecu.h>
#include <Sensor.h>
#include <Microcontroller.h>

int main() {
    Microcontroller* mcc = new Avr();
    mcc->init();
    mcc->setCommunicationBus(new SerialProtocol(115200));

    Ecu* ecu = new Ecu(mcc);

    TemperatureInterface* sensor = new LM35("LM35_1", Avr::ADC_0);
    Sensor* temperature = new Temperature(sensor);

    TemperatureInterface* sensor2 = new LM35("LM35_2", Avr::ADC_1);
    Sensor* temperature2 = new Temperature(sensor2);

    ecu->addSensor(temperature);
    ecu->addSensor(temperature);

    while (true) {
        ecu->read();
        _delay_ms(1000);
    }
}