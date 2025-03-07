#pragma once
#include <string>
#include "BaseAcademics.h"

class Teacher : public BaseAcademics
{
private:
	std::string department;
	std::string title;

public:
	Teacher();
	Teacher(std::string ID, std::string firstName, std::string lastName, std::string birthDate, std::string department, std::string title);
	std::string getDepartment();
	std::string getTitle();
	void setDepartment(std::string department);
	void setTitle(std::string title);
};

