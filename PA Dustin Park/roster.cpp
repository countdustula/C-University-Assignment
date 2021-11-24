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
	rhs = data.find(",", lhs);

	DegreeType StudentDegree = DegreeType::SOFTWARE;
	 
	if (data.at(lhs) == 'S' && data.at(lhs + 1) == 'E')
		StudentDegree = DegreeType::SECURITY;

	else if (data.at(lhs) == 'S' && data.at(lhs + 1) == 'O')
		StudentDegree = DegreeType::SOFTWARE;

	else if (data.at(lhs) == 'N')
		StudentDegree = DegreeType::NETWORK;

	add(StudentID, Fname, Lname, StudentEmail, StudentAge, day1, day2, day3, StudentDegree);
}

void Roster::add(std::string ID, std::string Fname, std::string Lname, std::string Email, int Age, int day1, int day2, int day3, DegreeType DT) {
	int arr[3] = { day1, day2, day3 };
	classRosterArray[++lastIndex] = new Student(ID, Fname, Lname, Email, Age, arr, DT);

}

void Roster::printAll() {
	for (int i = 0; i <=lastIndex; i++){
		Roster::classRosterArray[i]->print();
	}
	std::cout << std::endl;
}

void Roster::printAverageDays(std::string StudentID){
	for (int i = 0; i <= lastIndex; i++) {
		if (classRosterArray[i]->GetStudentID() == StudentID) {
			int avg = (classRosterArray[i]->GetArrayNumDays(0) + classRosterArray[i]->GetArrayNumDays(1) + classRosterArray[i]->GetArrayNumDays(2)) / 3;
			std::cout << "Student ID: " << StudentID << ", average days in course is: " << avg << std::endl;

		}
			
	
	}
	

}
void Roster::printInvalidEmails() {
	std::cout << "Displaying invalid emails:" << std::endl << std::endl;
	for (int i = 0; i <= lastIndex; i++) {
		classRosterArray[i]->GetEmail();
		if (((classRosterArray[i]->GetEmail()).find("@") == std::string::npos) or ((classRosterArray[i]->GetEmail()).find(".") == std::string::npos) or (classRosterArray[i]->GetEmail().find(" ") != std::string::npos)) {

			std::cout << classRosterArray[i]->GetEmail() << " - is invalid." << std::endl;
		}
	}
	std::cout << std::endl;
	}


void Roster::printByDegreeProgram(DegreeType DT) {
	std::cout << std::endl;
	std::cout << "Showing students in degree program: SOFTWARE" << std::endl << std::endl;
	for (int i = 0; i <= lastIndex; i++) {
		if (DT == classRosterArray[i]->GetDegreeProgram()) {

			classRosterArray[i]->print();
		}
	}
	std::cout << std::endl << std::endl;
}


void Roster::remove(std::string SID) {
	bool success = false;
	for (int i = 0; i <= lastIndex; i++) {
		if ((SID == classRosterArray[i]->GetStudentID()) && (i <= 3)) {
			success = true;
			Student* temp = classRosterArray[i];
			classRosterArray[i] = classRosterArray[4];
			classRosterArray[4] = temp;
			temp = classRosterArray[2];
			classRosterArray[2] = classRosterArray[3];
			classRosterArray[3] = temp;
		}
	}

	if (success) {
		std::cout << "Removing " << SID << ":" << std::endl << std::endl;
	
		lastIndex--;
	}
	else {
		std::cout << std::endl << "The student with ID: " << SID << " was not found." << std::endl;
	}
}

Roster::~Roster() {
	for (int i = 0; i <= 4; i++) {
		delete classRosterArray[i];
	}
	std::cout << "DONE.";
}
