#include"roster.h"


using namespace std;

void Roster::parse(string data) {
	size_t rhs = data.find(",");
	string StudentID = data.substr(0, rhs);

	size_t lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string Fname = data.substr(lhs, rhs - lhs);
	
	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string Lname = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string StudentEmail = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int StudentAge = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int day1 = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int day2 = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int day3 = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;

	DegreeType StudentDegree = DegreeType::SOFTWARE;
	 
	if (data.at(lhs) == 'S' && data.at(lhs + 1) == 'E')
		StudentDegree = DegreeType::SECURITY;

	else if (data.at(lhs) == 'S' && data.at(lhs + 1) == 'S')
		StudentDegree = DegreeType::SOFTWARE;

	else if (data.at(lhs) == 'S')
		StudentDegree = DegreeType::NETWORK;
}



