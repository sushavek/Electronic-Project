/*
  Blink

  Turns an LED on for 500 millisecond, then off for 500 millisecond, repeatedly.

*/

// the setup function runs once 
void setup() {
  
  pinMode(13, OUTPUT);           // initialize digital pin 13 as an output
 
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);        // turn the LED on (HIGH is the voltage level)
  delay(500);                    // wait and pin 13 will continue runs for 500 millisecond 
  digitalWrite(13, LOW);         // turn the LED off by making the voltage LOW
  delay(500);                    // wait for 500 millisecond

}
