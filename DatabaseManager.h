#pragma once
#include <string>
#include <vector>
#include "Student.h"
#include "Teacher.h"
#include "Subject.h"

using namespace std;

class DatabaseManager
{
private:
	std::vector<Student> studentDatabase;
	std::vector<Teacher> teacherDatabase;
	std::vector<Subject> subjectDatabase;

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
	std::vector<Student> getStudentDatabase();
	std::vector<Teacher> getTeacherDatabase();
	void addSubject(Subject subject);
	void removeSubject(std::string name);
	void updateSubject(std::string name, Subject subject);
	Subject getSubject(std::string name);
	void printAllSubjects();
	vector<Subject> getSubjectDatabase();
};