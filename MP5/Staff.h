#pragma once
#include <iostream>
#include "Employee.h"

using namespace std;

class staff : public employee
{
private:
	string title;
public: 
	staff();                   //default constructor
	staff(string t);           //constructor when given the title
	virtual ~staff();          //destuctor
	staff(const staff& s);     //copy constructor
	staff& operator=(const staff& s);      //= operator assignment


	void input();               //input and print functions
	void print() const;

};