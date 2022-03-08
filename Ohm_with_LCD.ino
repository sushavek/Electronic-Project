#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;          // with the arduino pin number it is connected to
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);                           // initialize the pin of the lcd 

byte Ohm[] = {
  B00000,
  B00000,
  B00000,
  B01110,
  B10001,
  B01010,
  B11011,
  B00000 
};
const int analogPin = A0;  // Analog input pin that senses Voltagr output
int analogValue = 0;       // The default value of the pin A0
float Vin = 5;             // Input voltage
float Vout = 0;            // Voltage output default value
float Resistor1 = 1999;    // Reference resistor's value in ohms 
float R = 0;               // Tested resistors default value


void setup() {
 
  Serial.begin(9600);     // Serial Communication 9600
  lcd.begin(16,2);        // placement on the lcd display
  lcd.createChar(0,Ohm);  // use this to display a character 
  lcd.setCursor(8,0);     // place it in firs line 8 and 0=none on the second line
  lcd.write(byte(0));     // no byte for the character
}


void loop() {
 analogValue = analogRead(analogPin);        // Read Vout on analog input pin A0 (Arduino can sense from 0-1023, 1023 is 5V)
  Vout = (Vin * analogValue) / 1023;         // Convert Vout to volts
  R = Resistor1 * (1 / ((Vin / Vout) - 1));  // Formula to calculate tested resistor's value
  Serial.print("R: ");                       // Print the first resistor
  Serial.println(R);                         // Give calculated resistance in Serial Monitor
  delay(1000);                               // wait for 1 sec
 
lcd.setCursor(0,0);                          // place on the first line and none on the second line
 lcd.print(R);                               // display/print the value of the second R on the lcd display
  }








  
