#include "config.h"
#include "comfort_logic.h"

ComfortMode evaluateComfort(float t, float h, AQICategory aqi){
  if(aqi == AQI_HAZARDOUS) return MODE_CRITICAL;
  if(aqi == AQI_POOR) return MODE_AIR_BAD;
  if(t > TEMP_COMFORT_MAX) return MODE_WARM;
  if(h > HUMID_COMFORT_MAX) return MODE_HUMID;
  return MODE_COMFORTABLE;
}

const char* comfortToText(ComfortMode m){
  switch(m){
    case MODE_COMFORTABLE: return "COMFORT";
    case MODE_WARM: return "WARM";
    case MODE_HUMID: return "HUMID";
    case MODE_AIR_BAD: return "AIR_BAD";
    default: return "CRITICAL";
  }
}
