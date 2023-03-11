#include "Person.h"
#include "MyDate.h"

#include <iostream>

using namespace std;

person::person()                   //default constructor
{
	first = "";
	last = "";
	bday = myDate();
	phone = "";
	email = "";
}

person::~person()                 //destructor
{
}

person::person(const person& s)    //copy constructor
{
	*this = s;
}

person& person::operator=(const person& s)   //= operaor assignement
{
	first = s.first;
	last = s.last;
	bday = s.bday;
	phone = s.phone;
	email = s.email;

	return *this;
}

person::person(string f, string l, myDate b, string p, string e)   //constructor when given the name, bday, phone and email address
{
	first = f;
	last = l;
	bday = b;
	phone = p;
	email = e;
}

void person::input()                                 //every person in the university will have to enter these inputs
{
	cout << "Enter first name: ";
	cin >> first;
	cout << "Enter last name: ";
	cin >> last;
	cout << "Enter birthday: ";
	bday.input();
	cout << "Enter phone number: ";
	cin >> phone;
	cout << "Enter email address: ";
	cin >> email;
}

void person::print() const                       //function to print out the input info for every person
{
	cout << "Name: " << first << " " << last << endl;
	cout << "Birthday: ";
	bday.print();
	cout << "Phone #: " << phone << endl;
	cout << "Email address: " << email << endl;

}