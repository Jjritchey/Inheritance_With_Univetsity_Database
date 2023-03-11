#pragma once
#include <iostream>
#include "Person.h"

using namespace std;

enum gradeClass {NONE, Freshmen, Sophomore, Junior, Senior};     //enum for which class a student is in

class student : public person
{
private:
	gradeClass grade;
	double gpa;

public:
	student();                                //defualt constructor
	student(gradeClass c, double g);          //constructor for when fiven a grade and a gps
	student(const student &s);                //copy constructor
	virtual student &operator=(const student &s);   //= operator constructor
	virtual ~student();                             //destructor

	void input();                                   //input and print functions
	void print() const;
};