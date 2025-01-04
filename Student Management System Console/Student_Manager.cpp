#include "Student_Manager.h"
#include <vector>
#include <iostream>

Student_Manager::Student_Manager(std::vector<Student> students)
	: students(students){}

void Student_Manager::addStudent(Student student)
{
	students.push_back(student);
}

void Student_Manager::viewStudent(Student student)
{
	std::cout << "Student Name: " << student.getName() << "\nStudent Id: " << student.getId() << "\n";
	student.printGrades();
}

//void Student_Manager::editStudent(Student student)
//{
//	student.setName();
//	student.setId();
//	student.setGrades();
//}

void Student_Manager::deleteStudent(Student student)
{
	for (int i = 0; i < students.size(); i++)
	{
		if (students[i].getId() == student.getId())
		{
			students.erase(students.begin() + i);
		}
	}
}

void Student_Manager::listStudent(Student student)
{
	for (int i = 0; i < students.size(); i++)
	{
		students[i].getName();
	}
}