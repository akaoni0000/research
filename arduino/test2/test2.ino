int i = 0; //整数iを0に設定

void setup() {
  pinMode(9, OUTPUT); //9番ピンをoutput
}

void loop() {
  for (i=0; i<255; i++) {
    analogWrite(9, i); //9番ピンにiの強さで出力
    //analogWriteはpwmの信号を出力する関数 pwmとは~がついている番号のこと(3,5,6,9,10,11)
    //この関数は0から255までで引数を設定できる, 数字は光の強さを表す
    delay(10); //10ミリ秒まつ
  }

  for (i=255; i>0; i--) {
    analogWrite(9, i);
    delay(10); //10ミリ秒まつ
  }
}


