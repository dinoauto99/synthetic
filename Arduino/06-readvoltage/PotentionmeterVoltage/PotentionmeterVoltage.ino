int Pot=A0;
void setup() {
  // put your setup code here, to run once:
  pinMode(Pot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.begin(9600);
  ReadVoltage();
  
  delay(50);
}

void ReadVoltage(){
  int readValue = analogRead(Pot);
  float vol=readValue * 5.0 / 1023;
  Serial.println((String)vol+" V");
}

void ReadByMap(){
  int readValue = analogRead(Pot);
  float vol=map(readValue, 0, 1023, 0.0, 5.0);// return int
  Serial.println((String)vol+" V");
}

void ReadByReference(){
  analogReference(DEFAULT);
  // Serial.println(vol);
}
