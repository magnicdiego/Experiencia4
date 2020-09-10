/* 
En el siguiente circuito se plantea un puente H
del tipo L293D el cual esta encargado se hacer
girar dos motores en sentidos contrario a la activación
de cada uno de estos correspondientemente.
Ademas este circuito esta siendo alimentado por una
bateria de 5V.
*/ 
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT); //SE DEFINE LA SALIDA DEL MOTOR
  pinMode(9, OUTPUT); //PARA LOS SENTIDOS QUE SE DESEEN GIRAR
  pinMode(13,OUTPUT); //SE DEFINE SALIDA PARA EL PIN13 Y SE ACTIVE
}                     //EL LED QUE TIENE ENTEGRADO DICHO PIN

void CambiaLed(){
  digitalWrite(13,!digitalRead(13)); //SE DEFINE LA LECTURA DEL LED
}

void loop()
{
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH); //SE ACTIVA EL SENTIDO HORARIO
  digitalWrite(8, LOW); //PARA EL GIRO DEL MOTOR
  delay(1000); // GIRA DURANTE 1 SEGUNDO (1000MILISEGUNDOS)
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);//CON ESTA COMBINACION DE COMANDOS
  digitalWrite(8, HIGH);//SE ACTIVA EL FRENO REPERTINO.
  delay(500); // SE FRENA DURANTE UN SEGUNDO.
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH); //SE ACTIVA EL SENTIDO ANTIHORARIO
  digitalWrite(9, LOW);//PARA EL GIRO DEL MOTOR
  delay(1000); // GIRA DURANTE UN SEGUNDO
  CambiaLed();
}