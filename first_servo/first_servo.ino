#include <Servo.h>

Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(3);
  
  pinMode(3, OUTPUT);
  Serial.print(servo.read());
}

void loop() {
  for (int i(0); i < 180+1; ++i){
    servo.write(i);
    delay(5);
  }
  Serial.print(servo.read());
  
  for (int i(180); i >= 0; --i){
    servo.write(i);
    delay(5);
  }
  Serial.print(servo.read());
  
  //servo.write(0);
  //delay(2000);
  //servo.write(180);
  //delay(2000);
}
