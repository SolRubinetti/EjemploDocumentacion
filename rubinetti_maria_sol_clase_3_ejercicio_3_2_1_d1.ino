// Nombre: Sol Rubinetti
//Ejercicio 3-2
//Con el display 7 segmentos generar un contador que 
//comience en el valor 0 llegue hasta 9 si pasa el valor 
//9 debe comenzar en 0 
//
int contador = 0;
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
  switch (contador){
    
  case 0:
  // SE FORMA EL 0
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  contador++;
  break;
  case 1:
  // SE FORMA EL 1
  digitalWrite(11, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(4, LOW);
  contador++;
  break;
  case 2:
  // SE FORMA EL 2
  digitalWrite(11, HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(10,LOW);
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  contador++;
  break;
  case 3:
  // SE FORMA EL 3
  digitalWrite(11, HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(10,LOW);
  digitalWrite(8, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  contador++;
  break;
  case 4:
  // SE FORMA EL 4
  digitalWrite(11, HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(9,LOW);
  digitalWrite(8, LOW);
  digitalWrite(4, LOW);
  contador++;
  break;
  case 5:
  // SE FORMA EL 5
  digitalWrite(10, HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  digitalWrite(9,LOW);
  digitalWrite(8, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  contador++;
  break;
  case 6:
  // SE FORMA EL 6
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(4, LOW);
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  contador++;
  break;
  case 7:
  // SE FORMA EL 7
  digitalWrite(11, HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(10,LOW);
  digitalWrite(4, LOW);
  contador++;
  break;
  case 8:
  // SE FORMA EL 8
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(10,LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  contador++;
  break;
  case 9:
  // SE FORMA EL 9
  digitalWrite(11, HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(10,LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  contador = 0;
  break;
  }
}