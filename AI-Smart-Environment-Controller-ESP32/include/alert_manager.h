#ifndef ALERT_MANAGER_H
#define ALERT_MANAGER_H

#include "aqi_logic.h"

void initAlerts();
void handleAlerts(AQICategory aqi, float t, float h, int airRaw);

#endif
