# Descrição do circuito- Controlador de ambiente

&emsp; Neste circuito, o Sensor (Detector de Gás Inflamável / Fumaça - MQ-2, junto com um LED e um monitor LCD, vai ser utilizado em um circuito aliado a um monitor LCD para mostrar o conceito de sensor de fumaça aplicado para situações práticas.
## Materiais
```sh

●	1 Protoboard
●	1 Sensor MQ-2
●	10 jumpers
●	1 resistor
●	1 LED
●	1 monitor LCD


```
## Montagem
&emsp; Para se montar o circuito, como é mostrado na Figura 1, é preciso, primeiramente, conectar os pinos do sensor de fumaça no Arduino: os três pinos inferiores num terminal 5V, o pino superior direito numa entrada analógica do Arduino (A0), o e os outros dois pinos superiores em entradas GND, sendo o mais à esquerda mediado por um resistor de 4kR. Depois, deve-se conectar os pinos do LED no Arduino, sendo o seu ânodo num pino de controle, e seu catodo no GND.
<div align="center">
<img src="https://github.com/babimingatos/arduino/blob/eaa498868461fbb472b10351034d7a4e109d4554/Sensor%20de%20Fuma%C3%A7a/sensor_de_fuma%C3%A7a.jpg?raw=true" width=50%>
</div>

## Descrição do código
 &emsp;No programa primeiramente declara-se uma variável inteira LED igual a 8, e uma float sensor_gas igual a A0. Após isto, na função setup, é enviado o comando Serial.begin(9600), e o pino da variável LED é declarado como saída.
</br>&emsp; Depois, na função loop, é declarada outra variável float "sensorValue", que vai ter o valor lido pelo sensor, e uma estrutura if else que diz para, se fumaça com nível maior que 470 for detectada, o monitor LCD indicar por uma frase que foi detectada fumaça, junto a seu valor, e acender o LED, e para se fumaça for detectada num valor abaixo de 470, o LED ser apagado, o monitor LCD imprimir, junto ao valor de fumaça detectado, uma mensagem de que pouca fumaça foi detectada, e encerrar o ciclo após um atraso de 1000ms.
