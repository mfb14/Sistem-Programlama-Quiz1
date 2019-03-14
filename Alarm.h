#ifndef ALARM_H
#define ALARM_H

#include "SensorGuncelleme.h"
#include "Sensor.h"
void alarmSSinirAta(SicaklikSensor *sSensor,float min,float max);
void alarmBsinirAta(BasincSensor *bSensor, float min, float max);
void alarmDenetle(SicaklikSensor *sSensor,BasincSensor *bSensor);

#endif
