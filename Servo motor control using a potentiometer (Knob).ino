#include <Servo.h>

Servo myservo;  
int potPin = A0;  

void setup() {
  myservo.attach(9);  
}

void loop() {
  int potValue = analogRead(potPin); 
  
  int servoPosition = map(potValue, 0, 1023, 0, 180);
  
  myservo.write(servoPosition);
  
  delay(15);
}
