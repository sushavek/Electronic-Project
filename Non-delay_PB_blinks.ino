/*
none-Delay (millis)
In the non-delay program, the blinking led will turn on when pressing the push button
when the push button is released, it will saved the last state of the LED(on or off)
*/
                                        //defining variables of the pushbutton and the ledstate
int ledState = LOW;
unsigned long preMillis = 0;
int pushbutton;


void setup() {
                                        //defining pin (7 and 2) & serial communication
pinMode(7,OUTPUT);
pinMode(2,INPUT);
Serial.begin(9600);
}

void loop() {
  
pushbutton = digitalRead(2);            //Push button 
if(pushbutton == 1){                    //when pushbutton is equal to 1, the led blinks

  unsigned long ms = millis();
if((ms-preMillis)>=1000){               // the "if, else" condition
  preMillis = ms;

  if(ledState == LOW){
    ledState = HIGH;
    }
  else{
    ledState = LOW;
    }
  digitalWrite(7,ledState);             //led state stays the same until pushbutton is pressed once again
  } 

}
Serial.print(pushbutton);               //Print pushbutton value on serial monitor
delay(500);
}
