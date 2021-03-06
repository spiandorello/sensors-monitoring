#include "Temperature.h"

String Temperature::getName() const {
    return _strategy->getName();
}

String Temperature::getType() const {
    return "Temperature";
}

uint16_t Temperature::fetchData() const {
    return _strategy->getTemperature(_mcc);
}