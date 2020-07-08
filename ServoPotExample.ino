#include <Servo.h>

Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(6);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(A0);

  Serial.print("AO => ");
  Serial.println(potValue);

  int servoPos = map(potValue, 0, 1024, 0, 180);

  myServo.write(servoPos);
  delay(20);
}
