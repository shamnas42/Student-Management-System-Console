#include <iostream>
#include <vector>
#include "Grades.h"
#include "Student.h"
#include "Student_Manager.h"

int main()
{
	std::map<std::string, double> grade1 = { {"Gym" , 100}, {"Biology", 95}, {"Geography", 97}, {"Electrical Engineering", 100} };
	Student ash = Student("Ash", "R3d");
	ash.setGrades(grade1);
	////ash.printProfile();

	std::map<std::string, double> grade2 = { {"Gym" , 93}, {"Geology", 97}, {"Geometry", 92}, {"Cooking", 100} };
	Student brock = Student("Brock", "r0ck");
	brock.setGrades(grade2);
	////brock.printProfile();

	std::map<std::string, double> grade3 = { {"Gym" , 94}, {"Swimming", 97}, {"Marine Biology", 95}, {"Fluid Dynamics", 94} };
	Student misty = Student("Misty", "6lu3");
	misty.setGrades(grade3);
	////misty.printProfile();

	std::map<std::string, double> grade4 = { {"Gym" , 100}, {"Biology", 100}, {"History", 96}, {"Research", 93} };
	Student gary = Student("Gary", "gR33n");
	gary.setGrades(grade4);
	///gary.printProfile();

	std::vector<Student> list = { ash, brock, misty, gary};
	Student_Manager kanto = Student_Manager(list);

	//kanto.listStudent();

	//kanto.viewStudent("R3d");
	//kanto.viewStudent("r0ck");
	//kanto.viewStudent("6lu3");
	//kanto.viewStudent("gR33n");

	Student test1 = Student("Test", "R32d");
	kanto.addStudent(test1);

	//kanto.listStudent();

	kanto.viewStudent(gary.getId());

	gary.setName("woihruiosd");
	std::cout << gary.getName();


	//kanto.editStudent(gary, 1);

	//kanto.viewStudent(gary.getId());

	return 0; 
}