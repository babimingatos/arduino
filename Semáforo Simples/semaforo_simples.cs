void setup() {
pinMode (11, OUTPUT);
pinMode (12, OUTPUT);
pinMode(13, OUTPUT);
}

void loop(){
digitalWrite (11, HIGH);
digitalWrite (12, LOW);
digitalWrite (13, LOW);
delay (7000);

digitalWrite (12, HIGH);
digitalWrite (11, LOW);
digitalWrite(13, LOW);
delay (3000);

digitalWrite (13, HIGH);
digitalWrite (12, LOW);
digitalWrite (11, LOW);
delay(7000);
}
