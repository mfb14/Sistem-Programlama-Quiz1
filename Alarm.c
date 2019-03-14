#include "Alarm.h"

void alarmSSinirAta(SicaklikSensor *sSensor,float min,float max)
{
	
	sSensor -> min = min;
	sSensor -> max = max;
}
void alarmBSinirAta(BasincSensor *bSensor, float min, float max)
{
	
	bSensor -> min = min;
	bSensor -> max = max;
}
void alarmDenetle(SicaklikSensor *sSensor,BasincSensor *bSensor)
{
	if((sSensor -> sicaklik) <= (sSensor -> min))
	{
		printf("Alarm sicaklik dusuk (%f %c)\n",sSensor -> sicaklik, sSensor -> birim);
	}
	else if((sSensor -> sicaklik) > (sSensor -> max))
	{
		printf("Alarm sicaklik yuksek (%f %c)\n",sSensor -> sicaklik, sSensor -> birim);
	}

	else if((sSensor -> sicaklik) <= (sSensor -> max) && (sSensor -> sicaklik) > (sSensor -> min))
	{
		printf("Sicaklik Normal (%f %c)\n",sSensor -> sicaklik, sSensor -> birim);
	}


	if((bSensor -> basinc) < (bSensor -> min))
	{
		printf("Alarm basinc dusuk (%f %c)\n",bSensor -> basinc, bSensor -> birim);
	}
	else if((bSensor -> basinc) > (bSensor -> max))
	{
		printf("Alarm basinc dusuk (%f %c)\n",bSensor -> basinc, bSensor -> birim);
	}
	else
	{
		printf("Basinc Normal (%f %c)\n",bSensor -> basinc, bSensor -> birim);
	}
	
	
}
