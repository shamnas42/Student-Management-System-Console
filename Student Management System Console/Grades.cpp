#include "Grades.h"
#include <iostream>

Grades::Grades() {}

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
	//TO:DO Test if changeSubjectScoreTo is not duplicate 
	grades.insert(std::pair<std::string, double>(currentSubject, changeSubjectScoreTo));
}

void Grades::editSubjectName(std::string currentSubject, std::string changeSubjectName)
{
	//TO:DO Test if crrent is indeed inside and if change is not a duplicate 

	grades.insert(std::pair<std::string, double>(changeSubjectName, grades[currentSubject]));
	grades.erase(currentSubject);
}

void Grades::editSubjectScore(std::string currentSubject, double changeSubjectScoreTo)
{
	grades[currentSubject] = changeSubjectScoreTo;
}

void Grades::printGrades()
{
	for (auto grade : grades)
	{
		std::cout << "\t" << grade.first << ": " << grade.second << "\n";
	}
	std::cout << "\n";
}


