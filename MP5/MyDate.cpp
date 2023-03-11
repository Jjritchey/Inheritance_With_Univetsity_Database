#include <iostream>
#include "MyDate.h"

using namespace std;

myDate::myDate()                        //default constructor
{
	day = 0;
	month = 0;
	year = 0;
}

myDate::myDate(int d, int m, int y)    //constructor when given year, month and day
{
	year = y;
	month = m;
	day = d;
}

myDate::myDate(const myDate& p)         //copy constructor
{
	*this = p;
}

myDate &myDate::operator=(const myDate& r)   //=operator assignement
{
	day = r.day;
	month = r.month;
	year = r.year;

	return *this;
}

myDate::~myDate()                     //destructor
{
}

void myDate::input()                //gathers date from the user
{
	cout << "Enter Day, Month and Year: ";
	cin >> day >> month >> year;
}

void myDate::print() const          //prints out the date
{
	cout << "The date is: " << day << "/" << month << "/" << year << endl;
}
