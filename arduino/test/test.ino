void setup() {

  pinMode(13, OUTPUT); //13番ピンを出力に設定

}

void loop() {

  digitalWrite(13, HIGH); //5vを出力してピンをオンにする LEDライトをオン
  delay(1000); //1秒まつ
  digitalWrite(13, LOW); //0vにしてピンをオフにする LEDライトをオフ
  delay(1000);

}
