#pragma once
# include "TC_nazemn.h";

class boots : public  TC_nazemn
{
public:
	double t_gonki(double rast_gonki);
	boots();

protected:
	double otdih1;
	double otdih2;
	double vrem;
};
