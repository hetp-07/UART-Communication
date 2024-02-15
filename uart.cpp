// uart.cpp

#include <Arduino.h>
#include "uart.h"
UART::UART(int baudRate) {
    _baudRate = baudRate;
}

void UART::begin() {
    Serial.begin(_baudRate);
}

void UART::println(const char* message) {
    Serial.println(message);
}
void UART::printFromPinToUART(float data) {
	Serial.println(data);
}

#ifdef ECHO
void UART::echoBack() {
    while (Serial.available() > 0) {
        char receivedChar = Serial.read();
        Serial.print(receivedChar);
    }
}
#endif

