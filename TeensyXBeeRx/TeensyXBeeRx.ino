//Aidan Jenkins
//April 20, 2017

//Sample code for receiving a broadcast message on XBee 
//radios in AT (transparent) mode

//#include <XBee.h>
#include <SoftwareSerial.h>

//Software serial pins on your microcontroller
int sstx = 10; //tx2=10;
int ssrx = 9; //rx2=9
SoftwareSerial ss(ssrx, sstx); //serial comms for xbee and teensy
//XBee xbee = XBee();

void setup() {
  // put your setup code here, to run once:
  ss.begin(9600); //initialize communication with XBee at 9600 baud, needs to be 9600
  Serial.begin(9600); //optional serial monitoring on your computer
}

string received;
void loop() {
  // put your main code here, to run repeatedly:

  if (ss.available()) {
    received = ss.read();
    Serial.println(received);
  }

}
