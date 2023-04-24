// Nombre: Sol Rubinetti
// Division: 1D
//Realizar un circuito con dos led y dos pulsadores (un PULL UP y un PULL DOWN)
//Al presionar el botón 1 (mientras lo mantenga presionado)se enciende la luz 1.
//Al presionar el botón 2 (mientras lo mantenga presionado)se enciende la luz 2

//C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int prenderLuzUno = digitalRead(9);
  int prenderLuzDos = digitalRead(10);
  if (prenderLuzUno == HIGH)
  {
  digitalWrite(12, HIGH);
  digitalWrite(7, LOW);
  } else 
  {
    if (prenderLuzDos == HIGH)
    {
      digitalWrite(7, HIGH);
      digitalWrite(12, LOW);
    }
    
  }
}