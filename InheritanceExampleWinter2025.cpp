// InheritanceExampleWinter2025.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Manager.h"
#include "Employee.h"
using namespace std;
int main()
{
	//Employee e1; // stack side 

	//Manager m1;

	//e1.printEmployeeInfo();

	//m1.printEmployeeInfo();

	Employee* emp1 = new Employee();// creating an object of type Employee on the heap side

	(*emp1).setName("James");

	emp1->setSalary(2000);

	Employee* emp2 = new Employee("1234", "james@yahoo.com", "James", 3000);
	/*delete emp2;
	emp2 = NULL; */

	//delete emp2; 
	//delete emp1;
	// 
	

	Employee* emp3 = emp2; // shallow copy 

	int employeeCount = 3; 
	Employee* employeeList = new Employee[employeeCount];
	string temp;
	for (int i = 0; i < employeeCount; i++)
	{
		
		//employeeList[i].printEmployeeInfo();
		cout << "Please enter the name of the employee:\n";
		cin >> temp;
		

		employeeList[i] = Employee("1234", "james@yahoo.com", temp, 3000);
		//employeeList[i].setName(temp);
	}

	for (int i = 0; i < employeeCount; i++)
	{
		employeeList[i].printEmployeeInfo();
		
	}

	//delete[] employeeList;

	//Employee* empListCopy = employeeList;// shallow copy 

	// Deep copy 
	Employee* empListCopy = new Employee[employeeCount];
	for (int i = 0; i < employeeCount; i++)
	{
		empListCopy[i].setEmail(employeeList[i].getEmail());
		empListCopy[i].setName(employeeList[i].getName());
		empListCopy[i].setID(employeeList[i].getID());
		empListCopy[i].setSalary(employeeList[i].getSalary());

	}


}

