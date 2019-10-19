#include <SoftwareSerial.h>

SoftwareSerial BTserial(0, 1); // module RX -> TX arduino ***** and module TX -> RX arduino

int sensorPin = A0;
int sensorValue = 0;
long randNumber;  
void setup()  
{
  BTserial.begin(9600); 
  Serial.begin(9600);
}

void loop() {
  if(Serial.available())
  {
    Serial.println("hola mundo");
    Serial.write("hola mundo");
  }
  if(BTserial.available())
  {
    BTserial.println("hola mundo");
    BTserial.write("hola mundo");
  }

  sensorValue = analogRead(sensorPin);
  randNumber = random(300);
  Serial.print(randNumber);
  Serial.print(";");
  randNumber = random(300,800);
  Serial.print(randNumber);
  Serial.print(";");
  Serial.print(sensorValue);
  delay(2000);
}
