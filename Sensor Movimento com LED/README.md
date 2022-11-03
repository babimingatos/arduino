# Descrição do circuito- Sensor de Movimento com LED

&emsp; Neste circuito, o Sensor PIR, junto com o monitor serial, vai ser utilizado em um circuito aliado a um LED para mostrar o conceito de sensor de movimento aplicado para situações práticas.
## Materiais
```sh

●	1 Protoboard
●	1 Sensor PIR
●	6 jumpers
●	1 LED


```
## Montagem
&emsp; Para se montar o circuito, como é mostrado na Figura 1, é preciso, primeiramente, conectar os pinos do sensor de movimento no Arduino: o mais à esquerda na entrada de controle (no caso, o pino 2), o central, de Vcc, no 5V, e o mais à direita no GND. Depois, deve se conectar o ânodo do LED no pino de controle, e o seu cátodo no GND.
<div align="center">
 
<img src="https://user-images.githubusercontent.com/72284498/199759492-4a044424-ebec-4329-8b2f-5db5aa75168c.png" width=50%>
</div>

## Descrição do código
 &emsp; Como se mostra no código, o programa primeiramente indica ao Arduino que o pino 2 será denominado PIR e que o pino 0 será denominado LED, e, já na função setup, o serial begin é definido como 9600, o pino do PIN é definido como entrada e o pino do LED será definido como saída.
 Depois, na função loop, é declarada uma variável "acionamento", que vai ter o valor lido pelo sensor, e uma estrutura if else que diz para o LED acender se o valor lido for nível lógico alto, e apagar se for baixo.

