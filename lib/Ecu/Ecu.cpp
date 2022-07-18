#include "Ecu.h"

Ecu* Ecu::addSensor(Sensor *sensor) {
    sensor->setMicrocontroller(_mcc);
    _sensors.push_back(sensor);

    return this;
}

Ecu* Ecu::read() {
    for (Sensor* sensor : _sensors) {

        String data = "{";
        data.concat("\"Type\": ");

        data.concat("\"");
        data.concat(sensor->getType());
        data.concat("\"");
        data.concat(", ");

        data.concat("\"Name\": ");

        data.concat("\"");
        data.concat(sensor->getName());
        data.concat("\"");
        data.concat(", ");

        data.concat("\"Value\": ");

        data.concat("\"");
        data.concat(sensor->fetchData());
        data.concat("\"");

        data.concat("}");

        _mcc->sendData(data);
    }

    return this;
}