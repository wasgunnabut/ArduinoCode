/******************************************************************************
PIR_Motion_Detector_Halloween_Decoration.ino
Sketch for Critical Making Project
Jim Murphy @ BDW Studio
October, 9 2018
Based on example sketches from Sparkfun.com
******************************************************************************/
const int MOTION_PIN = 13; // Pin connected to motion detector
const int ledPins[] = {2,3,4,5,6,7,8,9,10,11,12}; // LED pin - active-high

void setup() 
{
  Serial.begin(9600);
  // The PIR sensor's output signal is an open-collector, 
  // so a pull-up resistor is required:
  pinMode(MOTION_PIN, INPUT_PULLUP);
  pinMode(ledPins[0], OUTPUT);
  pinMode(ledPins[1], OUTPUT);
  pinMode(ledPins[2], OUTPUT);
  pinMode(ledPins[3], OUTPUT);
  pinMode(ledPins[4], OUTPUT);
  pinMode(ledPins[5], OUTPUT);
  pinMode(ledPins[6], OUTPUT);
  pinMode(ledPins[7], OUTPUT);
  pinMode(ledPins[8], OUTPUT);
  pinMode(ledPins[9], OUTPUT);
  pinMode(ledPins[10], OUTPUT);
  pinMode(ledPins[11], OUTPUT);
  pinMode(ledPins[12], OUTPUT);
}

void loop() 
{
  int proximity = digitalRead(MOTION_PIN);
  if (proximity == LOW) // If the sensor's output goes low, motion is detected
  {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[1], HIGH);
    digitalWrite(ledPins[2], HIGH);
    digitalWrite(ledPins[3], HIGH);
    digitalWrite(ledPins[4], HIGH);
    digitalWrite(ledPins[5], HIGH);
    digitalWrite(ledPins[6], HIGH);
    digitalWrite(ledPins[7], HIGH);
    digitalWrite(ledPins[8], HIGH);
    digitalWrite(ledPins[9], HIGH);
    digitalWrite(ledPins[10], HIGH);
    digitalWrite(ledPins[11], HIGH);
    digitalWrite(ledPins[12], HIGH);
    delay (5000);
    
  }
  else
  {
    digitalWrite(ledPins[0], LOW);
    digitalWrite(ledPins[1], LOW);
    digitalWrite(ledPins[2], LOW);
    digitalWrite(ledPins[3], LOW);
    digitalWrite(ledPins[4], LOW);
    digitalWrite(ledPins[5], LOW);
    digitalWrite(ledPins[6], LOW);
    digitalWrite(ledPins[7], LOW);
    digitalWrite(ledPins[8], LOW);
    digitalWrite(ledPins[9], LOW);
    digitalWrite(ledPins[10], LOW);
    digitalWrite(ledPins[11], LOW);
    digitalWrite(ledPins[12], LOW);
    delay(500);
  }
}
