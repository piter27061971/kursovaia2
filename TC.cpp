#include "TC.h";

TC::TC()
{
	ushatnik_gonki = false;
	name = "";
};

std::string TC::get_name()
{
	return this->name;
};
std::string TC::get_nazvan_gonki()
{
	return this->nazvan_gonki;
};
void TC::set_name(std::string name)
{
	this->name = name;
};
void TC::set_nazvan_gonki(std::string nazvan_gonki)
{
	this->nazvan_gonki = nazvan_gonki;
};
void TC::set_ushastnik_gonki(bool ushastnik_gonki)
{
	this->ushatnik_gonki = ushastnik_gonki;
};
bool TC::get_ushastnik_gonki()
{
	return this->ushatnik_gonki;
};
 double TC::t_gonki(double rast_gonki)
{
	return 0;
};