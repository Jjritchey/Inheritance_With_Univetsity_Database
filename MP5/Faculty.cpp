#include "Faculty.h"
#include "Employee.h"
#include <iostream>

using namespace std;

faculty::faculty() : employee()                   //default construcotr
{
	room = NULL;
	tenure = NULL;
}

faculty::~faculty()                  //destructor
{
}

faculty::faculty(const faculty& s) : employee(s)       //copy constructor
{
	*this = s;
}

faculty& faculty::operator= (const faculty& s)    //=operator assignemnt
{
	room = s.room;
	tenure = s.tenure;
	dates = s.dates;

	return *this;
}

faculty::faculty(int r, bool t, vector<myDate> d) : employee()  //constructor when given room #, tenure and vector of dates
{
	room = r;
	tenure = t;
	dates = d;
}

faculty::faculty(int r, bool t, myDate d) : employee()           //consturctor with a date rather than a vector of dates
{
	room = r;
	tenure = t;
	dates.push_back(d);
}

faculty::faculty(int r, bool t) : employee()                     //constuector without a date or a vector
{
	room = r;
	tenure = t;
}

void faculty::input()                                            //faculty members are employees and employees are persons
{
	char c;
	employee::input();
	cout << "Enter room #: ";
	cin >> room;
	cout << "Enter T/F if tenured: ";
	cin >> c;

	switch (c)
	{
	case 'f':
	case 'F':
		tenure = false;
		break;
	case 't':
	case 'T':
		tenure = true;
		break;
	}
}

void faculty::print() const                         //prints out the faculty / employee / and person info
{
	cout << "\n";
	employee::print();
	cout << "Room # is: " << room << endl;
	cout << "Tenured: ";
	if (tenure == true)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	for (int i = 0; i < dates.size(); i++)
	{
		dates[i].print();
	}
	cout << "\n";
}