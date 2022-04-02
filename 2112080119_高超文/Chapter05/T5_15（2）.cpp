/*
FileName: T5_15.cpp
Author: ¸ß³¬ÎÄGcwen
E-mail:1007356843@qq.com
Time: Apr 02, 2022
*/
#include <iostream>
#include "5.16.h"
#include <string>
using namespace std;

GradeBook::GradeBook(string name)
	: aCount(0),
	bCount(0),
	cCount(0),
	dCount(0),
	fCount(0)
{
	setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
	if (name.size() <= 25)
		courseName;
	else
	{
		courseName = name.substr(0, 25);
		cerr << "Nmae\"" << name << "\"exceeds maximum lenth(25).\n	" << "Limiting courseName to first 25 characters.\n" << endl;
	}
}

string GradeBook::getCourseName() const
{
	return courseName;
}

void GradeBook::displayMessage()const
{
	cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" << endl;
}
void GradeBook::inputGrades()
{
	char grade=0;
	cout << "Enter the letter grades." << endl << "Enter the EOF character to end input." << endl;
	while((grade = cin.get() )!= EOF)
	{
		switch(grade)
		{
			case 'A':
			case 'a':
				++aCount;
				atotal += 4;
				break;

			case 'B':
			case 'b':
				++bCount;
				btotal += 3;
				break;

			case 'C':
			case 'c':
				++cCount;
				ctotal += 2;
				break;

			case 'D':
			case 'd':
				++dCount;
				dtotal += 1;
				break;

			case 'F':
			case 'f':
				++fCount;
				break;

			case '\n':
			case '\t':
			case ' ':
				break;

			default:
				cout << "Incorrect letter grade entweed." << "Enter a new grade." << endl;
				break;
		}
	}
	total = atotal + btotal + ctotal + dtotal + ftotal;
	counter = aCount + bCount + cCount + dCount + fCount;
}

void GradeBook::displayGradeReport()const
{
	cout << "\n\nNumber of students who received each letter grade:"
		<< "\nA: " << aCount
		<< "\nB: " << bCount
		<< "\nC: " << cCount
		<< "\nD: " << dCount
		<< "\nF: " << fCount
		<< "\naverage: " << total / counter
		<< endl;
}


int main()
{
	GradeBook myGradeBook("CS101 C++ Programming");

	myGradeBook.displayMessage();
	myGradeBook.inputGrades();
	myGradeBook.displayGradeReport();
    return 0;
}
