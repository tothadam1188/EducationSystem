#include "Student.h"
#include <string>
#include <vector>
#include "Grade.h"

using namespace std;

Student::Student()
{
	this->major = "";
	this->semester = 0;
	this->currentCredits = 0;
	this->isActiveSemester = false;
}

Student::Student(std::string ID, std::string firstName, std::string lastName, std::string birthDate, std::string major, int semester, int currentCredits, bool isActiveSemester, vector<Grade> gradeList)
{
	this->setID(ID);
	this->setFirstName(firstName);
	this->setLastName(lastName);
	this->setBirthDate(birthDate);
	this->major = major;
	this->semester = semester;
	this->currentCredits = currentCredits;
	this->isActiveSemester = isActiveSemester;
	this->gradeList = gradeList;
	this->GPA = calculateGPA();
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

double Student::calculateGPA()
{  
	int CreditSum = 0;  
	double GradeSum = 0.0;  
	for (const auto& grade : gradeList)  
	{  
		CreditSum += grade.getCredit();
		GradeSum += grade.getGradeNum() * grade.getCredit();  
	}  
	return (CreditSum == 0) ? 0.0 : GradeSum / CreditSum;  
}
