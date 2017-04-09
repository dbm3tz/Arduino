/*
 * Blink LED every second
 */

int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  // initialize pins as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
