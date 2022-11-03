# Sirene

Este projeto consiste no uso do Arduíno para ativar um sinal sonoro (representado por um Buzzer) por meio da função Tone, que emite estes sinais de forma analógica (ou seja, pode ter como saída um valor entre 0 e 255).

## Materiais

```sh
• 1 resistor
• 1 Buzzer
• 2 jumpers
• 1 Protoboard
```
## Montagem

Para se montar este circuito, é preciso apenas ligar o pino negativo do Buzzer em uma porta GND do Arduíno, e o pino positivo em uma porta PWM do Arduíno (no caso, a escolhida foi a 8), com ou sem a ajuda de jumpers ou do Protoboard.

<div align="center">
<img src="https://user-images.githubusercontent.com/72284498/199748841-09f6846a-fec3-47aa-b30d-25aaaa4a01dd.png" width=50%>
</div>
## Descrição do Código

Primeiramente, o código declara três variáveis: a nomeada "frequência", que determinará a intensidade em que o som do Buzzer será representado; a nomeada "tempo", com valor de 10, que representa a quantidade de milissegundos na qual cada intensidade de som do Buzzer será reproduzida; e a nomeada "Pinofalante", com valor de 8, que representa a porta do Arduíno que será utilizada para cumprir a função, somente para especificar melhor qual é a função do pino quando ele for declarado na função setup.
Depois, na função loop, são colocadas duas estruturas "for": a primeira que aumenta gradualmente o som do Buzzer, ativando as frequências de módulo inteiro entre 149 e 1800Hz, por 10ms cada uma, e com um delay de 1ms entre elas; e a segunda que faz a mesma coisa mas de forma decrescente, de forma a reproduzir um som que aumenta e diminui gradualmente, como em uma sirene policial.
