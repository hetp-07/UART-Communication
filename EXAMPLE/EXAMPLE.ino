// AUTHOR: Het Patel (HETP-07)
// FILE: EXAMPLE.ino
// VERSION: 1.0.0
// PURPOSE: DHT11 Temperature & Humidity Sensor data show using uart on teraterm



#include "uart.h"
#include <dht11.h>
#define DHT07PIN 7

UART uart(9600);
dht11 DHT11;


void setup() {
    uart.begin();
}

void loop() {
	int output=DHT11.read(DHT07PIN);
	uart.println("Temperature  (C): " );
	uart.printdataln(DHT11.temperature);
	delay(2000);	
	//uart.echoBack(); // Echo back received characters
}
