# Sensor de Movimento com Monitor LCD

Neste circuito, o Sensor PIR, junto com o monitor serial, vai ser utilizado em um circuito aliado a um monitor LCD para mostrar o conceito de sensor de movimento aplicado para situações práticas.

## Materiais

```sh
• 1 Protoboard

• 1 Sensor PIR

• 18 jumpers

• 1 monitor LCD
```

## Montagem

Para se montar o circuito, como é mostrado na figura abaixo, é preciso, primeiramente, conectar os pinos do sensor de movimento no Arduino: o mais à esquerda na entrada de controle (no caso, o pino 8), o central, de Vcc, no 5V, e o mais à direita no GND. Depois, deve se conectar os pinos do monitor LCD no Arduino, sendo que: os pinos 1, 5 e 16 em entradas GND; o pino 2 numa entrada de +5V; e os pinos 4, 6, 11, 12, 13 e 14 nas entradas de controle 9, 10, 5, 4, 3 e 2.

<div align="center">
<img src="https://user-images.githubusercontent.com/72284498/201550256-dffcd535-198a-4853-ad44-1c87dbc95457.png" width=50%>
</div>

## Descrição do Circuito

Como se mostra na figura, o programa primeiramente inclui a biblioteca LiquidCrystal, que contém comandos relacionados ao LCD, depois define os pinos de controle utilizados pelo LCD, e então cria uma variável PIR referente ao pino 8.

Após isto, na função setup, é enviado o comando Serial.begin(9600), depois o monitor LCD é inicializado com dimensões 16x2, com o seu cursor começando na posição 0,0, e por fim a porta da variável PIR é definida como entrada.

Depois, na função loop, é declarada uma variável "acionamento", que vai ter o valor lido pelo sensor, e uma estrutura if else que diz para, se movimento for detectado, o LCD limpar a tela, indicar por uma frase que foi detectado movimento, depois é dado um atraso de 100 ms, depois o LCD liga sua tela, e depois de outro atraso de 100 ms o display é limpo novamente, e para se movimento não for detectado, o cursor ser colocado na posição 1,1 e imprimir uma mensagem de que não foi detectado movimento.
