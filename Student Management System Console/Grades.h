#pragma once
#include <string>
#include <map>


class Grades
{
	private: 
		std::map<std::string, double> grades;

	public: 
		
		Grades();

		std::map<std::string, double> getGrades();

		void setGrades(std::map<std::string, double> grades);

		void addSubjectAndScore(std::string currentSubject, double changeSubjectScoreTo);

		void editSubjectName(std::string currentSubject, std::string changeSubjectName);
		void editSubjectScore(std::string currentSubject, double changeSubjectScoreTo);

		void printGrades();
};

