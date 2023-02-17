void setup() {
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (int i(0); i <= 255; ++i){
    analogWrite(3, i);
    delay(20);
  }
  
  delay(3000);
  
  for (int i(255); i >= 0 ; --i){
    analogWrite(3, i);
    delay(20);
  }

  delay(3000);
}
