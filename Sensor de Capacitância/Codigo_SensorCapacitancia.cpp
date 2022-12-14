int carrega = 4;
int sense = 8;
int ledPin = 13;
unsigned int valor;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(carrega, OUTPUT);
  pinMode(sense, INPUT);

  Serial.begin(9600);
}

void loop() {

  valor = sensorCapacitivo(30);
  
  Serial.println(valor);
  
  if (valor > 50) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(100); 
}

unsigned int sensorCapacitivo(unsigned char amostras) {

  unsigned long sum = 0;
  unsigned long tempo = 0;
  
  for (int i = 0; i < amostras; i++) {
    digitalWrite(carrega, LOW);
    pinMode(sense, OUTPUT);
    digitalWrite(sense, LOW);
    delayMicroseconds(10); 
    pinMode(sense, INPUT);
    digitalWrite(carrega, HIGH);
    while (digitalRead(sense) == LOW) {
      tempo++; // Acumula tempo para atingir nível alto
    }
    sum += tempo;
  }
  return (unsigned int)sum/amostras;
}
