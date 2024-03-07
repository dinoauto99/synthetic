byte button=2;
byte led=5;

int btnPushCount=0;
int btnState=0;
int btnLastState=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  btnState=digitalRead(button);
  if (btnState!=btnLastState){
    if (btnState==HIGH) {
      btnPushCount++;
      Serial.println("Pushing...");
      Serial.print((String)"Count pushing button: "+ btnPushCount);
    }
    else{
      Serial.println("OFF");
    }
  }
  btnLastState=btnState;
  if (btnPushCount % 4 == 0){
    digitalWrite(led,HIGH);
    Serial.println("TURN ON THE LIGHT");
  }
  else{
    digitalWrite(led,LOW);
    Serial.println("TURN OFF THE LIGHT");
  }
}
