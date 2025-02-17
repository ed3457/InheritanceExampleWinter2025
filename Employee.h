#pragma once
#include <string>
#include <iostream>
using namespace std;
class Employee
{
private: 
	string id;
	string email;
	string name; 
	float salary;

public:
	void setID(string i);
	string getID();

	void setEmail(string e);
	string getEmail();

	void setName(string n);
	string getName();

	void setSalary(float s);
	float getSalary();

	Employee();
	Employee(string i, string e, string n, float s);
	Employee(const Employee& sourceData);

	void printEmployeeInfo();


};

