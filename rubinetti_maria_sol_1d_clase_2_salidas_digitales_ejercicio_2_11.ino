// C++ code
// Nombre: Maria Sol Rubinetti
// Ejercicio: 2-1
//Al ejercicio 1-2 de la clase anterior reemplazar por un 
//led rojo si es par y un led verde si es impar en el enunciado,
//cumpliendo con la misma consigna.

#define PINLED 11
int contador = 0;
//int pinLed = 11;
void setup()
{
  //CON ESTO INDICAMOS QUE ES UNA SALIDA DIGITAL
  pinMode(PINLED, OUTPUT);
  pinMode(A0, OUTPUT);
  Serial.begin(9600);
}

void loop()// funciona como while(true)
{
  
  contador++;
  if (contador % 2 == 0)
  {
    
    digitalWrite(PINLED, HIGH);//1
  	delay(1000); // Wait for 1000 millisecond(s)
  	digitalWrite(PINLED, LOW);//0
  	delay(500); // Wait for 500 millisecond(s)
    digitalWrite(PINLED, HIGH);//1
  	delay(1000); // Wait for 1000 millisecond(s)
  	digitalWrite(PINLED, LOW);//0
  	delay(500); // Wait for 500 millisecond(s)
    digitalWrite(PINLED, HIGH);//1
  	delay(1000); // Wait for 1000 millisecond(s)
  	digitalWrite(PINLED, LOW);//0
  	delay(500); // Wait for 500 millisecond(s)
  } else
  {
    
    digitalWrite(A0, HIGH);//1
  	delay(1000); // Wait for 1000 millisecond(s)
  	digitalWrite(A0, LOW);//0
  	delay(2000); // Wait for 2000 millisecond(s)
  }
  Serial.println(contador); 
}