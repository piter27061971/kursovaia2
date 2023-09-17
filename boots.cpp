#include "boots.h"
boots::boots()
{
	skorost = 6;
	otdih1 = 10;
	otdih2 = 5;
	t_bes_otdiha = 60;
	set_name("Ботинки-вездеходы");
	set_nazvan_gonki("наземные");
};
double boots::t_gonki(double rast_gonki)
{

	otvet = rast_gonki / skorost;
	vrem = otvet / t_bes_otdiha;
	kol_otdiha = vrem;
	if (vrem > 2) otvet += (kol_otdiha - 1) * otdih2;
	if (vrem > 1) otvet += otdih1;
	return otvet;
};
