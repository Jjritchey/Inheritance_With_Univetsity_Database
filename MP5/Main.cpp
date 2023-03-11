//Justin Ritchey - Machine Problem 5 - 11/5/2020 - Program is meant to make a database of the people in a university. 

#include "Employee.h"
#include "Faculty.h"
#include "MyDate.h"
#include "Person.h"
#include "Staff.h"
#include "Student.h"
#include <iostream>

int main()
{
	staff staf;
	student stu;
	faculty fac;



	stu.input();
	stu.print();

	staf.input();
	staf.print();

	fac.input();
	fac.print();

}