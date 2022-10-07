
# Descrição do circuito- Controlador de ambiente

&emsp; Este projeto consiste no uso do Arduíno para ativar um sinal luminoso, representado por um LED, por meio da ativação de um botão Push Button, e, consequentemente, para desativar o LED quando o botão está em estado de repouso.


## Materiais
```sh
●	 1 resistor
●	 1 LED
●	 1 botão Push Button
●	 4 jumpers
●	 1 Protoboard


```
## Montagem
&emsp; Para montar este circuito, como é mostrado na Figura 1, é preciso, primeiramente, ligar o pino de 5V do Arduino no terminal “+” do Protoboard, e o pino de GND no terminal “-”. Depois, deve-se conectar um jumper entre o terminal “+” e o terminal no qual está um dos pinos do Push Button do Protoboard. E, por fim, deve-se conectar, em outro terminal do botão, o pino 7 do Arduino, e um pino de um resistor, cuja outra ponta será conectada, por meio de um jumper, ao terminal “-” do Protoboard.

<div align="center">
<img src="https://user-images.githubusercontent.com/72284498/194452194-4be51c95-713b-4d08-8f32-a58dce85ed14.png" width=50%>
</div>

## Descrição do código
&emsp; Como é mostrado, as primeiras instruções, antes da função setup, declaram as variáveis inteiras “pushbutton”, que tem o valor de 2 para determinar que a porta deste número será utilizada para o controle do botão, e led, que tem o valor de 13 para indicar que o sinal luminoso está na porta deste número, e a variável booleana estadoled, que tem valor 0 inicialmente e serve para controlar o estado do sinal luminoso (aceso ou apagado).
</br>&emsp; Já na função setup, a variável pushbutton (que representa a porta 2) é definida como entrada, e a variável led (que representa a porta 13) é definida como saída. Por fim, na função loop, é colocada uma função condicional “if” para que, se o botão for apertado, o estado do LED seja invertido (o que acenderá o LED), o que será mantido até 100 milisegundos depois do botão não estar mais apertado.

