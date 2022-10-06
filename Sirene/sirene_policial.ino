int frequencia;
int tempo = 10;
int Pinofalante = 8;
void setup() {
  pinMode(Pinofalante, OUTPUT);
}
void loop() {
  for(frequencia = 149;frequencia <= 1800,frequencia++)
  {
    tone(Pinofalante,frequencia,tempo);
    delay(1);
  }
  for(frequencia = 1800;frequencia >= 149,frequencia--)
  {
    tone(Pinofalante,frequencia,tempo);
    delay(1);
  }
}
