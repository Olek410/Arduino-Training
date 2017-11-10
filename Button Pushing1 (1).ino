/*
 * Button
 * by DojoDave <http://www.0j0.org>
 *
 * Turns on and off a light emitting diode(LED) connected to digital
 * pin 13, when pressing a pushbutton attached to pin 7.
 * http://www.arduino.cc/en/Tutorial/Button
 */
int ledPinGreen = 13; // choose the pin for the LED
int ledPinRed = 12;
int inputPin1 = 2; // choose the input pin (for a pushbutton)
int inputPin2 = 3;
int inputPin3 = 4;
int inputPin4 = 5;
// variable for reading the pin status
void setup() {
  pinMode(ledPinGreen, OUTPUT);
  pinMode(ledPinRed, OUTPUT);
  pinMode(inputPin1, INPUT);
  pinMode(inputPin2, INPUT);
  pinMode(inputPin3, INPUT);
  pinMode(inputPin4, INPUT);// declare pushbutton as input
}
void loop(){
// read input value
 if (digitalRead(inputPin2) == LOW&&digitalRead(inputPin4) == LOW) { // check if the input is HIGH
 digitalWrite(ledPinGreen, HIGH);
   digitalWrite(ledPinRed, LOW);// turn LED OFF
 } else {
 digitalWrite(ledPinRed, HIGH);
   digitalWrite(ledPinGreen, LOW);// turn LED ON
 }
}