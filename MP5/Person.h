#pragma once
#include <iostream>
#include "MyDate.h"

using namespace std;

class person
{
private:
	string first;
	string last;
	myDate bday;
	string phone;
	string email;

public:
	person();                                                    //default constructor
	virtual ~person();                                           //destructor
	person(const person& s);                                     //copy constructor
	virtual person& operator = (const person& s);                //= operator assignemnet
	
	person(string f, string l, myDate b, string p, string e);    //construcotr for given all inputs
	 
	virtual void input();                                        //virtual input and print functions
	virtual void print() const = 0;

};
