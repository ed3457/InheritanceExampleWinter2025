#include "Manager.h"

void Manager::setBU(string b)
{
	bu = b;
}

string Manager::getBU()
{
	 return bu;
}

void Manager::setBonus(float bn)
{
	bonus = bn;
}

float Manager::getBonus()
{
	return bonus;
}

Manager::Manager():Employee()
{
	setBU("Not assigned yet");
	setBonus(0);

}

Manager::Manager(string i, string e, string n, float s, string bu, float bn):
	Employee(i,e,n,s)
{
	setBU(bu);
	setBonus(bn);
}

void Manager::printEmployeeInfo()
{
	Employee::printEmployeeInfo();// call the Employee's class version of printEmployeeInfo

	cout << getBU ()<< endl;
	cout << getBonus() << endl;
}
