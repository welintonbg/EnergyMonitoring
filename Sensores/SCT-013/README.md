
# Como usar com ESP32 – Sensor de Presença humana

## Descrição:

O sensor SCT013 é um sensor não invasivo utilizado para ler corrente que passa por um fio.


![SensorLD2410B](./SCT013.png)

## Especificações e características:

 - Tensão de operação: 5VDC;

## Datasheet:

[Datasheet LD2410B](https://github.com/welintonbg/EnergyMonitoring/blob/main/Sensores/HLK-LD2410B/datasheetLD2410B.pdf)

## Aplicações:

Projetos com ESP32 ou outras plataformas microcontroladas em que seja necessário fazer a medição de presença humana em um deteminado local

### Pinagem:

| Pino          | Saída      | Pino no ESP32          |
| ------------- | ---------- | ---------------------- |
| ${{\color{Red}\Huge{\textsf{  - \}}}}\$      | 1          |- |
| ${{\color{Gray}\Huge{\textsf{  - \}}}}\$      | 2         |-   |
| ${{\color{Lime}\Huge{\textsf{  - \}}}}\$       | 3         | -      |
| ${{\color{Blue}\Huge{\textsf{  - \}}}}\$        | 4         | -       |


## Bibliotecas:

```bash 
  #include <>
```


