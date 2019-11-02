#include <Servo.h>
Servo servo1;

int Signal = 0;

void setup()
{
  servo1.attach(3);
  Serial.begin(600);
}

void loop()
{
  Signal = map(analogRead(A0), 0, 1024, 0, 180);
  analogWrite(3, Signal);

}