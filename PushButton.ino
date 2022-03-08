/*
 Digital Read Serial with Push Button

 Reads a digital input on pin 2, prints the result to the Serial Monitor
 
 */

int PB = 2;                               //Pin 2 in the Arduino Uno has a pushbutton attached to it

void setup() {  
  // put your setup code here, to run once:
Serial.begin(9600);                       //Serial communication at 9600 bits per second
pinMode(PB,INPUT);                        //Configures the specified pin to behave as an input
}

void loop() {  
  // put your main code here, to run repeatedly:
int buttonState=digitalRead(PB);          //To program a push button to act as a toggle switch
Serial.println(buttonState);              //To read the value in the Serial Monitor vertically
delay(500);                               
}
