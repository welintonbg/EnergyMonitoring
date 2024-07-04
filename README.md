# Sistema de monitoramento de consumo de energia com ESP32 e Sensores:
Projeto de sistemas ubíquos para monitoramento de consumo de energia dentro de um prédio público.

## Descrição:

O projeto apresentado aqui tem como objetivo verificar o consumo de energia em determinado local e verificar a presença de pessoas no mesmo para identificar possíveis desperdícios. Para isso, foram utilizados os sensores de corrente, tensão e presença humana. Os dados foram transmitidos do ESP32 para a nuvem via MQTT e dentro do fluxo do Node-RED, salvos no banco mongoDB e visualizados em tela via dashboard


![arquitetura](./arquitetura.png)

## Especificações e características:

Para o esp 32 foram utilizadas as seguintes bibliotecas:
```
  #include <ld2410.h>
  #include <WiFi.h>
  #include <PubSubClient.h>
  #include <ArduinoJson.h>
  #include "EmonLib.h"
  #include <stdio.h>
```


## Instruções de execuções:

Para executar o projeto localmente, siga estas etapas:

Dentro da pasta ESP32 está os códigos para os dois ESP utilizados e dentro da pasta "NodeRED" está o fluxo utilizado no Node RED.

1. **Pré-requisitos**:
   - Instale a última versão da Arduino IDE a partir do [site oficial](https://www.arduino.cc/en/software).
   - Configure a Arduino IDE para suportar o ESP32 seguindo as instruções disponíveis na [documentação do ESP32](https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html).
   - Instale todas as bibliotecas necessárias mencionadas no arquivo [bibliotecas](./bibliotecas.txt).

2. **Execução da Aplicação**:
   - **Carregar o Código no ESP32**:
     1. Conecte o ESP32 ao seu computador.
     2. Abra o Arduino IDE.
     3. Carregue o código no ESP32.

3. **NODE-RED**
   - Instale localmente o NODE-RED a partir do [site oficial](https://nodered.org/docs/getting-started/local).
   - Exporte o JSON [disponível](https://github.com/welintonbg/EnergyMonitoring/blob/main/NodeRED/flows.json) para dentro do NODE-RED.
   - Configure o [mongoDB](https://www.mongodb.com/) na nuvem conforme documentação. 
