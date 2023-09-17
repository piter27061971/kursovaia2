#include "Camel_skorostn.h"

Camel_skorostn::Camel_skorostn()
{
	skorost = 40;
	otdih1 = 5;
	otdih2 = 6.5;
	otdih_ost = 8;
	t_bes_otdiha = 10;
	set_name("Верблюд-быстроход");
	set_nazvan_gonki("наземные");
};
double Camel_skorostn::t_gonki(double rast_gonki)
{
	
	otvet = rast_gonki / skorost;
	vrem = otvet / t_bes_otdiha;
	kol_otdiha = vrem;
	if (vrem>3) otvet += (kol_otdiha - 2) * otdih_ost;
	if (vrem>2) otvet += otdih2;
	if (vrem >1) otvet += otdih1;
	return otvet;
};