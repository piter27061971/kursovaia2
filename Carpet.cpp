# include "Carpet.h";
Carpet::Carpet()
{
	skorost = 10;
	name = "Ковёр-самолёт";
	nazvan_gonki = "воздушные";
};
double Carpet::t_gonki(double rast_gonki)
{
	koef = 5;
	if (rast_gonki < 10000) koef = 10;
	if (rast_gonki < 5000) koef = 3;
	if (rast_gonki < 1000) koef = 0;
	otvet= (rast_gonki *(1-(koef/100)))/skorost;
	return otvet;
};
