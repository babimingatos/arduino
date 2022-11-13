# Descrição do circuito- Sensor de temperatura
Neste circuito, o componente analógico DHT11, cujo estado será monitorado pelo monitor serial, será utilizado para mostrar o conceito de sensor de temperatura, medindo a de um copo de gelo, cuja saída será um sinal luminoso na forma de um LED. 

## Materiais
```sh
●	1 Protoboard
●	1 sensor DHT11
●	5 jumpers
●	1 LED

```
## Montagem
Para se montar o circuito, como é mostrado na figura, é preciso conectar os pinos do sensor de temperatura no Arduino: o pino de controle em um pino analógico (no caso, o A0), o GND na entrada GND, e o Vcc na entrada de 5V, com a ajuda de jumpers com terminais macho e fêmea, à fim de que o sensor fique suspenso para ser colocado no copo de gelo
<div align="center">
<img src="https://user-images.githubusercontent.com/72284498/201550492-e1053d47-32ad-4c7f-b77c-a7063be321ee.png" width=50%>
</div>

## Descrição do código
As primeiras instruções executadas servem para definir os pinos 13 e A0, respectivamente, para serem denominados como "led" e "ldr". Após isso, é declarada uma variável inteira denominada "luz", que será utilizada para analisar a situação do sensor pelo monitor serial, e depois começa a função setup, composta por três linhas de comando: uma que declara o "led" como saída, outra que declara o "ldr" como entrada, e uma para inicializar o monitor serial.
Depois, na função loop, é enviada uma instrução para imprimir a variável luz, que terá o valor lido pelo sensor com a intensidade definida no comando map, e uma instrução para acender o LED apenas quando a intensidade da luminosidade for menor que 460.
