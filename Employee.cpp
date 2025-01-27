#include "Employee.h"

void Employee::setID(string i)
{
	id = i;
}

string Employee::getID()
{
	return id;
}

void Employee::setEmail(string e)
{
	email = e;
}

string Employee::getEmail()
{
	return email;
}

void Employee::setName(string n)
{
	name = n;
}

string Employee::getName()
{
	return name;
}

void Employee::setSalary(float s)
{
	salary = s;
}

float Employee::getSalary()
{
	return salary;
}

Employee::Employee()
{
	setName("Not provided");
	setEmail("Not provided");
	setID("Not generated yet");
	setSalary(1000.0);
}

Employee::Employee(string i, string e, string n, float s)
{
	setName(n);
	setEmail(e);
	setID(i);
	setSalary(s);
}

void Employee::printEmployeeInfo()
{
	cout << getName() << endl;
	cout << getID() << endl;
	cout << getSalary() << endl;
	cout << getEmail() << endl;
}
