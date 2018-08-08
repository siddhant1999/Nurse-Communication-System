
#include <SoftwareSerial.h>

const byte HC12RxdPin = 2;                  // Recieve Pin on HC12
const byte HC12TxdPin = 1;                  // Transmit Pin on HC12

SoftwareSerial HC12(HC12TxdPin, HC12RxdPin); // Create Software Serial Port


void setup() {                  // Open serial port to computer
  HC12.begin(9600);  
  pinMode(0, INPUT);//button
  pinMode(3, INPUT);//button
  pinMode(4, INPUT);//button
}

void loop() {
  int a = digitalRead(0);
  int b = digitalRead(3);
  int c = digitalRead(4);
  if (a == HIGH){
    HC12.write("0");
  }
  if (b == HIGH){
    HC12.write("3");
  }
  if (c == HIGH){
    HC12.write("4");
  }
  

}
