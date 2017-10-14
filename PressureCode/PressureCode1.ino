const int green = 13;
const int white = 12;
const int Fabric = 0;
int level = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode (green, OUTPUT);
  pinMode (white, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int level = analogRead(Fabric);
  Serial.println(level);
  delay(1000);

if (level >1000)
  {
    analogWrite (green, level);
    digitalWrite (white, LOW);
  }
if (level <1000)
  {
    analogWrite (white, level);
    digitalWrite (green, LOW);
  }

  if(level == 0)
  {
    digitalWrite (green, LOW);
    digitalWrite (white, LOW);
  }
  

}
