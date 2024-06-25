#include <Servo.h>
Servo a;
void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
  a.attach(2);
  a.write(70);
}

void loop() {
  if (analogRead (A0)<80)
  {
    a.write(30);
  }
  else if (analogRead(A0)>=80)
  {
    a.write(70);
  }
  Serial.println(analogRead(A0));
}
