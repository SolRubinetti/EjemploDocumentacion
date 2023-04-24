// C++ code
// Nombre: Sol Rubinetti
//Ejercicio: 2-3
//Prender un led rojo si la suma de dos variables (hardcodeadas) 
//es menor que 10, uno verde en caso de que sea mayor que 10 
//o todos los leds prendidos en caso contrario.
int primerNumero;
int segundoNumero;
int sumaTotal;
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(A4, OUTPUT);
  primerNumero = 0;
  segundoNumero = 4;
  sumaTotal = primerNumero + segundoNumero;
}

void loop()
{
  if (sumaTotal > 10)
  {
    digitalWrite(A4, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(A4, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  } else 
  {
    if (sumaTotal < 10)
    {
      digitalWrite(4, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(4, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
    } else
    {
      if(sumaTotal == 10)
    {
      digitalWrite(4, HIGH);
      digitalWrite(A4, HIGH);
      delay(1000); // Wait for 1000 millisecond(s)
      digitalWrite(4, LOW);
      digitalWrite(A4, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
    }
    }
  }
}