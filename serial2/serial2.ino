// further adventures in writing to the serial port

// the pin to control, typically this pin has an LED attached
int ledPin = 13;
// control message to be sent over serial
int incMsg;

void setup() {
  // setup serial port
  Serial.begin(9600);
  // setup the led pin
  pinMode(ledPin, OUTPUT);
  // print some status messages over the serial port
  Serial.println("Hello, human (>'.'>)");
  Serial.println("This is lesson 3");
} 

void loop() {
  if (Serial.available() > 0) {
    // get input from user
    incMsg = Serial.read();
    // if msg is 1, turn on the led
    if (incMsg == 49) {
      // write the value HIGH to the ledPin. switches the LED on
      digitalWrite(ledPin, HIGH);
    }
    else if (incMsg != 49) {
      // write the value LOW, which turns the LED off
      digitalWrite(ledPin, LOW);
    }
  } 
}
