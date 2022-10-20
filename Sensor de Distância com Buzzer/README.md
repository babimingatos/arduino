# Sensor de Distância com Buzzer

Neste circuito, será montado um sensor para estacionamento, usando o Sensor Ultrassônico HC-SR04, cujo estado será monitorado no monitor serial, e que será utilizado para detectar a distância do automóvel para a parede, e o Buzzer, que emitirá um sinal sonoro caso a distância detectada seja menor do que determinado valor.

## Materiais
```sh
• 1 Protoboard
• 1 Sensor Ultrassônico HC-SR04
• 6 jumpers
• 1 Buzzer
```

## Montagem

Para se montar o circuito, como é mostrado na Figura 1, é preciso, primeiramente, conectar os pinos do sensor de distância no Arduíno: o Vcc na entrada de 5V, o Trigger em uma entrada de controle digital, o Echo em outra de controle digital e o GND na entrada de mesmo nome. Por fim, é preciso conectar um pino de controle no anodo do Buzzer, e seu catodo em uma entrada GND.

## Descrição do código

<html>
<p>O programa primeiramente indica ao Arduino que serão utilizados comandos da biblioteca Ultrasonic, que deve ser instalada separadamente à IDE do Arduino. Depois, os pinos comutadores do sensor ultrassônico são numerados, com o pino 12 sendo o de trigger e o 11 sendo o de echo, e o sensor ultrassônico é inicializado nestas condições.</p>
<p>Depois, na função de setup, a taxa de transferência de dados é definida como 9600 bits por segundo, e é imprimida uma mensagem no monitor serial dizendo "Lendo dados do sensor".</p>
<p>Finalmente, na função loop, são, inicialmente, declaradas três variáveis, uma float para a leitura da distância recebida pelo sensor em centímetros, outra float para a mesma função em polegadas, e uma long microsec, que recebe o valor de timing do sensor ultrassônico. Depois, são executados dois comandos: um que guarda a distância em centímetros na variável cmMsec, e outra que faz o mesmo em polegadas na variavel inMsec, a cada tempo definido no microsec. Por fim, estas informações são mostradas no monitor serial, precedidas pelas frases "Distância em cm: " e " - Distância em polegadas: " respectivamente, e o programa é finalizado com uma instrução de atraso de 1000 milissegundos.</p>
</html>
