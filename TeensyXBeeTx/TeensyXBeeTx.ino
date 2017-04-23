//Aidan Jenkins
//April 20, 2017

//Sample code for transmitting a broadcast message on XBee
//radios in AT (transparent) mode

//#include <XBee.h>
#include <SoftwareSerial.h>

boolean serialDebug = true;

int sstx = 10; //tx2=10;
int ssrx = 9; //rx2=9

SoftwareSerial ss(ssrx, sstx); //serial comms for xbee and teensy

void setup() {
  // put your setup code here, to run once:
  ss.begin(9600);
  Serial.begin(9600);
}

float xpos = 1.59;
float ypos = 2.82;
void loop() {
  // put your main code here, to run repeatedly:

  //ss.write(j);
  ss.print(xpos);
  ss.print(", ");
  ss.println(ypos);

  if (serialDebug) {
    Serial.print(xpos);
    Serial.print(", ");
    Serial.println(ypos);
  }
  xpos = xpos + 1;
  ypos = ypos + 1;
 
}
