int pushbutton = 2; 
int led = 13; 
bool estadoled = 0; 

void setup()
{
  pinMode(pushbutton, INPUT_PULLUP); 
  pinMode(led, OUTPUT);
}

void loop()
{
  if (digitalRead(pushbutton) == LOW)
  {
    estadoled = !estadoled; 
    digitalWrite(led, estadoled);
    while (digitalRead(pushbutton) == LOW);
    delay(100);
  }
}
