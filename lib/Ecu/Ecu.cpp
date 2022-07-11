#include "Ecu.h"

Ecu* Ecu::addSensor(Sensor *sensor) {
    sensor->setMicrocontroller(_mcc);
    _sensors.push_back(sensor);

    return this;
}

Ecu* Ecu::read() {
    for (Sensor* sensor : _sensors) {
        _mcc->sendData(sensor->fetchData());
    }

    return this;
}