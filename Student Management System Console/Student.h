#pragma once
#include <iostream>
#include <map>

class Student
{
	private:

		std::string name;
		std::string id;
		std::map<std::string, double> grades;


	public:

		Student(std::string name, std::string id);

		std::string getName() const;
		std::string getId() const;
		void printGrades() const;

		void setName(std::string student_name);
		void setId(std::string id);
		void setGrades(std::map<std::string, double> grades);
};

