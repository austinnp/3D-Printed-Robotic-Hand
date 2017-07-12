// flex labeled 0 360 to 740, 650 not moving
// flex labeled 1 390 to 730, 674 not moving
// flex labeled 2 450 to 740, 672 not moving
// flex labeled 3 470 to 760, 713 not moving
// flex labeled 4 410 to 740, 690 not moving
const int FLEX_PIN = A0;
const int FLEX_PIN1 = A1;
const int FLEX_PIN2 = A2;
const int FLEX_PIN3 = A3;
const int FLEX_PIN4 = A4;

#include <Servo.h>
Servo servo;
Servo servo1; // creates servo object to control a servo
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  Serial.begin(9600);

  servo.attach(11);
  servo1.attach(9);
  servo2.attach(6);
  servo3.attach(5);
  servo4.attach(3);

  servo.write(0);
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  delay(3000);
}

void loop() {
  int flexpos;
  int servopos;
  flexpos = analogRead(FLEX_PIN);
  servopos = map(flexpos, 640, 430, 0, 180); 
  servopos = constrain(servopos, 0, 180);
  servo.write(servopos);
  //Serial.println("0: " + String(flexpos));
  
  int flexpos1;
  int servopos1;
  flexpos1 = analogRead(FLEX_PIN1);
  servopos1 = map(flexpos1, 650, 440, 0, 180); 
  servopos1 = constrain(servopos1, 0, 180);
  servo1.write(servopos1);
  //Serial.println("1: " + String(flexpos1));
  
  int flexpos2;
  int servopos2;
  flexpos2 = analogRead(FLEX_PIN2);
  servopos2 = map(flexpos2, 680, 450, 0, 180); 
  servopos2 = constrain(servopos2, 0, 180);
  servo2.write(servopos2);
  //Serial.println("2: " + String(flexpos2));

  int flexpos3;
  int servopos3;
  flexpos3 = analogRead(FLEX_PIN3);
  servopos3 = map(flexpos3, 650, 450, 0, 180); 
  servopos3 = constrain(servopos3, 0, 180);
  servo3.write(servopos3);
  Serial.println("3: " + String(flexpos3));

  int flexpos4;
  int servopos4;
  flexpos4 = analogRead(FLEX_PIN4);
  servopos4 = map(flexpos4, 650, 455, 0, 180); 
  servopos4 = constrain(servopos4, 0, 180);
  servo4.write(servopos4);
  //Serial.println("4: " + String(flexpos4));

  delay(200);
}

