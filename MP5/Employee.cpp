#include "Employee.h"

#include <iostream>

using namespace std;

employee::employee() : person()                                 //default constructor
{
	salary = NULL;
	hired = myDate();
}

employee::~employee()                                  //destructor
{
}

employee::employee(const employee& s) : person(s)              //copy constructor
{
	*this = s;
}

employee& employee::operator=(const employee& s)      //= operator assignement
{
	salary = s.salary;
	hired = s.hired;

	return *this;
}

employee::employee(long int s, myDate h) : person()         //constructor when given salary and hire date
{
	salary = s;
	hired = h;
}

void employee::input()                                  //input for employee
{
	person::input();                                    //every employee is a person and will have person inputs
	cout << "Enter Salary: ";
	cin >> salary;
	cout << "Enter hire date: ";
	hired.input();                                      //using the myDate class to gather a date
}

void employee::print() const                           //printing out the employee / person / date info
{
	cout << "Salary is: " << salary << endl;
	cout << "Hire date: ";
	hired.print();
	person::print();
}