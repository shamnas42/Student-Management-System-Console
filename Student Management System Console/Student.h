#pragma once
#include "Grades.h"
#include <string>
#include <map>

class Student
{
	private:

		std::string name;
		std::string id;
		Grades grades;


	public:

		Student(std::string name, std::string id);

		std::string getName();
		std::string getId();
		std::map<std::string, double> getGrades();
		void printGrades();

		void setName(std::string student_name);
		void setId(std::string id);
		void setGrades(std::map<std::string, double> student_grades);


};

