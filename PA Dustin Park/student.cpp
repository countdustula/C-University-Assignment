#include"student.h"


Student::Student() {
	StudentID = "No ID.";
	FirstName = "No name entered.";
	LastName = "No name entered.";
	EmailAddress = "No Email entered.";
	Age = 0;
	ArrayNumDays[0] = 0;
	ArrayNumDays[1] = 0;
	ArrayNumDays[2] = 0;
	DegreeProgram = DegreeType::SOFTWARE;
}



void Student::SetStudentID(std::string EnteredID) {
	StudentID = EnteredID;
}

void Student::SetFName(std::string StudentFName) {
	FirstName = StudentFName;
}

void Student::SetLName(std::string StudentLName) {
	LastName = StudentLName;
}

void Student::SetEmail(std::string StudentEmail) {
	EmailAddress = StudentEmail;
}

void Student::SetAge(int StudentAge) {
	Age = StudentAge;
}

void Student::SetArrayNumDays(int x, int y, int z) {
	ArrayNumDays[0] = x;
	ArrayNumDays[1] = y;
	ArrayNumDays[2] = z;
}
void Student::SetDegreeProgram(DegreeType DT) {
	this->DegreeProgram = DT;
}

std::string Student::GetStudentID() const {
	return StudentID;
}

std::string Student::GetFname() const {
	return FirstName;
}

std::string Student::GetLname() const {
	return LastName;
}

std::string Student::GetEmail() const {
	return EmailAddress;
}

int Student::GetAge() const {
	return Age;
}

int Student::GetArrayNumDays(int x) const {
	return ArrayNumDays[x];
}

DegreeType Student::GetDegreeProgram() const {
	return this->DegreeProgram;
}

void Student::print() {
	std::cout << this->GetStudentID() << '\t';
	std::cout << this->GetFname() << '\t';
	std::cout << this->GetLname() << '\t';
	std::cout << this->GetEmail() << '\t';
	std::cout << this->GetAge() << '\t';
	std::cout << this->GetArrayNumDays(0) << '\t';
	std::cout << this->GetArrayNumDays(1) << '\t';
	std::cout << this->GetArrayNumDays(2) << '\t';
}


 