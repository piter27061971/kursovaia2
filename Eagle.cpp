# include "Eagle.h";
Eagle::Eagle()
{
	skorost = 8;
	name = "���";
	nazvan_gonki = "���������";
};
double Eagle::t_gonki(double rast_gonki)
{
	koef = 6;
	otvet = (rast_gonki * (1 - (koef / 100))) / skorost;
	return otvet;
};