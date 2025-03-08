#include "Grade.h"
#include <string>
#include <iostream>

Grade::Grade(std::string subjectID, std::string subjectName, int credit, int gradeNum) {
	this->setSubjectID(subjectID);
	this->setSubjectName(subjectName);
	this->setCredit(credit);
	this->setGradeNum(gradeNum);
}

void Grade::setSubjectID(std::string subjectID)
{
	this->subjectID = subjectID;
}

void Grade::setSubjectName(std::string subjectName)
{
	this->subjectName = subjectName;
}

void Grade::setCredit(int credit)
{
	this->credit = credit;
}

void Grade::setGradeNum(int grade)
{
	this->gradeNum = gradeNum;
}

std::string Grade::getSubjectID()
{
	return std::string();
}

std::string Grade::getSubjectName()
{
	return std::string();
}

int Grade::getCredit()
{
	return 0;
}

int Grade::getGradeNum()
{
	return 0;
}

void Grade::printGrade()
{
	std::cout << "" << std::endl;
}

int Grade::getCredit() const
{
	return credit;
}

int Grade::getGradeNum() const
{
	return gradeNum;
}

