#include <Arduino.h>

const short int LED1 = 2;   //GPIO2

void setup() {
    pinMode(LED1, OUTPUT);    // Initialize the LED1 pin as an output
}

void loop() {
    digitalWrite(LED1, LOW);  // Turn the LED OFF
    delay(500);
    digitalWrite(LED1, HIGH); // Turn the LED ON
    delay(500);
}
