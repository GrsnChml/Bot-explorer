#include <SoftwareSerial.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

SoftwareSerial BTserial(0, 1); // module RX -> TX arduino ***** and module TX -> RX arduino
DHT dht(DHTPIN, DHTTYPE);

int sensorPinLluvia = A0;
int sensorValueLluvia = 0;
const unsigned int TRIG_PIN=3;
const unsigned int ECHO_PIN=4;

void setup()  
{
  BTserial.begin(9600); 
  Serial.begin(9600);
  dht.begin();
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  //dht 11
  float humedad = dht.readHumidity();
  float centigrados = dht.readTemperature();

  //ultrasonico
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  const unsigned long duration= pulseIn(ECHO_PIN, HIGH);
  int distance= duration/29/2;
  
  
  
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

  sensorValueLluvia = analogRead(sensorPinLluvia);
  Serial.print(humedad);
  Serial.print(";");
  Serial.print(centigrados);
  Serial.print(";");
  Serial.print(sensorValueLluvia);
  Serial.print(";");
  Serial.print(distance);
  delay(2000);
}
