#pragma once
#include "Student.h"
#include "degree.h"
#include<iostream>
using namespace std;

class Roster {
public:
	Student* classRosterArray[5];
	void parse(string data);
	void add(string StudentID,
			 string StudentFName,
			 string StudentLName,
			 string StudentEmail,
			 int     StudentAge,
			 int     Day1,
	         int     Day2,
		     int     Day3,
			 DegreeType StudentDegreeType);
};