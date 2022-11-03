void setup(){
  pinMode (8,OUTPUT);
  pinMode (7,OUTPUT);
   pinMode (5,OUTPUT);
}
void loop(){
  digitalWrite(7,HIGH);
  digitalWrite(5,LOW);
  tone(8,262,200);
  delay(200);
  digitalWrite(7,LOW);
  digitalWrite(5,HIGH);
  tone(8,330,200);
  delay(200);}
