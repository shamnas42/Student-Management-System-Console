#include "Student_Manager.h"
#include <vector>
#include <iostream>

Student_Manager::Student_Manager() {}

Student_Manager::Student_Manager(std::vector<Student> students)
	: students(students){}

void Student_Manager::addStudent(Student student)
{
	bool flag = false; 
	for (int i = 0; i < students.size(); i++)
	{
		if (students[i].getId() == student.getId())
		{
			flag = true; 
		}
	}
	if (flag == false)
	{
		students.push_back(student);
	}
	else {
		std::cout << "Student's Id Already Present\n\n";
	}
}

void Student_Manager::viewStudent(std::string id)
{
	for (int i = 0; i < students.size(); i++)
	{
		if (students[i].getId() == id)
		{
			students[i].printProfile(); 
		}
	}
}

// 1 = Name, 2 = ID, 3 = Grade 
void Student_Manager::editStudent(Student student, int choice)
{
	std::string newStudentName;
	std::string newStudentId;
	std::string currentSubjectName;
	std::string newSubjectName;
	double newSubjectScore;
	bool flag = false;

	switch (choice)
	{

		case 1:
	
			std::cout << "What do you want to change the name to? Enter \"quit\" to cancel.";
			std::cin >> newStudentName;

			student.setName(newStudentName);

			break;

		case 2:
			std::cout << "What do you want to change the id to? Enter \"quit\" to cancel.";
			std::cin >> newStudentId;

			for (int i = 0; i < students.size(); i++)
			{
				if (students[i].getId() == newStudentId)
				{
					flag = true;
				}
			}
			if (flag == false)
			{
				student.setId(newStudentId);
			}
			else {
				std::cout << "Student's Id Already Present\n\n";
			}
			break;

		case 3:

			std::string gradeChoice; 
			std::cin >> gradeChoice;

			while (gradeChoice != "quit")
			{
				std::cout << " Enter \"quit\" to cancel.\nWhat would you like to edit? Enter (a, b, c, d):";

				std::cout << "a. Add Subject\nb. Edit Subject Name\nc. Edit Subject Score\nd.Delete Subject";

				std::cin >> gradeChoice; 


				if (gradeChoice == "a")
				{

					std::cout << "What is the new subject name?";
					std::cin >> newSubjectName;

					std::cout << "What is the new subject score?";
					std::cin >> newSubjectScore;

					student.getGrades().addSubjectAndScore(newSubjectName, newSubjectScore);
				}
				else if (gradeChoice == "b")
				{
					std::cout << "What is the current subject name?";
					std::cin >> currentSubjectName;

					std::cout << "What is the new subject name?";
					std::cin >> newSubjectName;

					student.getGrades().editSubjectName(currentSubjectName, newSubjectName);
				}
				else if (gradeChoice == "c")
				{
					std::cout << "What is the current subject name?";
					std::cin >> currentSubjectName;

					std::cout << "What is the new score?";
					std::cin >> newSubjectScore;

					student.getGrades().editSubjectScore(currentSubjectName, newSubjectScore);
				}
				else if (gradeChoice == "d")
				{
					std::cout << "What subject would you like to delete?";
					std::cin >> currentSubjectName;

					student.getGrades().deleteSubjectNameandScore(currentSubjectName);
				}
				else
				{
					std::cout << "Invalid input, please try again.";
					std::cin >> gradeChoice;
				}

			}
			break;
	}
}

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

void Student_Manager::listStudent()
{
	for (int i = 0; i < students.size(); i++)
	{
		students[i].printProfile();
	}
}