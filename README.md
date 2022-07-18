# Mcc monitoring system

This is a microcontroller application, develop in c++, using mostly [platformio](https://platformio.org/).
The main goal of this project is to be a generalization for reading sesors which send data through a generic communication protocol.

## Class diagram

The class diagram of this project is found in this link:
- [Mcc monitoring system](https://miro.com/welcomeonboard/RmN3NGh5SDBpdDVNeXlLb3V6MDNPQmFqN1RER1k2cjZSVWl6MlhFZHVIaVl4THhjcEJNMXgyaGtTaGpVRUhZSHwzNDU4NzY0NTE2Mzc2NTI5MDk1?share_link_id=512821483319)

The [UML Class diagram](https://www.visual-paradigm.com/guide/uml-unified-modeling-language/uml-class-diagram-tutorial/) is a graphical notation used to construct and visualize object oriented systems. A class diagram in the Unified Modeling Language (UML) is a type of static structure diagram that describes the structure of a system by showing the system's: 
 - Classes,
 - Their attributes,
 - Operations (or methods), and the relationships among objects.

## Components
A brief of the components responsibilities;

### Ecu

The ECU, electronic control unit, is the main class of this project.
It connects the micrometer and the sensors used by the designer, which in this case the Aeduino and the LM35 were chosen.
### Microcontroller
The microcontroller is an interface that must be implemented by the microcontroller used, the adcs and the communication protocol.

### Sensors
Sensors are an interface that all sensors must use.

### Temperature sensor
To build the temperature sensor i used a behavioral design pattern known as [strategy](https://refactoring.guru/pt-br/design-patterns/strategy).

## Built with:
* [C++](https://en.cppreference.com/w/cpp/14)
* [Arduino](https://www.arduino.cc/reference/en/libraries/)
* [Atmega328p](https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf)