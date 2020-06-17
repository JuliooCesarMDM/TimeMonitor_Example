#ifndef TIMEMONITOR_h
#define TIMEMONITOR_h

#include "Arduino.h"

class AVRTimeMonitor
{
  public:
    enum {PERFORMANCE_START = 0, PERFORMANCE_FINISH};
    void     MeasuringTime(boolean State);
  private:
    uint32_t StartTime;
    uint32_t EndTime;
};
extern AVRTimeMonitor AVRTIMEMONITOR;
#endif
