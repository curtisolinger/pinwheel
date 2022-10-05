const int switchPin = 2;                  /* define the variable switchPin */
const int motorPin = 9;                   /* define the variable motorPin */
int switchState = 0;

void setup() {
  pinMode(motorPin, OUTPUT);              /* configure the digital pin 9 to be output */
  pinMode(switchPin, INPUT);              /* configure the digital pin 2 to be input */
 }

void loop() {
  switchState = digitalRead(switchPin);   /* check the voltage level on pin 2 */

  if (switchState == HIGH) {              /* if digitalRead reads voltage on the switchPin, then */
    digitalWrite(motorPin, HIGH);         /* send 5v to the motor */
  }
  else {
    digitalWrite(motorPin, LOW);          /* send 0v to the motor */
  }
}
