#include "Student.h"
#include "Person.h"
#include <iostream>

using namespace std;

student::student() : person()               //defualt constructor
{
	grade = NONE;
	gpa = 0;
}

student::student(gradeClass c, double g) : person()        //constructor when given grade class and gpa
{
	grade = c;
	gpa = g;
}

student::student(const student& s) : person(s)              //copy constructor
{
	*this = s;
}

student &student::operator= (const student& s)     //= operator assignment
{
	grade = s.grade;
	gpa = s.gpa;

	return *this;
}

student::~student()               //destructor
{
}

void student::input()                //input info for students who are also a person
{
	person::input();
	char c;
	cout << "Enter the academic standing (F, S, J, E)";
	cin >> c;
	cout << "Enter GPA: ";
	cin >> gpa;

	switch (c)
	{
	case 'f':
	case 'F':
		grade = Freshmen;
		break;
	case 's':
	case 'S':
		grade = Sophomore;
		break;
	case 'j':
	case 'J':
		grade = Junior;
		break;
	case 'e':
	case 'E':
		grade = Senior;
		break;
	}
}

void student::print() const          //printing out person and student info
{
	cout << "\n";
	person::print();
	cout << "Academic standing: " << grade << endl;
	cout << "GPA is: " << gpa << "\n\n";
	
}