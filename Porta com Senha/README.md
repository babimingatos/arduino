


# Descrição do circuito- Porta com senha

&emsp; Neste circuito, um Teclado Matricial (Keypad) 4x4, junto com um LED e um monitor LCD, vai ser utilizado em um circuito aliado a um monitor LCD para fazer uma porta com senha.


## Materiais
```sh

● 1 Protoboard
● 1 keypad 4x4
● 1 microservo
● 23 jumpers
● 1 LED verde
● 1 LED vermelho
● 1 motor SM-S2309S

```
## Montagem
</br>&emsp; Para se montar o circuito, como é mostrado na Figura 1, é preciso, primeiramente, conectar os pinos do teclado matricial no Arduino, sendo cada um nos pinos digitais 8, 7, 6, TX, 5, 4, 3 e RX respectivamente. Depois, deve-se conectar os pinos dos LEDs verde e vermelho no Arduino, sendo os seus ânodos nos pinos de controle 12 e 13 respectivamente, e seus catodos em entradas GND. Por fim, deve-se conectar os pinos do micro servo no Arduino, com o pino mais a direita numa entrada GND, o do meio no pino de controle 11 e o pino da esquerda numa entrada 5V.

<div align="center">
<img src="https://user-images.githubusercontent.com/72284498/194449192-27e91760-0122-4763-b2f8-7308d608249e.png" width=50%>
</div>

## Descrição do código

&emsp; Nno programa primeiramente inclui-se as bibliotecas keypad e servo, que têm comandos específicos para o teclado matricial e para o micro servo respectivamente. Depois, declaram se as variáveis…
</br>&emsp; Após isto, na função setup, as variáveis ledVermelho e ledVerde tem seus pinos declarados como saída, o pino 11 é declarado como o de controle do servo motor, e a fechadura é declarada como trancada inicialmente.
</br>&emsp; Depois, na função loop, o programa diz, primeiramente, que, se os botões * ou # forem apertados, a posição de leitura é definida para iniciar em 0 e a fechadura continua trancada. Depois, ele diz que, se o número digitado for correto, o teclado matricial vai pular para a próxima posição, e se todos os três forem apertados corretamente em sequência, o micro servo destranca a fechadura, e por fim coloca-se um atraso de 100ms.
</br>&emsp; Finalmente, na função setLocked, o micro servo é definido para trancar a fechadura se receber um valor booleano true, e para destrancá-la ser receber um valor false.
