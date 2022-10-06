#include <LiquidCrystal.h>
LiquidCrystal LCD(12,11,5,4,3,2);
int SensorTemp=0;
int PIR=7;
int foto=0;
int buzzer = 8;

void setup() {
    pinMode(PIR,INPUT);   
    pinMode(9,OUTPUT);
    pinMode(buzzer,OUTPUT);
    pinMode(10,OUTPUT);
	LCD.begin(16,2);
	LCD.setCursor(0,1);
	LCD.print("      C     LUZ");
}

void loop() {
	int SensorTensao=analogRead(SensorTemp);
	int acionamento = digitalRead(PIR);
	float Tensao=SensorTensao*5;
	Tensao/=1024;
	float celcius=(Tensao-0.5)*100;
	LCD.setCursor(0,1);
	LCD.print(celcius);
	LCD.setCursor(9,1);
  	LCD.print(analogRead(A3));
 
  if (analogRead(A3)<=256){
      digitalWrite(9,HIGH);
     }else {
      digitalWrite(9,LOW);
   }      
  
 if (analogRead(A3)>768){
     digitalWrite(10,HIGH);
}else {
     digitalWrite(10,LOW); 
  }
  
  if(acionamento==HIGH){
     LCD.setCursor(1,0);
     LCD.print("Alguem");                  
  	 LCD.display();                   	                                              
}else{
    LCD.setCursor(1, 0);
     LCD.print("Ninguem");
  }
 
  if(acionamento==HIGH){ 
     digitalWrite(buzzer,HIGH);
}else{
   digitalWrite(buzzer , LOW);
  }
}

