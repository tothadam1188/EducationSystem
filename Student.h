#pragma once
#include "BaseAcademics.h"
#include <string>

class Student : public BaseAcademics
{
private:
	std::string major;
	int semester;
	double GPA;
	int currentCredits;
	bool isActiveSemester;

public:
	Student();
	Student(std::string ID, std::string firstName, std::string lastName, std::string birthDate, std::string major, int semester, double GPA, int currentCredits, bool isActiveSemester);
	std::string getMajor();
	int getSemester();
	double getGPA();
	int getCurrentCredits();
	bool getIsActiveSemester();
	void setMajor(std::string major);
	void setSemester(int semester);
	void setGPA(double GPA);
	void setCurrentCredits(int currentCredits);
	void setIsActiveSemester(bool isActiveSemester);
	int calculateGPA();
};

