#include <Servo.h>

// create servo object to control a servo
Servo myservo;  

int potpin = 0;  // analog pin connects the potentiometer
int val;    // variable reads value from the analog pin

void setup() {
  myservo.attach(9);  // attaches servo on pin 9 to servo object
}

void loop() {
  val = analogRead(potpin);           // reads value of potentiometer, 0 to 1023
  val = map(val, 0, 1023, 0, 180);     // scale to use with the servo, between 0 to 180
  myservo.write(val);                  // sets servo position according to scaled value
  delay(15);                           // waits for servo to get there
}

