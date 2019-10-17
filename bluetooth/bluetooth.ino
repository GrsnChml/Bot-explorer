#include <SoftwareSerial.h>

SoftwareSerial BTserial(0, 1); // RX | TX

int sensorPin = A0;

int sensorValue = 0;

void setup() {

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

  Serial.print("1234");
  Serial.print(",");
  Serial.print("1234.0");
  Serial.print(",");
  Serial.print("1234 hPa");
  Serial.print(",");
  Serial.print("500 ml/s");
  Serial.print(",");
  Serial.print(sensorValue);  
  Serial.print(";");
  delay(20);

}
