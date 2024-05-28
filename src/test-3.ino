// #include <Wire.h>
// #include <Adafruit_PWMServoDriver.h>

// #define MIN_PULSE_WIDTH       150  // Minimum pulse length count (out of 4096)
// #define MAX_PULSE_WIDTH       600  // Maximum pulse length count (out of 4096)
// #define FREQUENCY             60   // Analog servos run at ~60 Hz

// Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

// int potPin = A0;  // Potentiometer connected to A0
// int servoChannel = 0;  // Servo connected to channel 0 on the PWM driver

// void setup() {
//   Serial.begin(9600);
//   Serial.println("Starting potentiometer-servo test");

//   pwm.begin();
//   pwm.setPWMFreq(FREQUENCY);
//   delay(10);
// }

// void loop() {
//   int potVal = analogRead(potPin);  // Read value of Potentiometer connected to A0
  
//   // Print the potentiometer value to the Serial Monitor
//   Serial.print("Potentiometer A0: ");
//   Serial.println(potVal);
  
//   // Map Potentiometer position to Motor pulse width
//   int pulse_wide = map(potVal, 0, 1023, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH);
  
//   // Print the pulse width to the Serial Monitor
//   Serial.print("Motor pulse width: ");
//   Serial.println(pulse_wide);
  
//   // Set the servo position
//   pwm.setPWM(servoChannel, 0, pulse_wide);
  
//   delay(100);  // Add a delay to make the serial output more readable
// }