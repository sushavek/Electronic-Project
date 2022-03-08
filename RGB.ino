/*
  Using the potentiometer to show the RGB colours(Red, Green and Blue) 
  by using the control structure if and else to turn on each of the colours of RGB.
  
 
 */


int Red = 6;                                // LED pin 6 for Red
int Green = 5;                              // LED pin 5 for Green
int Blue = 3;                               // LED pin 3 for Blue
int potentiometer = analogRead(A0);         // Pin A0 for potentiometer
int Output=0;                               // Potentiometer value

void setup() {
  // put your setup code here, to run once:
pinMode(Red, OUTPUT);                       // Configures the output of pin 6 = red 
pinMode(Green, OUTPUT);                     // Configures the output of pin 5 = red
pinMode(Blue, OUTPUT);                      // Configures the output of pin 3 = red
}

void loop() {
  // put your main code here, to run repeatedly:
int Output = analogRead(potentiometer);     // Output = value of the potentiometer

if (Output >= 900) {                        // if the value is equal or more than 900, 
  digitalWrite(Red, HIGH);                  // then turn the red on 
  digitalWrite(Green, LOW);                 // and turn off the green
  digitalWrite(Blue, LOW);                  // and turn off the blue
}
else if (Output <= 300) {                   // else if the value is equal or less than 300,
  digitalWrite(Green, HIGH);                // then turn the green on 
  digitalWrite(Red, LOW);                   // and turn off the red
  digitalWrite(Blue, LOW);                  // and turn off the blue
}

else {                                      // else is when the value is between 300 and 900,
  digitalWrite(Blue, HIGH);                 // then turn the blue on 
  digitalWrite(Red, LOW);                   // and turn off the red
  digitalWrite(Green, LOW);                 // and turn off the green
}
}
