#pragma once
#include <vector>
#include "Student.h"

class Student_Manager
{
	private:
		std::vector<Student> students;

	public:

		Student_Manager(std::vector<Student> students);

		void addStudent(Student student);
		void viewStudent(Student student);
		//void editStudent(Student student);
		void deleteStudent(Student student);
		void listStudent(Student student);
};

