/*
 Fade

 Fade an LED on pin 11 using analog Write

 The pin 11 is a PWM cable pin which uses the analog output(analogWrite) function.
 Be sure to have the symbol "~" on the pin of arduino when using analog input
 */
int led = 11;                                     // digital pin 11 for LED
int brightness = 0;                               // starts at 0 for brightness
int fadeAmount = 5;                               // every bit value of 5


void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);                             // declare pin 11 to be an output
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(led, brightness);                     // The brightness of the LED will change depending on the bit value

brightness = brightness + fadeAmount;             // using the arithmetic operation to find the brightness by adding the fadeAmount incrementing by 5

if (brightness <=0 || brightness >=255){          // using the "if" control structure condition to fade the brightness
fadeAmount = - fadeAmount;                        // it will substract whatever the fadeAmount was before
}
delay(20);                                        // delay for 20 milliseconds
}
