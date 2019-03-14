#include "SensorGuncelleme.h"

void sicaklikGuncelle(SicaklikSensor *sensor,float sicaklik,char birim)
{
	sensor -> sicaklik = sicaklik;
	sensor -> birim = birim;

}
void basincGuncelle(BasincSensor *sensor,float basinc,char birim)
{
	sensor -> basinc = basinc;
	sensor -> birim = birim;
}
