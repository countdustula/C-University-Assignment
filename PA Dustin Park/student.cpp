#include"student.h"

Student::Student() {
	StudentID = 0;
	FirstName = "No name entered.";
	LastName = "No name entered.";
	EmailAddress = "No Email entered.";
	Age = 0;
	ArrayNumDays[0] = 0;
	ArrayNumDays[1] = 0;
	ArrayNumDays[2] = 0;
	DegreeProgram = "No degree program entered.";
}

void Student::SetStudentID(int EnteredID) {
	StudentID = EnteredID;
}

void Student::SetFName(string StudentFName) {
	FirstName = StudentFName;
}

void Student::SetLName(string StudentLName) {
	LastName = StudentLName;
}

void Student::SetEmail(string StudentEmail) {
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
void Student::SetDegreeProgram(string StudentProgram) {
	DegreeProgram = StudentProgram;
}

int Student::GetStudentID() const {
	return StudentID;
}

string Student::GetFname() const {
	return FirstName;
}

string Student::GetLname() const {
	return LastName;
}

string Student::GetEmail() const {
	return EmailAddress;
}

int Student::GetAge() const {
	return Age;
}

int Student::GetArrayNumDays(int x) const {
	return ArrayNumDays[x];
}

string Student::GetDegreeProgram() const {
	return DegreeProgram;
}

string Student::print() {

}
