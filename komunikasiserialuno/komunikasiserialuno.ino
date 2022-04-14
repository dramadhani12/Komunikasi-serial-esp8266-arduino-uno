#include <SoftwareSerial.h>


SoftwareSerial uno(2,3);

void setup() {
  uno.begin(9600);
  Serial.begin(115200);
  
  

}

void loop() {

  int data= 50;
  if
  (uno.available()>0){
  
    uno.write(data);
  }
  Serial.println("Madhun");
  }
