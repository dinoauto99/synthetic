int button=2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // pinMode(button, INPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int btnStatus=digitalRead(button);
  digitalWrite(LED_BUILTIN, btnStatus);
  Serial.println(btnStatus);
  delay(200);
}
