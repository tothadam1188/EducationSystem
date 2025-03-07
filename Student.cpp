#include "Student.h"
#include <string>

Student::Student()
{
	this->major = "";
	this->semester = 0;
	this->GPA = 0;
	this->currentCredits = 0;
	this->isActiveSemester = false;
}

Student::Student(std::string ID, std::string firstName, std::string lastName, std::string birthDate, std::string major, int semester, double GPA, int currentCredits, bool isActiveSemester)
{
	this->setID(ID);
	this->setFirstName(firstName);
	this->setLastName(lastName);
	this->setBirthDate(birthDate);
	this->major = major;
	this->semester = semester;
	this->GPA = GPA;
	this->currentCredits = currentCredits;
	this->isActiveSemester = isActiveSemester;
}

std::string Student::getMajor()
{
	return major;
}

int Student::getSemester()
{
	return semester;
}

double Student::getGPA()
{
	return GPA;
}

int Student::getCurrentCredits()
{
	return currentCredits;
}

bool Student::getIsActiveSemester()
{
	return isActiveSemester;
}

void Student::setMajor(std::string major)
{
	this->major = major;
}

void Student::setSemester(int semester)
{
	this->semester = semester;
}

void Student::setGPA(double GPA)
{
	this->GPA = GPA;
}

void Student::setCurrentCredits(int currentCredits)
{
	this->currentCredits = currentCredits;
}

void Student::setIsActiveSemester(bool isActiveSemester)
{
	this->isActiveSemester = isActiveSemester;
}

int Student::calculateGPA()
{
	int GPA = 0;
	//pass
	return GPA;
}