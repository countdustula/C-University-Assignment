#include"roster.h"


void Roster::parse(std::string data) {
	size_t rhs = data.find(",");
	std::string StudentID = data.substr(0, rhs);

	size_t lhs = rhs + 1;
	rhs = data.find(",", lhs);
	std::string Fname = data.substr(lhs, rhs - lhs);
	
	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	std::string Lname = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	std::string StudentEmail = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int StudentAge = std::stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int day1 = std::stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int day2 = std::stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int day3 = std::stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;

	DegreeType StudentDegree = DegreeType::SOFTWARE;
	 
	if (data.at(lhs) == 'S' && data.at(lhs + 1) == 'E')
		StudentDegree = DegreeType::SECURITY;

	else if (data.at(lhs) == 'S' && data.at(lhs + 1) == 'S')
		StudentDegree = DegreeType::SOFTWARE;

	else if (data.at(lhs) == 'S')
		StudentDegree = DegreeType::NETWORK;

	add(StudentID, Fname, Lname, StudentEmail, StudentAge, day1, day2, day3, StudentDegree);
}

void Roster::add(std::string ID, std::string Fname, std::string Lname, std::string Email, int Age, int day1, int day2, int day3, DegreeType DT) {
	int arr[3] = { day1, day2, day3 };
	classRosterArray[++i] = new Student(ID, Fname, Lname, Email, Age, arr, DT);

}

void Roster::printAll() {
	for (int i = 0; i <= 5; i++);
	Roster::classRosterArray[i]->print();
}

