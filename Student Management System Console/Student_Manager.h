#pragma once
#include <vector>
#include "Student.h"

class Student_Manager
{
	private:
		std::vector<Student> students;

	public:
		Student_Manager();
		Student_Manager(std::vector<Student> students);

		void addStudent(Student student);
		void viewStudent(std::string id);
		void editStudent(Student student, int choice);
		void deleteStudent(Student student);
		void listStudent();
};

