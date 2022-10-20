# Sirene com Giroflex

Este projeto consiste no uso do Arduíno para ativar um sinal sonoro (representado por um Buzzer) representando uma sirene policial, e de três sinais luminosos (representados por dois LEDS), que representam um giroflex policial).

## Materiais

```sh
• 1 resistor
• 1 Buzzer
• 6 jumpers
• 1 Protoboard
• 1 LED azul
• 1 LED vermelho
```

## Montagem

Para se montar este circuito, é preciso, primeiramente, ligar o pino negativo do Buzzer em uma porta GND do Arduino, e o pino positivo em uma porta PWM do Arduino (no caso, a escolhida foi a 10), com ou sem a ajuda de jumpers ou do Protoboard.
Depois, deve-se ligar os LEDs pelo pino negativo também uma porta GND mas pelo pino positivo a uma porta digital cada (sendo as portas escolhidas 5 e 2), também com ou sem a ajuda dos jumpers e do Protoboard.

## Descrição do código

Primeiramente, o código declara três variáveis: a nomeada "frequência", que determinará a intensidade em que o som do Buzzer será representado; a nomeada "tempo", com valor de 10, que representa a quantidade de milissegundos na qual cada intensidade de som do Buzzer será reproduzida; e a nomeada "Pinofalante", também com valor de 10, mas que representa a porta do Arduino que será utilizada para cumprir a função, somente para especificar melhor qual é a função do pino quando ele for declarado na função setup, junto com a declaração dos pinos digitais dos LEDs azul e vermelho. 
Depois, na função loop, são colocadas duas estruturas "for": a primeira que aumenta gradualmente o som do Buzzer, ativando as frequências de módulo inteiro entre 149 e 1800Hz, por 10ms cada uma, e com um delay de 1ms entre elas, além de ativar o LED azul do giroflex e desativar o vermelho; e a segunda que faz a mesma coisa mas de forma decrescente, de forma a reproduzir um som que aumenta e diminui gradualmente, como em uma sirene policial, além de ativar o LED vermelho do giroflex e desativar o azul.
