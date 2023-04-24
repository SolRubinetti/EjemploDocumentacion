// Nombre: Sol Rubinetti
// Division: 1D
//En secuencia :
//Tenemos tres botones y tres luces (verde , amarilla y roja)
//Secuencia correcta : 
//al presionar el botón 1 se enciende la luz verde, 
//al presionar el botón 2 se enciende la luz amarilla(solo si esta la verde encendida), 
//al presionar el botón 3 se enciende la luz roja(solo si esta la verde y amarilla encendida),
//Secuencia Incorrecta :
//a)
//al presionar el botón 1 se enciende la luz verde.
//al presionar el botón 3 se apagan todas las luces. 
//b)
//al presionar el botón 1 se enciende la luz verde,
//al presionar el botón 2 se enciende la luz amarilla(solo si esta la verde encendida), al presionar el botón 2 o 1 se apagan todas las luces. 

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