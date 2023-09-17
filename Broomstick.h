#pragma once
# include "TC_vozduh.h";

class Broomstick: public TC_vozduh
{
public:
	Broomstick();
	double t_gonki(double rast_gonki);

private:
	
	int vrem;
	
};
