#include "Subject.h"
#include <iostream>
#include "DatabaseManager.h"

Subject::Subject(std::string name, Teacher teacher, std::vector<Student> studentList, int credits, std::string location, std::string description, DatabaseManager dbm)
{
	this->name = name;
	this->teacher = teacher;
	this->studentList = studentList;
	this->credits = credits;
	this->location = location;
	this->description = description;
	std::vector<Teacher> teacherDatabase = dbm.getTeacherDatabase();
	auto it = std::find(teacherDatabase.begin(), teacherDatabase.end(), teacher);
	if (it == teacherDatabase.end()) {
		dbm.addTeacher(teacher);
	}

	std::vector<Student> studentDatabase = dbm.getStudentDatabase();
	for (int i = 0; i < studentList.size(); i++)
	{
		auto it = std::find(studentDatabase.begin(), studentDatabase.end(), studentList[i]);
		if (it == studentDatabase.end()) {
			dbm.addStudent(studentList[i]);
		}
	}
}

std::string Subject::getName()
{
	return name;
}

Teacher Subject::getTeacher()
{
	return teacher;
}

std::vector<Student> Subject::getStudentList()
{
	return studentList;
}

int Subject::getCredits()
{
	return credits;
}

std::string Subject::getLocation()
{
	return location;
}

std::string Subject::getDescription()
{
	return description;
}

void Subject::setName(std::string name)
{
	this->name = name;
}

void Subject::setTeacher(Teacher teacher)
{
	this->teacher = teacher;
}

void Subject::setStudentList(std::vector<Student> studentList)
{
	this->studentList = studentList;
}

void Subject::setCredits(int credits)
{
	this->credits = credits;
}

void Subject::setLocation(std::string location)
{
	this->location = location;
}

void Subject::setDescription(std::string description)
{
	this->description = description;
}

void Subject::addStudent(Student student)
{
	studentList.push_back(student);
}

void Subject::removeStudent(Student student)
{
	for (int i = 0; i < studentList.size(); i++)
	{
		if (studentList[i].getID() == student.getID())
		{
			studentList.erase(studentList.begin() + i);
			break;
		}
	}
}

void Subject::printSubjects()
{
	std::cout << "Subject: " << name << std::endl;
	std::cout << "Teacher: " << teacher.getFirstName() << " " << teacher.getLastName() << std::endl;
	std::cout << "Credits: " << credits << std::endl;
	std::cout << "Location: " << location << std::endl;
	std::cout << "Description: " << description << std::endl;
	std::cout << "Students: " << std::endl;
	for (int i = 0; i < studentList.size(); i++)
	{
		std::cout << studentList[i].getFirstName() << " " << studentList[i].getLastName() << std::endl;
	}
}