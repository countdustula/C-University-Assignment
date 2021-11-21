#include<iostream>
#include"roster.h"
using namespace std;

void Roster::parse(string data) {
	size_t rhs = data.find(",");
	string Fname = data.substr(0, rhs);
	
	size_t lhs = rhs + 1;
	rhs = data.find("," lhs);
	string Lname = data.substr(lhs, rhs - lhs);

}