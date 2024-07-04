# Sistema de monitoramento de consumo de energia com ESP32 e Sensores:
Projeto de sistemas ubíquos para monitoramento de consumo de energia dentro de um prédio público.

## Descrição:

O projeto apresentado aqui tem como objetivo verificar o consumo de energia em determinado local e verificar a presença de pessoas no mesmo para identificar possíveis desperdícios. Para isso, foram utilizados os sensores de corrente, tensão e presença humana. Os dados foram transmitidos do ESP32 para a nuvem via MQTT e dentro do fluxo do Node-RED, salvos no banco mongoDB e visualizados em tela via dashboard

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

1. **Pré-requisitos**:
   - Instale a última versão da Arduino IDE a partir do [site oficial](https://www.arduino.cc/en/software).
   - Configure a Arduino IDE para suportar o ESP32 seguindo as instruções disponíveis na [documentação do ESP32](https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html).

2. **Execução da Aplicação**:
   - **Carregar o Código no ESP32**:
     1. Conecte o ESP32 ao seu computador.
     2. Abra o Arduino IDE.
     3. Carregue o código no ESP32.