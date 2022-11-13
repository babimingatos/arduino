#define led 13
#define led A0

int luz;
void setup(){
pinMode(led,OUTPUT);
pinMode(ldr,INPUT);
Serial.begin(9600);
}
void loop(){
Serial.println(luz);
luz=analogRead(ldr);
luz=map(luz,0,679,0,400);
if(luz>=460)
{
digital.Write(led,LOW);
}else if(luz<=450){
digital.Write(led,HIGH);
}
}
