//Source code for LED 3
#include <SoftwareSerial.h>
String value;
int TxD = 11;
int RxD = 10;
int servoposition;
SoftwareSerial bluetooth(TxD, RxD);

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  
  Serial.begin(9600);       // start serial communication at 9600bps
  bluetooth.begin(9600);
}

void loop() {
  Serial.println(value);
 if (bluetooth.available())
   {
    value = bluetooth.readString();

    if (value == "all LED turn on"){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH); 
    digitalWrite(4, HIGH);
    
      }

    if (value == "all LED turn off"){
      digitalWrite(2, LOW); 
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
         
      }

    if (value == "turn on Red LED"){
    digitalWrite(2, HIGH); 
      }

    if (value == "turn on yellow LED"){
      digitalWrite(3, HIGH);       
      }

    if (value == "turn on blue LED"){
    digitalWrite(4, HIGH); 
      }

      
   
      
    if (value == "turn off red LED"){
    digitalWrite(2, LOW); 
      }

    if (value == "turn off yellow LED"){
      digitalWrite(3, LOW);       
      }
       if (value == "turn off blue LED"){
    digitalWrite(4, LOW); 
      }
      

 }

}

