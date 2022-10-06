# Descrição do circuito- LED LIGA/DESLIGA

Este projeto consiste no uso do Arduíno para ativar cinco sinais luminosos, representados por LEDs, ligados em diferentes portas, simultaneamente.

## Materiais
```sh
●	1 resistor
●	5 LEDs
●	11 jumpers
●	1 Protoboard

```
## Montagem

Como se vê na Figura 1, que mostra o desenho do circuito feito no TinkerCad, para se montar o circuito é preciso, primeiramente, ligar o pino GND do Arduino no pino “-” do Protoboard, e conectar este pino ao cátodo dos 5 LEDs, por intermédio de um resistor (e um jumper, se conveniente) para cada um. Por fim, é preciso apenas conectar as portas que serão utilizadas para controlar cada LED ao seu respectivo (no caso, as portas 0, 1, 2, 3 e 4 para os LEDs azul, cinza, amarelo, marrom e vermelho, respectivamente).
<div align="center">
<img src="https://user-images.githubusercontent.com/72284498/194414939-d7c55a9d-2781-4f7a-9fb6-50cc1c19c9da.png" width=50%>
</div>

## Descrição do código

O código, mostrado na Figura 2, primeiramente define que a porta 13 será utilizada para controlar o LED na aba de setup. Depois, na aba de loop, é definido que o LED ficará ligado por 1000 milisegundos, que equivale a 1 segundo, e desligado por outro segundo, reiniciando o ciclo após isto.




