# include "Eagle.h";
Eagle::Eagle()
{
	skorost = 8;
	name = "ќрЄл";
	nazvan_gonki = "воздушные";
};
double Eagle::t_gonki(double rast_gonki)
{
	koef = 6;
	otvet = (rast_gonki * (1 - (koef / 100))) / skorost;
	return otvet;
};