#include "Staff.h"
#include "Employee.h"
#include <iostream>

using namespace std;

staff::staff()                            //defualt constructor
{
	title = "";
}

staff::staff(string t)                   //constructor when givent he title
{
	title = t;
}

staff::staff(const staff& s)             //copy constructor
{
	*this = s;
}

staff::~staff()                        //destructor
{
}

staff &staff::operator=(const staff &s)   //= operator assignment
{
	title = s.title;
	return *this;
}

void staff::input()                     //input for staff, which is also an employee
{
	employee::input();
	cout << "Enter title: ";
	cin >> title;

}

void staff::print() const               //printint out staff info and the employee info
{
	cout << "\n";
	employee::print();
	cout << "Title is: " << title << "\n\n";
	
}