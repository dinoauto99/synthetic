// Long press button to change led status

int button = 2;
int led = 5;

unsigned long waitTime = 500; // Long press wth 500ms

bool ledStatus = 0;

bool lastBtnStatus = 0;
bool btnLongPress = 0;

unsigned long lastChangeTime = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);

  digitalWrite(led, ledStatus);

  Serial.println("Start");
}

void loop() {
  // put your main code here, to run repeatedly:
  bool reading = digitalRead(button);
  if (reading != lastBtnStatus) {
    lastBtnStatus = reading;
    lastChangeTime = millis();

  }
  // Compare current - last change time vs 500 ms
  if (millis() - lastChangeTime > waitTime) {
    btnLongPress = reading;
    lastChangeTime = millis();

  }
  if (btnLongPress) {
    ledStatus = !ledStatus;
    btnLongPress = false;
  }
  digitalWrite(led, ledStatus);
}
