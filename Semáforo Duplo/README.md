# Semáforo Duplo

Este projeto consiste no uso do Arduíno para fazer um semáforo duplo, que será representado por seis LEDs: dois vermelho, dois amarelos e dois verdes, um para cada semáforo.

## Materiais

```sh
• 6 resistores
• 2 LEDs vermelhos
• 2 LEDs amarelos
• 2 LEDs verdes
• 4 jumpers vermelhos
• 4 jumpers amarelos
• 4 jumpers verdes
• 1 jumper preto
• 1 Protoboard
```

## Montagem

Para se montar o circuito é preciso, primeiramente, ligar a porta GND do Arduino no ponto negativo do protoboard, com o jumper preto. Após isto, deve-se conectar dois jumpers vermelhos, amarelos e verdes do ponto negativo até um ponto isolado para cada. Depois, deve-se conectar os resistores, partindo cada um de um dos pontos finais do jumper até o catodo de cada um dos LEDs. E, por fim, pode-se conectar o anodo de cada LED a uma porta digital do Arduino.

<div align="center">
<img src="https://user-images.githubusercontent.com/72284498/199758096-92d53071-9c95-4512-bbd1-fd0fbc4e0e0d.png" width=50%>
</div>
## Descrição do Código

O código primeiramente define as portas do Arduino que serão utilizadas para saída no setup, sendo as portas 0, 1, 2, 3, 5 e 7 para, respectivamente, os sinais verde, amarelo e vermelho do primeiro semáforo e verde, amarelo e vermelho do segundo semáforo. 
Depois disto, é iniciado o ciclo dos sinais dos semáforos no loop, começando com o sinal verde no primeiro e o vermelho no segundo, depois passando para o amarelo no primeiro, depois passando para o vermelho no primeiro e o verde no segundo, e, por fim, passando para o amarelo no segundo, reiniciando o ciclo após esta última instrução.
