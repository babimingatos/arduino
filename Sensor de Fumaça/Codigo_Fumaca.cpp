int Led = 8;

float sensor_gas=A0;

void setup()
{
  Serial.begin(9600);
  pinMode(Led, OUTPUT);
}
void loop()
{
  float sensorValue=analogRead(sensor_gas);
    if(sensorValue>=470){

  digitalWrite(Led, HIGH);
    Serial.print(sensorValue);
      Serial.println("Fumaca DETECTADA!");
      
    }else{
  digitalWrite(Led,LOW);
         Serial.println("Fumaca NÃO DETECTADA!");
      Serial.print(sensorValue);
  delay(1000); // Wait for 1000 millisecond(s)
    }
}
