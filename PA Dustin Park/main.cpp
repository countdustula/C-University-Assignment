#include <iostream>
#include "student.h"
using namespace std;

int main() {
	
	Student x;


	string studentData[] = {
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Dustin,Park,rockandroll868@gmail.com,20,3,4,5,SOFTWARE",
	};

	cout << "C867-Scripting & Programming: Applications" << endl;
	cout << "Language: C++" << endl;
	cout << "Student ID: 007535477" << endl;
	cout << "Name: Dustin Park" << endl << endl;

	cout << "Displaying all students:" << endl;

	x.print();
}