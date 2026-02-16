#ifndef ACTUATOR_CONTROL_H
#define ACTUATOR_CONTROL_H

#include "aqi_logic.h"
#include "comfort_logic.h"

void initActuators();
void setAutoMode(int enabled);
void applyAutomation(ComfortMode mode, AQICategory aqi);

#endif
