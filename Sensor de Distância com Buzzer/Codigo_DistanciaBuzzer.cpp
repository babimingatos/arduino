#include <Ultrasonic.h>    
#include <NewTone.h>    
#define tempo 500   
int frequencia = 2000;   
int Pinofalante = 13;     
int atraso = 1000;  

#define PINO_TRIGGER 2   
#define PINO_ECHO   4   

Ultrasonic ultrasonic(PINO_TRIGGER, PINO_ECHO);   
   
void setup()  
{  
  pinMode(Pinofalante,OUTPUT);   
  Serial.begin(9600);   
}  
   
void loop()  
{  
  float cmMsec, inMsec;  
  long microsec = ultrasonic.timing();   
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);   
    
  if (cmMsec > 80)  
  {  
    atraso = 2000;  
  }  
  else if (cmMsec >50 && cmMsec<80)  
  {  
    atraso = 1500;  
  }  
  else if (cmMsec >30 && cmMsec<50)  
  {  
    atraso = 1200;  
  }  
  else if (cmMsec > 10 && cmMsec < 30)  
  {  
    atraso = 700;  
  }  
  else if (cmMsec < 10)  
  {  
    atraso = 300;  
  }  
     
  Serial.print("Centimetros: ");  
  Serial.print(cmMsec);  
  Serial.print(" Atraso : ");  
  Serial.println(atraso);  

  NewTone(Pinofalante, frequencia, tempo);   
   
  delay(atraso);  
} 
