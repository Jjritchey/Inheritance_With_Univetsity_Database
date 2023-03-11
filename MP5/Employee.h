#pragma once

#include <iostream>
#include "person.h"

using namespace std;

class employee : public person
{
private:
	long int salary;
	myDate hired;
public:
	employee();                                     //default constuctor
	virtual ~employee();                            //destructor
	employee(const employee& s);                    //copy constructor
	employee& operator =(const employee& s);        //= operator assignment

	employee(long int s, myDate h);                 //constructor when given salary and date hired
	
	virtual void input();                           //virtual functions for input and printing
	virtual void print() const = 0;

};