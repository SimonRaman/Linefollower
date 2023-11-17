#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

int led = 3;

SoftwareSerial Bluetooth(0, 1);
char Data;
void sendData(String transmitData){Bluetooth.println(transmitData);}

void setup()
{
  Serial.begin(9600);
  Bluetooth.begin(9600);
  pinMode(led,OUTPUT);
}

void loop(){
    if(Bluetooth.available())
    {
      Data=Bluetooth.read();
      if(Data==('1'))
      {
        digitalWrite(led,1);
        sendData("Light ON");
        Serial.println("Light ON");
      }
      if(Data==('0'))
      {
        digitalWrite(led,0);
        sendData("Light OFF");
      }
    }
}