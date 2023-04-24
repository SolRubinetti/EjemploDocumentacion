// Nombre: Sol Rubinetti
// Division: 1D
//Realizar un circuito con una led y dos pulsadores 
//(un PULL UP y un PULL DOWN) un botón la apaga y otro 
// la enciende.
//C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int apagar = digitalRead(9);
  int prender = digitalRead(10);
  if (prender == HIGH)
  {
  digitalWrite(12, HIGH);
  } else 
  {
    if (apagar == HIGH)
    {
      digitalWrite(12, LOW);
    }
    
  }
}