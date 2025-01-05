#include "Grades.h"
#include <iostream>

Grades::Grades() {}

Grades::Grades(std::map<std::string, double> grades)
	: grades(grades) {}

std::map<std::string, double> Grades::getGrades()
{
	return grades;
}

void Grades::setGrades(std::map<std::string, double> class_grades)
{
	grades = class_grades; 
}

void Grades::addSubjectAndScore(std::string currentSubject, double changeSubjectScoreTo)
{

	if (grades.find(currentSubject) == grades.end())
	{
		grades.insert(std::pair<std::string, double>(currentSubject, changeSubjectScoreTo));
	}
	else
	{
		std::cout << "Subject Already Present\n\n";
	}
}

void Grades::editSubjectName(std::string currentSubject, std::string changeSubjectName)
{

	if (grades.find(currentSubject) != grades.end() && grades.find(changeSubjectName) == grades.end())
	{
		grades.insert(std::pair<std::string, double>(changeSubjectName, grades[currentSubject]));
		grades.erase(currentSubject);
	}
	else if (grades.find(currentSubject) == grades.end())
	{
		std::cout << "Subject Not Present\n\n";
	}
	else if (grades.find(changeSubjectName) != grades.end())
	{
		std::cout << "New Subject Already Present\n\n";
	}
}

void Grades::editSubjectScore(std::string currentSubject, double changeSubjectScoreTo)
{
	if (grades.find(currentSubject) != grades.end())
	{
		grades[currentSubject] = changeSubjectScoreTo;
	}
	else
	{
		std::cout << "Subject Not Present\n\n";
	}
}

void Grades::deleteSubjectNameandScore(std::string currentSubject)
{
	grades.erase(currentSubject);
}

void Grades::printGrades()
{
	if (grades.empty())
	{
		std::cout << "Grades: NaN \n\n";
	}
	else
	{
		std::cout << "Grades: \n";
		for (auto grade : grades)
		{
			std::cout << "\t" << grade.first << ": " << grade.second << "\n";
		}
		std::cout << "\n";
	}
}


