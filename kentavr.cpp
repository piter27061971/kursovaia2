#include "kentavr.h"
kentavr::kentavr()
{
	skorost = 15;
	otdih = 2;
	t_bes_otdiha = 8;
	set_name("Кентавр");
	set_nazvan_gonki("наземные");
};
double kentavr::t_gonki(double rast_gonki)
{
	
	otvet = rast_gonki / skorost;
	vrem = otvet / t_bes_otdiha;
	kol_otdiha = vrem;
	if (vrem>1) otvet += (kol_otdiha ) * otdih;
	return otvet;
};
