const int FLEX_PIN = A0;
const int FLEX_PIN1 = A1;
const int FLEX_PIN2 = A2;
const int FLEX_PIN3 = A3;
const int FLEX_PIN4 = A4;

#include <Servo.h>
Servo servo;        // creates servo object to control a servo
Servo servo1; 
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  Serial.begin(9600);

  servo.attach(11); //attaches servo to a digital pin on the arduino
  servo1.attach(9);
  servo2.attach(6);
  servo3.attach(5);
  servo4.attach(3);

  servo.write(0);   //sets the servo to 0
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  delay(3000);
}

void loop() {
  int flexpos; 
  int servopos;
  flexpos = analogRead(FLEX_PIN); //reads analog value from arduino
  servopos = map(flexpos, 640, 430, 0, 90);  //maps analog values to 0 to 180 degrees of servo rotation
  servopos = constrain(servopos, 0, 180);     //constrains servo rotation to be between 0 and 180 degrees
  servo.write(servopos);    //tells servo to turn however many degrees accordingly to the analog values arduino takes in
  //the line of code below is for debugging purposes so you can find the values of your flex sensors
  //Serial.println("0: " + String(flexpos));
  
  int flexpos1;
  int servopos1;
  flexpos1 = analogRead(FLEX_PIN1);
  servopos1 = map(flexpos1, 640, 410, 0, 115); 
  servopos1 = constrain(servopos1, 0, 180);
  servo1.write(servopos1);
  Serial.println("1: " + String(flexpos1));
  
  int flexpos2;
  int servopos2;
  flexpos2 = analogRead(FLEX_PIN2);
  servopos2 = map(flexpos2, 680, 450, 0, 110); 
  servopos2 = constrain(servopos2, 0, 180);
  servo2.write(servopos2);
  //Serial.println("2: " + String(flexpos2));

  int flexpos3;
  int servopos3;
  flexpos3 = analogRead(FLEX_PIN3);
  servopos3 = map(flexpos3, 650, 450, 0, 105); 
  servopos3 = constrain(servopos3, 0, 180);
  servo3.write(servopos3);
  //Serial.println("3: " + String(flexpos3));

  int flexpos4;
  int servopos4;
  flexpos4 = analogRead(FLEX_PIN4);
  servopos4 = map(flexpos4, 650, 455, 0, 180); 
  servopos4 = constrain(servopos4, 0, 180);
  servo4.write(servopos4);
  //Serial.println("4: " + String(flexpos4));

  delay(50);
}

