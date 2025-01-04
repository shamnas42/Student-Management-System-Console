#include <iostream>
#include "Grades.h"
#include "Student.h"
#include "Student_Manager.h"

int main()
{

	//TO:DO - finish student, student manager with new grade class then test grades with "wrong" inputs

	//Grades Test 

	std::map<std::string, double> grades = { { "Math", 94.6 }, { "Science", 99.3 }, { "Gym", 92.1 } };
	Grades results = Grades();
	results.setGrades(grades);
	results.printGrades();

	grades = { { "English", 84.6 }, { "Bio", 92.3 }, { "Chem", 99.1 } };
	results.setGrades(grades);
	results.printGrades();

	results.addSubjectAndScore("Math", 94.6);
	results.printGrades();

	results.editSubjectName("Math", "Mathematics");
	results.editSubjectName("Bio", "Biology");
	results.editSubjectName("Chem", "Chemistry");
	results.printGrades();

	results.editSubjectScore("Mathematics", 100);
	results.editSubjectScore("Biology", 100);
	results.editSubjectScore("Chemistry", 100);
	results.editSubjectScore("English", 100);
	results.printGrades();



	// Student Test 
	Student ash = Student("Ash", "R3D");
	Student gary = Student("Gary", "6R4Y");
	Student james = Student("James", "B1U3");

	std::cout << ash.getName() << "\n";
	ash.setName("Red");
	std::cout << ash.getName() << "\n";

	std::cout << gary.getId() << "\n";
	gary.setName("6R33N");
	std::cout << gary.getName() << "\n";

	james.setGrades(grades);
	james.printGrades();





	//Manager Test


	//std::vector<Student> studentList = {ash, gary, james};

	//Student_Manager school = Student_Manager(studentList);

	//Student brock = Student("Brock", "8r0Ck");

	//school.addStudent(brock);


	//school.viewStudent(ash);
	//school.viewStudent(gary);
	//school.viewStudent(james);
	//school.viewStudent(brock);



	return 0; 
}