int sensorPin = A0;   // select the input pin fo rthe potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare teh ledPin as an OUTPUT:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.print(sensorValue);
  if (sensorValue>800)
  {
    digitalWrite(ledPin, High);
  }
  else
  {
    digitalWrite(ledPin, Low);
  }

  delay(100);
}

