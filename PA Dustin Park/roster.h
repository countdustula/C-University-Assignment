#include "student.h"
#pragma once
#ifndef roster_h
#define roster_h

class Roster {
public:
	int lastIndex = -1;	
	Student* classRosterArray[5] = {};
	~Roster();
	void parse(std::string data);
	void add(std::string ID, std::string Fname, std::string Lname, std::string Email, int Age, int day1, int day2, int day3, DegreeType DT);
	void printAll();
	void printInvalidEmails();
	void printAverageDays(std::string StudentID);
	void printByDegreeProgram(DegreeType DT); 
	void remove(std::string SID);
};

#endif
