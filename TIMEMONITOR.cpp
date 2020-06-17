#include "TIMEMONITOR.h"

AVRTimeMonitor AVRTIMEMONITOR;

//IMPRIME NA SERIAL O TEMPO TOTAL DO CICLO DE MAQUINA
void AVRTimeMonitor::MeasuringTime(boolean State) {
  if (!State)return;
  float AVRTotalTime;
  if (EndTime == 0)EndTime = micros();
  AVRTotalTime = EndTime - StartTime;
  Serial.print("Tempo de execução do Ciclo de Maquina:");
  Serial.print(AVRTotalTime / 1000, 10);
  Serial.print("\n");
  StartTime    = micros();
  EndTime      = 0;
}
