#include <iostream>
#include "DatabaseManager.h"

int main()
{
	DatabaseManager dbm;
	Teacher teacher1("1", "John", "Doe", "01/01/1990", "Computer Science", "Professor");
	Teacher teacher2("2", "Jane", "Doe", "01/01/1990", "Computer Science", "Professor");
	Teacher teacher3("3", "Jack", "Doe", "01/01/1990", "Computer Science", "Professor");
	Teacher teacher4("4", "Jill", "Doe", "01/01/1990", "Computer Science", "Professor");
	Teacher teacher5("5", "Jim", "Doe", "01/01/1990", "Computer Science", "Professor");
	dbm.addTeacher(teacher1);
	dbm.addTeacher(teacher2);
	dbm.addTeacher(teacher3);
	dbm.addTeacher(teacher4);
	dbm.addTeacher(teacher5);

	Student student1("1", "John", "Doe", "01/01/1990", "Computer Science", 1, 12, true, { {"1", "Math", 3, 5 }});
	Student student2("2", "Jane", "Doe", "01/01/1990", "Computer Science", 1, 12, true, { {"1", "Math", 3, 5 } });
	Student student3("3", "Jack", "Doe", "01/01/1990", "Computer Science", 1, 12, true, { {"1", "Math", 3, 5 } });
	Student student4("4", "Jill", "Doe", "01/01/1990", "Computer Science", 1, 12, true, { {"1", "Math", 3, 5 } });
	Student student5("5", "Jim", "Doe", "01/01/1990", "Computer Science", 1, 12, true, { {"1", "Math", 3, 5 } });
	dbm.addStudent(student1);
	dbm.addStudent(student2);
	dbm.addStudent(student3);
	dbm.addStudent(student4);
	dbm.addStudent(student5);

	Student student6("6", "John", "Doe", "01/01/1990", "Computer Science", 1, 12, true, { {"1", "Math", 3, 5 } });

	Subject subject1("Math", teacher1, { student1, student2, student3, student4, student5 }, 3, "Room 101", "Mathematics");
	Subject subject2("Science", teacher2, { student1, student2, student3, student4, student5 }, 3, "Room 102", "Science");
	Subject subject3("History", teacher3, { student1, student2, student3, student4, student5 }, 3, "Room 103", "History");
	Subject subject4("English", teacher4, { student1, student2, student3, student4, student6 }, 3, "Room 104", "English");
	Subject subject5("Art", teacher5, { student1, student2, student3, student4, student5 }, 3, "Room 105", "Art");
	dbm.addSubject(subject1);
	dbm.addSubject(subject2);
	dbm.addSubject(subject3);
	dbm.addSubject(subject4);
	dbm.addSubject(subject5);

	std::cout << "\nStudents:" << std::endl;
	dbm.printAllStudents();

	std::cout << "\nTeachers:" << std::endl;
	dbm.printAllTeachers();

	std::cout << "\nSubjects:" << std::endl;
	dbm.printAllSubjects();
}