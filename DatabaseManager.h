#pragma once
#include <string>
#include <vector>
#include "Student.h"
#include "Teacher.h"

class DatabaseManager
{
private:
	std::vector<Student> studentDatabase;
	std::vector<Teacher> teacherDatabase;

public:
	DatabaseManager();
	void addStudent(Student student);
	void removeStudent(std::string ID);
	void updateStudent(std::string ID, Student student);
	Student getStudent(std::string ID);
	void printAllStudents();
	void addTeacher(Teacher teacher);
	void removeTeacher(std::string ID);
	void updateTeacher(std::string ID, Teacher teacher);
	Teacher getTeacher(std::string ID);
	void printAllTeachers();
};