#include <Servo.h>
Servo myservo; // create servo object to control a servo // variable to store the servo position
int potPin = 0;
int val = 0; 
void setup() {
 myservo.attach(9); // attaches the servo on pin 9 to the servo object
}
void loop() {
 val = analogRead(potPin); 

 myservo.write(val); // tell servo to go to position in variable 'val'
 delay(15); // waits 15ms for the servo to reach the position
 
} 