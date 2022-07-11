#ifndef MCC_MONITORING_ECU_H
#define MCC_MONITORING_ECU_H

#include <Array.h>
#include <Microcontroller.h>

#include "../Sensor/src/Sensor.h"

class Ecu {
private:
    Microcontroller* _mcc;
    Array<Sensor*, 5> _sensors;

public:
    Ecu(Microcontroller* mcc) { _mcc = mcc; }
    Ecu* addSensor(Sensor *sensor);
    Ecu* read();
};

#endif
