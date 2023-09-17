# include "Broomstick.h";
Broomstick::Broomstick()
{
	skorost = 20;
	name = "Метла";
	nazvan_gonki = "воздушные";
};
double Broomstick::t_gonki(double rast_gonki)
{
	vrem = rast_gonki / 1000;
	if (vrem >= 100) koef = 100;
	else koef = vrem;
	otvet = (rast_gonki * (1 - (koef / 100))) / skorost;
	return otvet;
};