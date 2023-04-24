// Nombre: Sol Rubinetti
// Division: 1D
//(primer botón) colocar un botón INPUT_PULLUP, que permita 
// encender una luz por 3 segundos cada vez que se presiona 
// y está apagada. 
//C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(10, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int presiono = digitalRead(10);
  if (presiono == HIGH)
  {
  digitalWrite(12, HIGH);
  delay(500); 
  digitalWrite(12, LOW);
  delay(500); 
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500); 
  digitalWrite(12, LOW);
  delay(500); 
  }
}