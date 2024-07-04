
#define RADAR_SERIAL Serial1
#define RADAR_RX_PIN 16
#define RADAR_TX_PIN 17
   

#include <ld2410.h>

ld2410 radar;

uint32_t lastReading = 0;
bool radarConnected = false;
uint32_t presenca;

void setup(void)
{
  Serial.begin(115200);
  RADAR_SERIAL.begin(256000, SERIAL_8N1, RADAR_RX_PIN, RADAR_TX_PIN); //UART for monitoring the radar
  delay(500);
  Serial.print(F("Iniciliazando: "));
  if(radar.begin(RADAR_SERIAL))
  {
    Serial.println(F("OK"));
    Serial.print(F("LD2410 firmware version: "));
    Serial.print(radar.firmware_major_version);
    Serial.print('.');
    Serial.print(radar.firmware_minor_version);
    Serial.print('.');
    Serial.println(radar.firmware_bugfix_version, HEX);
  }
  else
  {
    Serial.println(F("not connected"));
  }
}



uint32_t le_presenca()
{
  radar.read();
  if (radar.isConnected())
  {
    if (radar.presenceDetected())
      presenca = 1;
    {
      if (radar.stationaryTargetDetected())
      {
        Serial.print(F("Stationary target: "));
        Serial.print(radar.stationaryTargetDistance());
        Serial.print(F("cm energy:"));
        Serial.print(radar.stationaryTargetEnergy());
        Serial.print(' ');
      }
      if (radar.movingTargetDetected())
      {
        Serial.print(F("Moving target: "));
        Serial.print(radar.movingTargetDistance());
        Serial.print(F("cm energy:"));
        Serial.print(radar.movingTargetEnergy());
      }
      Serial.println();
    }
  
     else
     {
       presenca = 0;
       Serial.println(F("No target"));
     }
  return presenca;
}
}

void loop(){
  presenca= le_presenca();
  Serial.println(presenca);
}
