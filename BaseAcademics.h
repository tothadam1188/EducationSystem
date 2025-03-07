#pragma once
#include <string>

class BaseAcademics
{
private:
	std::string ID;
	std::string firstName;
	std::string lastName;
	std::string birthDate;

public:
	BaseAcademics();
	BaseAcademics(std::string ID, std::string firstName, std::string lastName, std::string birthDate);
	std::string getID();
	std::string getFirstName();
	std::string getLastName();
	std::string getBirthDate();
	void setID(std::string ID);
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setBirthDate(std::string birthDate);
};

