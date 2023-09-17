#pragma once
# include <iostream>

class TC
{

public:
	TC();
	virtual double t_gonki(double rast_gonki);
	std::string get_name();
	std::string get_nazvan_gonki();
	void set_name(std::string name);
	void set_nazvan_gonki(std::string nazvan_gonki);
	void set_ushastnik_gonki(bool ushastnik_gonki);
	bool get_ushastnik_gonki();
protected:
	double otvet;
	double skorost;
	std::string name;
	std::string nazvan_gonki;
	bool ushatnik_gonki;
};