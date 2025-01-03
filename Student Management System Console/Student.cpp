#include "Student.h"
#include <iostream>

Student::Student(std::string name, std::string id)
	: name(name), id(id) {}

std::string Student::getName() const
{
	return name;
}
std::string Student::getId() const
{
	return id;
}
void Student::printGrades() const
{
	for (auto grade : grades) {
		std::cout << grade.first << ": " << grade.second << "\n";
	}
}
		

void Student::setName(std::string student_name)
{
	name = student_name;
}
void Student::setId(std::string student_id)
{
	id = student_id;
}
void Student::setGrades(std::map<std::string , double> student_grades)
{
	grades = student_grades;
}