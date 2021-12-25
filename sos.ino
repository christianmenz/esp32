byte RGB_BLUE = 0;
byte RGB_GREEN = 2;
byte RGB_RED = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(27, OUTPUT);
  digitalWrite(27, LOW); 

}

void loop() {
  shorter();
  shorter();
  shorter();
  longer();
  longer();
  longer();
  shorter();
  shorter();
  shorter();
  delay(2000);  
}

void shorter() {
  digitalWrite(27, HIGH);
  delay(250);
  digitalWrite(27, LOW);  
  delay(500);
}

void longer() {
  digitalWrite(27, HIGH);
  delay(1000);
  digitalWrite(27, LOW);  
  delay(500);
}
