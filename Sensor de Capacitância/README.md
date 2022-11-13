# Sensor de Capacitância

Este projeto consiste no uso do Arduíno para ativar um sinal luminoso com base num sensor capacitivo de toque (representado por um pedaço de papel alumínio anexado a um jumper).

Além de testar o funcionamento do sensor de capacitância, este projeto servirá para aprendizado de como usar os exemplos de códigos prontos do programa do Arduíno, sendo usado o "p13_TouchSensorLamp".

## Materiais

- 2 resistores
- 1 LED
- 5 jumpers
- 1 pedaço de papel alumínio
- 1 Protoboard

## Montagem

Para se montar o circuito deste projeto, é preciso conectar a ponta do jumper que está ligado ao papel-alumínio a um terminal de um resistor cujos dois terminais estão conectados a portas 2 e 4 do Arduino.

Depois, é preciso fazer a conexão do LED, ligando o seu catodo ao GND do Arduino, e o seu ânodo ao pino 12 do Arduino, com intermédio de um resistor.
<div align="center">
<img src="https://user-images.githubusercontent.com/72284498/201550708-fd10d170-be1c-47e9-9045-bb0c4cd152cc.png" width=50%>
</div>
## Descrição do Código

O programa primeiramente chama a biblioteca com comandos relevantes ao sensor capacitivo, nomeada CapacitiveSensor (que deve ser instalada separadamente à IDE do Arduino. Depois, declara-se que o sensor capacitivo terá como fonte de energia o pino 4, e o pino 2 como o de controle, que o threshold (nível do sinal que o sensor deve receber para comutar de estado) é 500, e que o pino de alimentação e controle do LED é o 12.

Depois, na função setup, a taxa de transmissão de dados é definida para 9600 bits por segundo, e o pino do LED é definido como OUTPUT, para receber dados.

Por fim, tem a função loop, em que: é definida uma variável que guarda os dados enviados pelo sensor, a fim de que eles sejam mostrados no monitor serial (para monitoração do programa); é colocada uma estrutura condicional, que diz para o Arduino acender o LED quando o valor de entrada no sensor for maior do que o threshold, e deixar apagado quando não estiver; e é colocado um atraso de 10 segundos.

