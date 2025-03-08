#pragma once
#include <string>

class Grade
{
private:
	std::string subjectID;
	std::string subjectName;
	int credit;
	int gradeNum;

public:
	Grade(std::string subjectID, std::string subjectName, int credit, int gradeNum);
	void setSubjectID(std::string subjectID);
	void setSubjectName(std::string subjectName);
	void setCredit(int credit);
	void setGradeNum(int grade);
	std::string getSubjectID();
	std::string getSubjectName();
	int getCredit();
	int getGradeNum();
	void printGrade();
    int getCredit() const;
    int getGradeNum() const;
};

