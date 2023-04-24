// Nombre: Sol Rubinetti
//Ejercicio 1-D
//Encender cada segmento de un 
//display 7 segmentos. Generar la secuencia.
//C++ code
//

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  digitalWrite(4, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  
  
 
}