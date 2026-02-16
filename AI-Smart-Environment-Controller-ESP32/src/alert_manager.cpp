#include <Arduino.h>
#include <BlynkSimpleEsp32.h>
#include "config.h"
#include "alert_manager.h"

static unsigned long lastAlert = 0;

void initAlerts(){}

void handleAlerts(AQICategory aqi, float t, float h, int airRaw){
  if(aqi == AQI_HAZARDOUS){
    unsigned long now = millis();
    if(now - lastAlert > ALERT_COOLDOWN_MS){
      lastAlert = now;
      Blynk.logEvent("critical_air", String("Hazardous air. Raw=") + airRaw);
    }
  }
}
