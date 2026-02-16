#ifndef COMFORT_LOGIC_H
#define COMFORT_LOGIC_H

#include "aqi_logic.h"

enum ComfortMode {
  MODE_COMFORTABLE = 0,
  MODE_WARM,
  MODE_HUMID,
  MODE_AIR_BAD,
  MODE_CRITICAL
};

ComfortMode evaluateComfort(float t, float h, AQICategory aqi);
const char* comfortToText(ComfortMode m);

#endif
