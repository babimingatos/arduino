#include <Keypad.h> 
#include <Servo.h> 

Servo servo_Motor; 
char* password = "123"; //SENHA 
int position = 0;
const byte ROWS = 4; 
const byte COLS = 4; 
char keys[ROWS][COLS] = { 
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}
};

byte rowPins[ROWS] = { 8, 7, 6, 1 }; 
byte colPins[COLS] = { 5, 4, 3, 0 }; 
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

const int ledVermelho = 12; 
const int ledVerde = 13; 

void setup(){
  pinMode(ledVermelho, OUTPUT); 
  pinMode(ledVerde, OUTPUT); 

  servo_Motor.attach(11); 
  setLocked(true); 
}

void loop(){
  char key = keypad.getKey(); //LEITURA DAS TECLAS PRESSIONADAS 
  if (key == '' || key == '#') { //SE A TECLA PRESSIONADA POR IGUAL A CARACTERE "" OU "#", FAZ
      position = 0; //POSIÇÃO DE LEITURA DA TECLA PRESSIONADA INICIA EM 0
      setLocked(true); //FECHADURA TRANCADA
}
if (key == password[position]){ //SE A TECLA PRESSIONADA CORRESPONDER A SEQUÊNCIA DA SENHA, FAZ
      position ++;//PULA PARA A PRÓXIMA POSIÇÃO
}
if (position == 3){ // SE VARIÁVEL FOR IGUAL A 3 FAZ (QUANDO AS TECLAS PRESSIONADAS CHEGAREM A 3 POSIÇÕES, SIGNIFICA QUE A SENHA ESTÁ CORRETA)
      setLocked(false); //FECHADURA DESTRANCADA
}
delay(100);
}
void setLocked(int locked){ 
if (locked){ 
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    servo_Motor.write(0); //POSIÇÃO DO SERVO FICA EM 0º (FECHADURA TRANCADA)
}
else{ 
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVermelho, LOW);
    servo_Motor.write(86);
}
}
