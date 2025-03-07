#pragma once
#include <string>
#include <vector>
#include "Teacher.h"
#include "Student.h"
#include "DatabaseManager.h"

class Subject
{
private:
	std::string name;
	Teacher teacher;
	std::vector<Student> studentList;
	int credits;
	std::string location;
	std::string description;

public:
	Subject(std::string name, Teacher teacher, std::vector<Student> studentList, int credits, std::string location, std::string description, DatabaseManager dbm);
	std::string getName();
	Teacher getTeacher();
	std::vector<Student> getStudentList();
	int getCredits();
	std::string getLocation();
	std::string getDescription();
	void setName(std::string name);
	void setTeacher(Teacher teacher);
	void setStudentList(std::vector<Student> studentList);
	void setCredits(int credits);
	void setLocation(std::string location);
	void setDescription(std::string description);
	void addStudent(Student student);
	void removeStudent(Student student);
	void printSubjects();
};

