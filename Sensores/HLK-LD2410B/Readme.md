
# Como usar com ESP32 – Sensor de Presença humana

## Descrição:

O sensor LD2410B é utilizado dentro de um ambiente onde se quer monitorar a presença humana em movimento e em repouso.


![SensorLD2410B](./LD2410B.png)

## Especificações e características:

 - Tensão de operação: 5VDC;

## Datasheet:

[Datasheet LD2410B](https://github.com/welintonbg/EnergyMonitoring/blob/main/Sensores/HLK-LD2410B/datasheetLD2410B.pdf)

## Aplicações:

Projetos com ESP32 ou outras plataformas microcontroladas em que seja necessário fazer a medição de presença humana em um deteminado local

### Pinagem:

| Pino          | Saída      | Pino no ESP32          |
| ------------- | ---------- | ---------------------- |
| ${{\color{Red}\Huge{\textsf{  VCC \}}}}\$      | 1          | 5V |
| ${{\color{Gray}\Huge{\textsf{  GND \}}}}\$      | 2         | GND   |
| ${{\color{Lime}\Huge{\textsf{  UART Rx \}}}}\$       | 3         | 16      |
| ${{\color{Blue}\Huge{\textsf{  UART Tx \}}}}\$        | 4         | 17       |


## Bibliotecas:

```bash 
  #include <ld2410.h>
```


