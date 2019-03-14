#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "Alarm.h"
#include "SensorGuncelleme.h"
#include "Sensor.h"

int main()
{

	SicaklikSensor sSensor;
	BasincSensor bSensor;
	
	sicaklikGuncelle(&sSensor,25,'C');
	basincGuncelle(&bSensor,5,'b');
/*
	alarmSSinirAta(&sSensor,0,25.0);
	alarmBSinirAta(&bSensor,0,3.5);
*/
	printf("Sicaklik ve Basinc:");
	scanf("%f %f",&sSensor.sicaklik,&bSensor.basinc);
	
	alarmDenetle(&sSensor,&bSensor);

	

}
