#include <SoftwareSerial.h> 

SoftwareSerial myserial(8, 10); //rx and tx


//BLUETOOTH CONNECTION FOR PRO MICRO/ LEONARDO

void setup() {
  myserial.begin(115200);

}

void loop() {
  if(myserial.available()){
    char c = myserial.read();
    Serial.println(c);
  }

}
