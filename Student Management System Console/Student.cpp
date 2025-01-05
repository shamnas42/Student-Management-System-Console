#include "Student.h"
#include <iostream>

Student::Student(std::string name, std::string id)
	: name(name), id(id){}

std::string Student::getName() 
{
	return name;
}
std::string Student::getId() 
{
	return id;
}
Grades Student::getGrades()
{
	return grades; 
}

void Student::setName(std::string student_name)
{
	name = student_name;
}
void Student::setId(std::string student_id)
{
	id = student_id;
}
void Student::setGrades(Grades student_grades)
{
	grades = student_grades;
}

void Student::printProfile()
{
	std::cout << "Name: " << name << "\nId: " << id << "\n" ;
	grades.printGrades();
}
