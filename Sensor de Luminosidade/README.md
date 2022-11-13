# Sensor de Luminosidade
Neste circuito, o componente analógico LDR (Resistor Dependente de Luz), cujo estado será monitorado pelo monitor serial, será utilizado para mostrar o conceito de sensor analógico de luminosidade, cuja saída será mostrada no monitor serial. 

## Materiais

●	1 Protoboard </br>
●	1 LDR (Light Dependent Resistor) </br>
●	5 jumpers </br>

## Montagem
Para se montar o circuito, como é mostrado na Figura, é preciso, primeiramente, conectar os pinos do sensor de luminosidade no Arduíno: o ânodo em um pino analógico (no caso, o A0) e o cátodo na entrada GND, com ou sem a ajuda de jumpers.
<div align="center">
<img src="https://user-images.githubusercontent.com/72284498/201551083-ae06da15-f803-4b57-9e7b-cbf52c994aca.png" width=50%>
</div>

## Descrição do Código

Na função setup há um único comando para inicializar o monitor serial, e, na função loop, é declarada uma variável inteira “valor” para armazenar a leitura analógica momentânea do sensor LDR, que será impressa no monitor serial na frente de “Luz: ”. Por fim, pula-se uma linha no monitor serial para se escrever outro valor em outra linha, e há um atraso de 100ms antes do próximo ciclo.
