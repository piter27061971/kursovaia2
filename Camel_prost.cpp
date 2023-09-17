#include "Camel_prost.h"
Camel_prost::Camel_prost()
{
    skorost=10;
	otdih1=5;
	otdih2=8;
	t_bes_otdiha=30;
	name="Верблюд";
	nazvan_gonki="наземные";
};
double Camel_prost::t_gonki(double rast_gonki)
{
	otvet= rast_gonki / skorost;
	vrem = otvet/ t_bes_otdiha;
	kol_otdiha = vrem;
	if (vrem>2) otvet += (kol_otdiha - 1) * otdih2;
	if (vrem>1) otvet+= otdih1;
	return otvet;
};
