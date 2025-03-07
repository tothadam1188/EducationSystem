#include "Teacher.h"

Teacher::Teacher()
{
	this->department = "";
	this->title = "";
}

Teacher::Teacher(std::string ID, std::string firstName, std::string lastName, std::string birthDate, std::string department, std::string title)
{
	this->setID(ID);
	this->setFirstName(firstName);
	this->setLastName(lastName);
	this->setBirthDate(birthDate);
	this->department = department;
	this->title = title;
}

std::string Teacher::getDepartment()
{
	return department;
}

std::string Teacher::getTitle()
{
	return title;
}

void Teacher::setDepartment(std::string department)
{
	this->department = department;
}

void Teacher::setTitle(std::string title)
{
	this->title = title;
}