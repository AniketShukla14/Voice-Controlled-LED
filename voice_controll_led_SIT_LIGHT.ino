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
  pinMode(5, OUTPUT);
  
  Serial.begin(9600);       // start serial communication at 9600bps
  bluetooth.begin(9600);
}

void loop() {
  Serial.println(value);
 if (bluetooth.available())
   {
    value = bluetooth.readString();

    if (value == "all led turn on"){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH); 
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    
    
      }

    if (value == "all led turn off"){
      digitalWrite(2, LOW); 
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
         
      }

    if (value == "turn on s"){
    digitalWrite(2, HIGH); 
      }

    if (value == "turn on i"){
      digitalWrite(3, HIGH);       
      }

    if (value == "turn on tea"){
    digitalWrite(4, HIGH); 
      }
   if (value == "turn on dot"){
    digitalWrite(5, HIGH); 
      }
      
   
      
    if (value == "turn off s"){
    digitalWrite(2, LOW); 
      }

    if (value == "turn off i"){
      digitalWrite(3, LOW);       
      }
       if (value == "turn off tea"){
    digitalWrite(4, LOW); 
      }
       if (value == "turn off dot"){
    digitalWrite(5, LOW); 
      }
      

 }

}

