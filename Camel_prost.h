#pragma once
# include "TC_nazemn.h";

class Camel_prost : public  TC_nazemn
{
public:
	double t_gonki(double rast_gonki);
	 Camel_prost();

protected:
	
	double otdih1;
	double otdih2;
	
	double vrem;
};