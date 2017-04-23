#include <XBee.h>
#include <SoftwareSerial.h>

int sstx=10; //tx2=10;
int ssrx=9; //rx2=9

SoftwareSerial ss(ssrx,sstx); //serial comms for xbee and teensy
XBee xbee=XBee();

void setup() {
  // put your setup code here, to run once:
  ss.begin(9600);
  Serial.begin(9600);
}

int j=1;
void loop() {
  // put your main code here, to run repeatedly:
  
  ss.write(j);
  Serial.println(j);
  j=j+1;
  delay(1000);
}
