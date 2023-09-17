#pragma once
# include "TC_nazemn.h";

class kentavr : public  TC_nazemn
{
public:
    kentavr();
	double t_gonki(double rast_gonki);
	

protected:
	
	double otdih;
	double vrem;
};