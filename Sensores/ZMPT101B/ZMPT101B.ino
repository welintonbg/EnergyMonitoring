#include <EmonLib.h> // Inclua a biblioteca EmonLib

EnergyMonitor emon1; // Cria uma instância de monitor de energia

void setup() {
  Serial.begin(115200); // Inicia a comunicação serial
  emon1.voltage(39, 0.5, 0); // Configura a entrada do sensor de tensão no pino 35 (modifique conforme necessário), 234.26 é a calibração e 1.7 é o fator de fase
}

void loop() {
  emon1.calcVI(20,2000); // Calcula a tensão e corrente (20 ciclos de medição, intervalo de tempo de 2000ms)
  double Vrms = emon1.Vrms; // Obtém a tensão RMS

  Serial.print("Tensão RMS: ");
  Serial.print(Vrms);
  Serial.println(" V");

  delay(1000); // Aguarda 1 segundo antes de fazer a próxima leitura
}