#pragma once
#include "student.h"
#ifndef roster_h
#define roster_h





class Roster {
public:
	int i = -1;
	Student* classRosterArray[5];
	void parse(std::string data);
};

#endif
