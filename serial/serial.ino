// hello world, write to the led pin

// the pin to control, typically this pin has an LED attached
int ledPin = 13;

void setup() {
  // setup serial port
  Serial.begin(9600);
  // make the pin act as Output, as we will write a value to it
  pinMode(13, OUTPUT);
}

void loop() {
  // write the value HIGH to the ledPin. switches the LED on
  digitalWrite(ledPin, HIGH);
  // print on message
  Serial.println("LED is ON");
  // pause for 3 seconds
  delay(3000);
  
  // write the value LOW, which turns the LED off
  digitalWrite(ledPin, LOW);
  // print off message
  Serial.println("LED is OFF");
  // pause for 3 s"conds
  delay(3000);
}
