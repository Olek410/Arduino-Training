int ledPins[] = {2,3,4,5,6,7,8,9};

void setup()
{
   pinMode(ledPins[0],OUTPUT);
  pinMode(ledPins[1],OUTPUT);
  pinMode(ledPins[2],OUTPUT);
  pinMode(ledPins[3],OUTPUT);
  pinMode(ledPins[4],OUTPUT);
  pinMode(ledPins[5],OUTPUT);
  pinMode(ledPins[6],OUTPUT);
  pinMode(ledPins[7],OUTPUT);
}

void loop()
{
  digitalWrite(ledPins[3], HIGH);
  digitalWrite(ledPins[4], HIGH);
  delay(500); 
  digitalWrite(ledPins[3], LOW);
  digitalWrite(ledPins[4], LOW);
  digitalWrite(ledPins[2], HIGH);
  digitalWrite(ledPins[5], HIGH);
  delay(500); 
  digitalWrite(ledPins[2], LOW);
  digitalWrite(ledPins[5], LOW);
  digitalWrite(ledPins[1], HIGH);
  digitalWrite(ledPins[6], HIGH);
  delay(500); 
  digitalWrite(ledPins[1], LOW);
  digitalWrite(ledPins[6], LOW);
  digitalWrite(ledPins[0],HIGH);
  digitalWrite(ledPins[7],HIGH);
  delay(500); 
  digitalWrite(ledPins[0], LOW);
  digitalWrite(ledPins[7], LOW);
}