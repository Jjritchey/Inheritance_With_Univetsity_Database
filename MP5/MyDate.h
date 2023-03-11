#pragma once
#include <iostream>
#include <math.h>


using namespace std;

class myDate
{

private:
	int year;
	int month;
	int day;

public:
	myDate();                             //default constructor
	myDate(const myDate& p);              //copy constructor
	myDate(int d, int m, int y);          //constructor when day month year are given

	virtual ~myDate();                    //destructor
	virtual myDate &operator=(const myDate& r);    //= assginment operator    

	void input();                      //functions for gather and printing dates
	void print() const;

};