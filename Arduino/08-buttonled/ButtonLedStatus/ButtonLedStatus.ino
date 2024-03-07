byte button=2;
byte led=5;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool btnStatus;
  btnStatus=digitalRead(button);
  digitalWrite(led, btnStatus);

}
