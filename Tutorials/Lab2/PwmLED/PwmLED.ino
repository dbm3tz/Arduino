/*
 * Toggles the brightness the LED by pressing the button. PWM pins are marked with ~ (program uses pin 11).
 */

int ledPin = 11;
int ledLevel = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
    ledLevel = ledLevel + 51;
    if (ledLevel > 255) ledLevel = 0;
    delay(500);
    analogWrite(ledPin, ledLevel);
}

