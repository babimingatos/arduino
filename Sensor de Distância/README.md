# Sensor de Distância

Neste circuito, o Sensor Ultrassonico HC-SR04, cujo estado é monitorado no monitor serial, foi utilizado para mostrar o conceito de sensor de distância, além dos comandos que podem ser utilizados na biblioteca Ultrasonic do Arduino.

## Materiais
```sh
• 1 protoboard
• 1 sensor ultrassonico HC-SR04
• 6 jumpers
```

## Montagem
Para se montar o circuito, como é mostrado na imagem desta pasta, é preciso conectar os pinos do sensor de distância no Arduíno: o Vcc na entrada de 5V, o Trigger em uma entrada de controle digital, o Echo em outra de controle digital e o GND na entrada de mesmo nome.

## Descrição do circuito

Como se mostra no código desta pasta, o programa primeiramente indica ao Arduino que serão utilizados comandos da biblioteca Ultrasonic, que deve ser instalada separadamente à IDE do Arduino. Depois, os pinos comutadores do sensor ultrassônico são numerados, com o pino 12 sendo o de trigger e o 11 sendo o de echo, e o sensor ultrassônico é inicializado nestas condições.
Depois, na função de setup, a taxa de transferência de dados é definida como 9600 bits por segundo, e é imprimida uma mensagem no monitor serial dizendo "Lendo dados do sensor"
Por fim, na função loop, são, inicialmente, declaradas três variáveis, uma float para a leitura da distância recebida pelo sensor em centímetros, outra float para a mesma função em polegadas, e uma long microsec, que recebe o valor de timing do sensor ultrassônico. Depois, são executados dois comandos: um que guarda a distância em centímetros na variável cmMsec, e outra que faz o mesmo em polegadas na variavel inMsec, a cada tempo definido no microsec. Por fim, estas informações são mostradas no monitor serial, precedidas pelas frases "Distância em cm: " e " - Distância em polegadas: " respectivamente, e o programa é finalizado com uma instrução de atraso de 1000 milissegundos.
