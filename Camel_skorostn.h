#pragma once
# include "TC_nazemn.h";

class Camel_skorostn : public  TC_nazemn
{
public:
	Camel_skorostn();
	double t_gonki(double rast_gonki);
	

protected:
	
	double otdih1;
	double otdih2;
	double otdih_ost;
	
	double vrem;
};
