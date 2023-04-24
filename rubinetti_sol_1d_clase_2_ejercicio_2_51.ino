// C++ code
//Nombre: Sol Rubinetti
// Ejercicio: 2-5
//Semáforos enfrentados
//Dos led rojas, dos led verdes, dos led amarillas, 
//Dos semáforos enfrentados.

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(9, HIGH);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(500); // Wait for 1000 millisecond(s)
}