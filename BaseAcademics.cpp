#include "BaseAcademics.h"
#include <string>

BaseAcademics::BaseAcademics(std::string ID, std::string firstName, std::string lastName, std::string birthDate) {
	this->ID = ID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->birthDate = birthDate;
}

std::string BaseAcademics::getID() {
	return ID;
}

std::string BaseAcademics::getFirstName() {
	return firstName;
}

std::string BaseAcademics::getLastName() {
	return lastName;
}

std::string BaseAcademics::getBirthDate() {
	return birthDate;
}

void BaseAcademics::setID(std::string ID) {
	this->ID = ID;
}

void BaseAcademics::setFirstName(std::string firstName) {
	this->firstName = firstName;
}

void BaseAcademics::setLastName(std::string lastName) {
	this->lastName = lastName;
}

void BaseAcademics::setBirthDate(std::string birthDate) {
	this->birthDate = birthDate;
}

BaseAcademics::BaseAcademics() {
	this->ID = "";
	this->firstName = "";
	this->lastName = "";
	this->birthDate = "";
}

