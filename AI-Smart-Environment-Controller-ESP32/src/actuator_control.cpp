#include <Arduino.h>
#include "config.h"
#include "actuator_control.h"

static int autoMode = 1;

void initActuators(){
  pinMode(FAN_RELAY_PIN, OUTPUT);
  digitalWrite(FAN_RELAY_PIN, LOW);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);
}

void setAutoMode(int enabled){
  autoMode = enabled ? 1 : 0;
}

void applyAutomation(ComfortMode mode, AQICategory aqi){
  if(!autoMode) return;

  if(mode == MODE_WARM || mode == MODE_AIR_BAD || mode == MODE_CRITICAL){
    digitalWrite(FAN_RELAY_PIN, HIGH);
  } else {
    digitalWrite(FAN_RELAY_PIN, LOW);
  }

  if(aqi == AQI_HAZARDOUS){
    digitalWrite(BUZZER_PIN, HIGH);
  } else {
    digitalWrite(BUZZER_PIN, LOW);
  }
}
