void setup()
{
  pinMode(0, OUTPUT);//verde
  pinMode(3, OUTPUT);//verde2
  pinMode(1, OUTPUT);//amarelo
  pinMode(5, OUTPUT);//amarelo2
  pinMode(2, OUTPUT);//vermelho
  pinMode(7, OUTPUT);//vermelho2
}
void loop()
{
  digitalWrite(0, HIGH);//verde
  digitalWrite(7, HIGH);//vermelho2
  digitalWrite(1, LOW);//amarelo
  digitalWrite(5, LOW);//amarelo2
  digitalWrite(2, LOW);//vermelho
  digitalWrite(3, LOW);//verde2 
  delay(5000);
  digitalWrite(1, HIGH);//amarelo
  digitalWrite(7, HIGH);//vrmelho2
  digitalWrite(2, LOW);//vermelho
  digitalWrite(5, LOW);//amarelo2
  digitalWrite(0, LOW);//verde
  digitalWrite(3, LOW);//verde2
  delay(2000); 
  digitalWrite(3, HIGH);//verde2
  digitalWrite(7, LOW);//vermelho2
  digitalWrite(2, HIGH);//vermelho
  digitalWrite(1, LOW);//amarelo
  digitalWrite(5, LOW);//amarelo2
  digitalWrite(0, LOW);//verde
  delay(5000);
  digitalWrite(3, LOW);//verde2
  digitalWrite(2, HIGH);//vermelho
  digitalWrite(5, HIGH);//amarelo2
  digitalWrite(7, LOW);//vermelho2
  digitalWrite(1, LOW);//amarelo
  digitalWrite(0, LOW);//verde
  delay(2000); 
}
