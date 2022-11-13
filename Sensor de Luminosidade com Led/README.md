# Sensor de Luminosidade com LED

Neste projeto será apresentado como o fotoresistor pode ser aplicado em situações práticas como sensor de luminosidade, com o auxílio de um LED, que acenderá caso o nível de luminosidade esteja muito baixo, assim como em um poste.
## Materiais

● 1 Protoboard</br>
● 7 jumpers</br>
● Fotorresistor</br>
● 1 led</br>
● 1 Resistor</br>

## Montagem
Para se montar o circuito, mostrado na Figura, é preciso, primeiramente, conectar os pinos do sensor de luminosidade no Arduino: o ânodo em um pino analógico (no caso, o A0) e o cátodo na entrada GND, com ou sem a ajuda de jumpers. Por fim, deve-se conectar os pinos do LED, com o ânodo em um pino digital (no caso, o pino 13) e o cátodo no GND, também com ou sem a ajuda de jumpers.
<div align="center">
<img src="https://user-images.githubusercontent.com/72284498/201550847-2994d541-9cc4-4941-a011-d45190773eef.png" width=50%>
</div>

## Descrição do Código

Primeiramente, o código, define que o pino conectado na entrada 13 se chama “led”, e que o conectado na entrada A0 se chama “ldr”, além de declarar uma variável inteira denominada luz. Depois, na função setup, o pino denominado “led” é declarado como saída e o denominado “ldr” é declarado como entrada, e o monitor serial é inicializado.
Depois, na função loop, é impresso o valor a variável “luz” no monitor serial, cujo valor será igual ao lido pelo “ldr” e cujos parâmetros são estabelecidos no comando map. Após isso, uma estrutura if else indica para o LED apagar se a leitura realizada 
