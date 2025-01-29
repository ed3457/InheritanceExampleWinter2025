#pragma once
#include "Employee.h"
class Manager : public Employee
{
private: 
	string bu;
	float bonus;

public:

	void setBU(string b);
	string getBU();

	void setBonus(float bn);
	float getBonus();

	Manager();
	Manager(string i, string e, string n, float s, string bu, float bn);

	void printEmployeeInfo();// override 
};

