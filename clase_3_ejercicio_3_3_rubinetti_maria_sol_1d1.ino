// C++ code
//
int outpin[] = {13, 12, 11, 10};


void setup() {
  int i = 0;
  for (i = 0; i < 8; i++)
    pinMode(outpin[i], OUTPUT);
}

void loop() {
  int i = 0, j = 0;// 
  for (i = 0; i < 256; i++) {
    for (j = 0; j < 8; j++) {
      if ((( i >> j) & 1 ) == 1){
      digitalWrite(outpin[j], HIGH);
      }
      else digitalWrite(outpin[j], LOW);
    }
    delay(600);
  }
}