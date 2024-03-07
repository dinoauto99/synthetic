int led = 6;
int brightness = 0;
int fadeAmount = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  PotentionmeterBightness();

  delay(50);
}

void PWMchangeBrightness(){
  analogWrite(led, brightness);
  brightness += fadeAmount;
  if (brightness == 0 || brightness == 255){
    fadeAmount = -fadeAmount;
  }
}

void PotentionmeterBightness(){
  // Serial.begin(9600);
  // int anaValue;
  // anaValue = analogRead(A0);
  int value;
  value = map(analogRead(A0), 0, 1023, 0, 255);
  analogWrite(led, value);
  // Serial.println(value);
}
