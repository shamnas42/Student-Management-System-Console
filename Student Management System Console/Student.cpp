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
std::map<std::string, double> Student::getGrades()
{
	return grades.getGrades(); 
}

void Student::printGrades() 
{
	if (grades.getGrades().empty())
	{
		std::cout << "Student Grades: NaN \n\n";
	}
	else
	{
		std::cout << "Student Grades: \n";
		for (auto grade : grades.getGrades())
		{
			std::cout << "\t" << grade.first << ": " << grade.second << "\n";
		}
		std::cout << "\n";
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
void Student::setGrades(std::map<std::string, double> student_grades)
{
	grades.setGrades(student_grades);
}