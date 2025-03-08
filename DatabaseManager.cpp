#include "DatabaseManager.h"
#include <vector>
#include <iostream>

DatabaseManager::DatabaseManager()
{
}

void DatabaseManager::addStudent(Student student)
{
	studentDatabase.push_back(student);
}

void DatabaseManager::removeStudent(std::string ID)
{
	for (int i = 0; i < studentDatabase.size(); i++)
	{
		if (studentDatabase[i].getID() == ID)
		{
			studentDatabase.erase(studentDatabase.begin() + i);
			break;
		}
	}
}

void DatabaseManager::updateStudent(std::string ID, Student student)
{
	for (int i = 0; i < studentDatabase.size(); i++)
	{
		if (studentDatabase[i].getID() == ID)
		{
			studentDatabase[i] = student;
			break;
		}
	}
}

Student DatabaseManager::getStudent(std::string ID)
{
	for (int i = 0; i < studentDatabase.size(); i++)
	{
		if (studentDatabase[i].getID() == ID)
		{
			return studentDatabase[i];
		}
	}
}

void DatabaseManager::printAllStudents()
{
	for (int i = 0; i < studentDatabase.size(); i++)
	{
		std::cout << "Student ID: " << studentDatabase[i].getID() << std::endl;
		std::cout << "Student Name: " << studentDatabase[i].getFirstName() << " " << studentDatabase[i].getLastName() << std::endl;
		std::cout << "Student Birth Date: " << studentDatabase[i].getBirthDate() << std::endl;
		std::cout << "Student Major: " << studentDatabase[i].getMajor() << std::endl;
		std::cout << "Student Semester: " << studentDatabase[i].getSemester() << std::endl;
		std::cout << "Student GPA: " << studentDatabase[i].getGPA() << std::endl;
		std::cout << "Student Current Credits: " << studentDatabase[i].getCurrentCredits() << std::endl;
		std::cout << "Student Active Semester: " << studentDatabase[i].getIsActiveSemester() << std::endl;
		std::cout << std::endl;
	}
}

void DatabaseManager::addTeacher(Teacher teacher)
{
	teacherDatabase.push_back(teacher);
}

void DatabaseManager::removeTeacher(std::string ID)
{
	for (int i = 0; i < teacherDatabase.size(); i++)
	{
		if (teacherDatabase[i].getID() == ID)
		{
			teacherDatabase.erase(teacherDatabase.begin() + i);
			break;
		}
	}
}

void DatabaseManager::updateTeacher(std::string ID, Teacher teacher)
{
	for (int i = 0; i < teacherDatabase.size(); i++)
	{
		if (teacherDatabase[i].getID() == ID)
		{
			teacherDatabase[i] = teacher;
			break;
		}
	}
}

Teacher DatabaseManager::getTeacher(std::string ID)
{
	for (int i = 0; i < teacherDatabase.size(); i++)
	{
		if (teacherDatabase[i].getID() == ID)
		{
			return teacherDatabase[i];
		}
	}
}

void DatabaseManager::printAllTeachers()
{
	for (int i = 0; i < teacherDatabase.size(); i++)
	{
		std::cout << "Teacher ID: " << teacherDatabase[i].getID() << std::endl;
		std::cout << "Teacher Name: " << teacherDatabase[i].getFirstName() << " " << teacherDatabase[i].getLastName() << std::endl;
		std::cout << "Teacher Birth Date: " << teacherDatabase[i].getBirthDate() << std::endl;
		std::cout << "Teacher Department: " << teacherDatabase[i].getDepartment() << std::endl;
		std::cout << "Teacher Title: " << teacherDatabase[i].getTitle() << std::endl;
		std::cout << std::endl;
	}
}

std::vector<Student> DatabaseManager::getStudentDatabase()
{
	return studentDatabase;
}

std::vector<Teacher> DatabaseManager::getTeacherDatabase()
{
	return teacherDatabase;
}

void DatabaseManager::addSubject(Subject subject)
{
	subjectDatabase.push_back(subject);
}

void DatabaseManager::removeSubject(std::string name)
{
	for (int i = 0; i < subjectDatabase.size(); i++)
	{
		if (subjectDatabase[i].getName() == name)
		{
			subjectDatabase.erase(subjectDatabase.begin() + i);
			break;
		}
	}
}

void DatabaseManager::updateSubject(std::string name, Subject subject)
{
	for (int i = 0; i < subjectDatabase.size(); i++)
	{
		if (subjectDatabase[i].getName() == name)
		{
			subjectDatabase[i] = subject;
			break;
		}
	}
}

Subject DatabaseManager::getSubject(std::string name)
{
	for (int i = 0; i < subjectDatabase.size(); i++)
	{
		if (subjectDatabase[i].getName() == name)
		{
			return subjectDatabase[i];
		}
	}
}

void DatabaseManager::printAllSubjects()
{
	for (int i = 0; i < subjectDatabase.size(); i++)
	{
		subjectDatabase[i].printSubjects();
	}
}

std::vector<Subject> DatabaseManager::getSubjectDatabase()
{
	return subjectDatabase;
}