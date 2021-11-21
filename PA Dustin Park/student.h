#pragma once
#include<iostream>
using namespace std;


class Student {
public:
	Student();
	void SetStudentID(int EnteredID);
	void SetFName(string StudentFName);
	void SetLName(string StudentLName);
	void SetEmail(string StudentEmail);
	void SetAge(int StudentAge);
	void SetArrayNumDays(int x, int y, int z);
	void SetDegreeProgram(string StudentProgram);
	int GetStudentID() const;
	string GetFname() const;
	string GetLname() const;
	string GetEmail() const;
	int GetAge() const;
	int GetArrayNumDays(int x) const;
	string GetDegreeProgram() const;
	string print();

private: 
	int StudentID;
	string FirstName;
	string LastName;
	string EmailAddress;
	int Age;
	int ArrayNumDays[3];
	string DegreeProgram;

};
