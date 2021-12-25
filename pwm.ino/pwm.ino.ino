byte RGB_BLUE = 0;
int frequency = 1000;
int resolution = 8;
int channel = 0;
  
void setup() {
  pinMode(RGB_BLUE, OUTPUT);
  digitalWrite(RGB_BLUE, HIGH);
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
  pinMode(4, OUTPUT);
  digitalWrite(4, HIGH);
  ledcSetup(channel, frequency, resolution);
  ledcAttachPin(RGB_BLUE, channel);


}

void loop() {
  for (int d = 255; d >= 0; d -= 5) {
    ledcWrite(channel, d);
    delay(500); 
  }
}
