void setup(){
Serial.begin(9600);
}

void loop(){
int valor=analogRead(A0);
Serial.print(“Luz: ”);
Serial.print(“Valor: ”);
Serial.print(“\n ”);
delay(100);
}
