#include "TIMEMONITOR.h"

/******************************INFO**********************************/
//AUTOR:JULIO CESAR MATIAS
//DESENVOLVIDO OFICIALMENTE PARA A CONTROLADORA DE VOO JCFLIGHT
//DATA:MAIO DE 2020
/********************************************************************/

void setup() {
  Serial.begin(115200);
  Serial.println("AVR Time Monitor\n");
}

void loop() {
  AVRTIMEMONITOR.MeasuringTime(AVRTIMEMONITOR.PERFORMANCE_START);  //INICIO DO LOOP
  delay(555); //CARGA NO LOOP
  AVRTIMEMONITOR.MeasuringTime(AVRTIMEMONITOR.PERFORMANCE_FINISH); //FIM DO LOOP
}
