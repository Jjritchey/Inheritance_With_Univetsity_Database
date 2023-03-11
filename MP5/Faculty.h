#pragma once
#include <iostream>
#include <vector>
#include "MyDate.h"
#include "Employee.h"

using namespace std;

class faculty : public employee
{
private:
	int room;
	bool tenure;
	vector<myDate> dates;
public:
	faculty();                                   //default constructor
	faculty(int r, bool t, vector<myDate> d);    //constructor when given the room #, tenure and office dates
	faculty(int r, bool t);                      //constructor when given only the tenur and room number
	faculty(int r, bool t, myDate d);            //constructor when given room #, tenure, and a date
	virtual ~faculty();                          //destructor
	faculty& operator = (const faculty& c);      //= operator assignment
	faculty(const faculty& s);                   //copy constructor


	void input();                                //input and print fucntions
	void print() const;
};