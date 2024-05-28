
// // // // // TEST WORKING POTENTIOMETERS

// #include <Wire.h>
// #include <Arduino.h>
// #include <SPI.h>
// #include <Adafruit_PWMServoDriver.h>

// #define MIN_PULSE_WIDTH       650
// #define MAX_PULSE_WIDTH       2350
// #define FREQUENCY             50
 
// Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

// void setup() {
//   Serial.begin(9600);
// }

// void loop() {
//   int potVal = analogRead(A0);  // Read value of Potentiometer connected to A0
//   int potVal1 = analogRead(A1);  // Read value of Potentiometer connected to A0
//   int potVal2 = analogRead(A2);  // Read value of Potentiometer connected to A0
//   int potVal3 = analogRead(A3);  // Read value of Potentiometer connected to A0
   
//   // Print the potentiometer value to the Serial Monitor
// //   Serial.print("Potentiometer A0: ");
// //   Serial.println(potVal);
// //   Serial.print("Potentiometer A1: ");
// //   Serial.println(potVal1);
//   Serial.print("Potentiometer A2: ");
//   Serial.println(potVal2);
// //   Serial.print("Potentiometer A3: ");
// //   Serial.println(potVal3);
  
//   delay(00);  // Add a delay to make the serial output more readable
// }