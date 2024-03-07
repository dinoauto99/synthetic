void setup() {
  // put your setup code here, to run once:
  pinMode(13, 0x1);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, 1);
  delay(3000);
  digitalWrite(LED_BUILTIN, 0);
  delay(3000);
}
