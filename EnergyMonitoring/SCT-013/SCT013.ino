#include "EmonLib.h"
#include <stdio.h>

EnergyMonitor SCT013;
EnergyMonitor ZMPT101B; // Cria uma instância de monitor de energia

int pinSCT = 36;   //Pino analógico conectado ao SCT-013
int pinZMPT = 39;   //Pino analógico conectado ao SCT-013

float potencia;
char str[20];

void setup()
{

  Serial.begin(115200);
  SCT013.current(pinSCT, 7.0606);
  ZMPT101B.voltage(pinZMPT, 0.5, 0); // Configura a entrada do sensor de tensão no pino 35 (modifique conforme necessário), 234.26 é a calibração e 1.7 é o fator de fase
}

void loop()
{
    double Irms = SCT013.calcIrms(1480);   // Calcula o valor da Corrente
    double Vrms = ZMPT101B.Vrms; // Obtém a tensão RMS

    ZMPT101B.calcVI(20,2000); // Calcula a tensão e corrente (20 ciclos de medição, intervalo de tempo de 2000ms)


    Serial.print("Tensão RMS: ");
    Serial.print(Vrms);
    Serial.println(" V");    
    
    potencia = Irms * Vrms;          // Calcula o valor da Potencia Instantanea    
    Serial.print("Corrente = ");
    Serial.print(Irms);
    Serial.println("A");
    
    Serial.print("Potencia = ");
    Serial.print(potencia);
    Serial.println(" W");
   
    delay(500);
    Serial.print(".");
    delay(500);
    Serial.print(".");
    delay(500);
    Serial.println(".");
    delay(500);

}