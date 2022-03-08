
/*
This program is a light chaser using a traffic light colors that goes to green, yellow, red and go back to red, yellow and green. 
Left to right and right to left.

07-3-2022

*/
                  //traffic light colors
int Green = 13;
int Yellow= 12;
int Red= 8;
int pinNumber= 13 and 12 and 8;

void setup() {
                                    
pinMode(pinNumber,OUTPUT); // THIS COMMAND WILL SET THE PIN MODE FOR OUTPUTS

}



void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(Green,HIGH);                    //Green will turn on once the program configures  
delay(500);                                  //Green stays turn on for 500 milliseonds
digitalWrite(Green,LOW);                     //Turn off led green or the pin 13 
digitalWrite(Yellow,HIGH);                   //Turns on Pin 12 right away because there is no delay
delay(500);                                  // the Yellow will run for 500 millis
digitalWrite(Yellow,LOW);                    //Turn off led yellow or the pin 12   
digitalWrite(Red,HIGH);                      //to make pin 8 on
delay(500);                                  //the program will run for 500 millis
digitalWrite(Red,LOW);                       //Turn off led red or the pin 8
digitalWrite(Yellow,HIGH);                   //to make pin 12 on
delay(500);                                  //the program will run for 500 millis
digitalWrite(Yellow,LOW);                    //Turn off led yellow or the pin 12
digitalWrite(Green,HIGH);                    //to make pin 13 on
delay(500);                                  //the program will run for 500 millis
digitalWrite(Green,LOW);                     //Turn off led green or the pin 13
  
}
