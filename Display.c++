/*
Desenvolvedor: Gabriel Cunha
Data: 17/09/26
Curso: Desenvolvimento de Sistemas
Turno: Vespertino
Escola: Etec Itaquera I
Contador de 0 a 9 com display digital
Informações do display de sete segmantos

      a             0 1 2 3 4 5 6 7 8 9
    ******        a 1 0 1 1 0 1 1 1 1 1
  f *    * b      b 1 1 1 1 1 0 0 1 1 1
    *  g *        c 1 1 0 1 1 1 1 1 1 1
    ******        d 1 0 1 1 0 1 1 0 1 1
  e *   * c       e 1 0 1 0 0 0 1 0 1 0
    *    *        f 1 0 0 0 1 1 1 0 1 1
    ******        g 0 0 1 1 1 1 1 0 1 1
      d
*/

/*******Declaração de variáveis globais********/

byte var = 1;
byte var2 = 1;
int tempo = 1000;

/**********************************************/
void setup()
{ 
  Serial.begin(9600);
  
  //Display Unidade
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
  //Display Dezenas
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(13, OUTPUT);
}
void loop()
{
  if(digitalRead(10) and var <11){
  	  var++;
      delay(tempo);
  }
  if(digitalRead(11) and var >0){
  	  var--;
      delay(tempo);
  }
  if(var == 11 and var2 < 11){
  	var = 1;
    var2++;
    delay(tempo);
  }
  if(var == 0 and var2 > 1){
  	var = 10;
    var2--;
    delay(tempo);
  }
  
  
  //Números Unidades
  if(var == 1){
  	digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }
  if(var == 2){
  	digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  if(var == 3){
  	digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }
  if(var == 4){
  	digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }
  if(var == 5){
  	digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  if(var == 6){
  	digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  if(var == 7){
  	digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  if(var == 8){
  	digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  if(var == 9){
  	digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  if(var == 10){
  	digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  //Números Dezenas
  if(var2 == 1){
  	digitalWrite(A0, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, HIGH);
    digitalWrite(A4, HIGH);
    digitalWrite(A5, HIGH);
    digitalWrite(12, LOW);
  }
  if(var2 == 2){
  	digitalWrite(A0, LOW);
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, LOW);
    digitalWrite(A4, LOW);
    digitalWrite(A5, LOW);
    digitalWrite(12, LOW);
  }
  if(var2 == 3){
  	digitalWrite(A0, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A2, LOW);
    digitalWrite(A3, HIGH);
    digitalWrite(A4, HIGH);
    digitalWrite(A5, LOW);
    digitalWrite(12, HIGH);
  }
  if(var2 == 4){
  	digitalWrite(A0, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, HIGH);
    digitalWrite(A4, LOW);
    digitalWrite(A5, LOW);
    digitalWrite(12, HIGH);
  }
  if(var2 == 5){
  	digitalWrite(A0, LOW);
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, LOW);
    digitalWrite(A4, LOW);
    digitalWrite(A5, HIGH);
    digitalWrite(12, HIGH);
  }
  if(var2 == 6){
  	digitalWrite(A0, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, HIGH);
    digitalWrite(A4, LOW);
    digitalWrite(A5, HIGH);
    digitalWrite(12, HIGH);
  }
  if(var2 == 7){
  	digitalWrite(A0, HIGH);
    digitalWrite(A1, LOW);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, HIGH);
    digitalWrite(A4, HIGH);
    digitalWrite(A5, HIGH);
    digitalWrite(12, HIGH);
  }
  if(var2 == 8){
  	digitalWrite(A0, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, LOW);
    digitalWrite(A4, LOW);
    digitalWrite(A5, LOW);
    digitalWrite(12, LOW);
  }
  if(var2 == 9){
  	digitalWrite(A0, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, HIGH);
    digitalWrite(A4, HIGH);
    digitalWrite(A5, HIGH);
    digitalWrite(12, HIGH);
  }
  if(var2 == 10){
  	digitalWrite(A0, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, HIGH);
    digitalWrite(A4, LOW);
    digitalWrite(A5, HIGH);
    digitalWrite(12, HIGH);
  }
  
}
