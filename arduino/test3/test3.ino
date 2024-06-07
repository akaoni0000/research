int tct = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(6, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tct = digitalRead(6); //6番ピンの値を読み取る HIGHかLOW

  if (tct == HIGH) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
}
