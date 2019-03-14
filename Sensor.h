#ifndef SENSOR_H
#define SENSOR_H
#include<stdio.h>
#include<stdlib.h>

typedef struct {

	float sicaklik;
	char birim;
	float min;
	float max;

}SicaklikSensor;

typedef struct
{
	float basinc;
	char birim;
	float min;
	float max;

}BasincSensor;

#endif
