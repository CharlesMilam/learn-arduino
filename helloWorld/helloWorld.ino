// hello world, write to the led pin

// the pin to control, typically this pin has an LED attached
int ledPin = 13;

void setup() {
  // make the pin act as Output, as we will write a value to it
  pinMode(13, OUTPUT);
}

void loop() {
  // write the value HIGH to the ledPin. switches the LED on
  digitalWrite(ledPin, HIGH);
  // pause for 1 second
  delay(3000);
  
  // write the value LOW, which turns the LED off
  digitalWrite(ledPin, LOW);
  // pause for 1 second
  delay(3000);
}
