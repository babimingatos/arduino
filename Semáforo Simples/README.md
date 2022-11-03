# Semáforo Simples

Este projeto consiste no uso do Arduíno para fazer um semáforo simples, que será representado por três LEDs: um vermelho, um amarelo e um verde.

## Materiais

```sh
• 3 resistores
• 1 LED vermelho
• 1 LED amarelo
• 1 LED verde
• 2 jumpers vermelhos
• 2 jumpers amarelos
• 2 jumpers verdes
• 1 jumper de outra cor
• 1 Protoboard
```

## Montagem

Para se montar o circuito é preciso, primeiramente, ligar a porta GND do Arduino no ponto negativo do protoboard, usando o jumper preto. Após isto, deve-se ligar um jumper vermelho, um amarelo e um verde do ponto negativo até um ponto isolado para cada. Depois, deve-se conectar os resistores, partindo cada um de um dos pontos finais dos jumpers até o catodo de cada um dos LEDs respectivos. E, por fim, pode-se conectar o anodo de cada LED a uma porta digital do Arduino, usando um jumper para cada respectiva cor dos LEDs.

<div align="center">
<img src="https://user-images.githubusercontent.com/72284498/199758602-f52a0bd4-6161-4893-86a1-2e66b31a161c.png" width=50%>
</div>
## Descrição do Código

É definido no código primeiramente as portas do Arduino que serão utilizadas para saída no setup, sendo as portas 0, 1 e 2 para, respectivamente, os sinais verde, amarelo e vermelho do semáforo. Depois disto, é iniciado o ciclo dos sinais dos semáforos no loop, começando com o sinal verde por 7 segundos, depois indo para o amarelo por 3 segundos e terminando com o vermelho também durante 7 segundos, reiniciando o ciclo após isto.
