# Descrição do circuito - LED Liga/Desliga

Este projeto consiste no uso do Arduíno para ativar por um segundo e depois desativar pelo mesmo tempo sucessivamente um sinal luminoso, representado por um LED.

Materiais utilizados
 ```sh
●	1 resistor
●	1 LED
●	2 jumpers
●	1 Protoboard
 ```

# Montagem

Como se vê na Figura, que mostra o desenho do circuito feito no TinkerCad, para se montar o circuito é preciso, primeiramente, ligar a porta GND do Arduino no catodo do LED, e depois ligar o resistor com um terminal no anodo deste e o outro na porta do Arduino que será utilizada com um jumper.

 <div align="center">
    <img src="https://user-images.githubusercontent.com/72284498/194405228-27a8d183-cde3-4c6f-aa8f-2c2058256378.png" width=50%>
  </div>

 
# Descrição do código

O código, mostrado na Figura 2, primeiramente define que a porta 13 será utilizada para controlar o LED na aba de setup. Depois, na aba de loop, é definido que o LED ficará ligado por 1000 milisegundos, que equivale a 1 segundo, e desligado por outro segundo, reiniciando o ciclo após isto.
