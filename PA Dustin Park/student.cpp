#include"student.h"

Student::Student() {
	this->StudentID = "No ID.";
	this->FirstName = "No name entered.";
	this->LastName = "No name entered.";
	this->EmailAddress = "No Email entered.";
	this->Age = 0;
	this->ArrayNumDays[0] = 0;
	this->ArrayNumDays[1] = 0;
	this->ArrayNumDays[2] = 0;
	this->DegreeProgram = DegreeType::SOFTWARE;
}

Student::Student(std::string StudentID, std::string FirstName, std::string LastName, std::string EmailAddress, int age, int ArrayNumDays[], DegreeType DegreeProgram) {
	this->StudentID = StudentID;
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->EmailAddress = EmailAddress;
	this->Age = age;
	this->ArrayNumDays[0] = ArrayNumDays[0];
	this->ArrayNumDays[1] = ArrayNumDays[1];
	this->ArrayNumDays[2] = ArrayNumDays[2];
	this->DegreeProgram = DegreeProgram;


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
	std::cout << this->GetAge() << '\t';
	std::cout << '\t';

	std::cout << "{" << this->GetArrayNumDays(0) << ", " << this->GetArrayNumDays(1) << ", " << this->GetArrayNumDays(2) << "}" << '\t';

	std::cout << DegreeString[(int)GetDegreeProgram()] << std::endl;
}




 