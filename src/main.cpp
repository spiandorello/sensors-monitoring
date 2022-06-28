#include <Arduino.h>

#include <avr/io.h>
#include <util/delay.h>

#include <bits.h>
#include <gpio.h>

#include <Microcontroller.h>

#define LED_PORT GPIO_B
#define LED_PIN	PB0

#define BTN_PORT GPIO_B
#define BTN_PIN PB1

int main() {
    Serial.begin(9600);
    LED_PORT->DDR = SET(LED_PIN);
    BTN_PORT->PORT = SET(BTN_PIN);

    Microcontroller * mcc = new Avr();

    while (true) {
        mcc->init();
        Serial.println(mcc->readAdc(0));

        GPIO_SetBit(LED_PORT, LED_PIN);
        _delay_ms(1000);
        GPIO_ClrBit(LED_PORT, LED_PIN);
        _delay_ms(1000);
    }
}