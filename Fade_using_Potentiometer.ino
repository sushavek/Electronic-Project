/*
 Fade with potentiometer

 Fade an LED on pin 11 using analog Write

 The pin 11 is a PWM cable pin which uses the analog output(analogWrite) function.
 Be sure to have the symbol "~" on the pin of arduino when using analog input
 */
int led = 11;                                        // PWM pin 11
int Potentiometer = analogRead(A0);                  // Pin A0 for potentiometer, analogRead= analog input
int Output=0;                                         // starts at value 0

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);                                // declare pin 11 to be an output
}

void loop() {
  // put your main code here, to run repeatedly:
int Output = analogRead(Potentiometer);              // To get the output value of the potentiometer
  analogWrite(led,Output/4);                         // The potentiometer controls the LED using its values
}
