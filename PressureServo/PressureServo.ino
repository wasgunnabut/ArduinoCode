#include <Servo.h>;
int servoPin = 12;
Servo Servo1;
const int Fabric = 0;
int level = 0;

void setup() {
  // put your setup code here, to run once:
  Servo1.attach(servoPin);
  Serial.begin(2000000);

}

void loop() {
  // put your main code here, to run repeatedly:
  int level = analogRead(Fabric);
  Serial.println(level);
  delay(1000);

if (level >1000)
  {
    Servo1.write(90);
  }
if (level <1000)
  {
    Servo1.write(180);
  }

  if(level == 0)
  {
    Servo1.write(0);
  }
  

}
