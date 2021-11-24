#ifndef student_h
#define student_h
#pragma once
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include"degree.h"


class Student {
public:
	Student();
	Student(std::string StudentID, std::string FirstName, std::string LastName, std::string EmailAddress, int age, int ArrayNumDays[], DegreeType DegreeProgram);
	void SetStudentID(std::string EnteredID);
	void SetFName(std::string StudentFName);
	void SetLName(std::string StudentLName);
	void SetEmail(std::string StudentEmail);
	void SetAge(int StudentAge);
	void SetArrayNumDays(int x, int y, int z);
	void SetDegreeProgram(DegreeType DT);
	std::string GetStudentID() const;
	std::string GetFname() const;
	std::string GetLname() const;
	std::string GetEmail() const;
	int GetAge() const;
	int GetArrayNumDays(int x) const;
	DegreeType GetDegreeProgram() const;
	void print();

private: 
	std::string StudentID;
	std::string FirstName;
	std::string LastName;
	std::string EmailAddress;
	int Age;
	int ArrayNumDays[3];
	DegreeType DegreeProgram;

};

#endif