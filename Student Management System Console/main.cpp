#include <iostream>
#include "Student.h"

int main()
{

	Student ash = Student("Ash", "R3D");
	Student gary = Student("Gary", "6R4Y");
	Student james = Student("James", "B1U3");

	std::cout << ash.getName() << "\n";
	ash.setName("Red");
	std::cout << ash.getName() << "\n";

	std::cout << gary.getId() << "\n";
	gary.setName("6R33N");
	std::cout << gary.getName() << "\n";

	james.setGrades({ {"Math", 94.6}, {"Science", 99.3}, {"Gym", 92.1} });
	james.printGrades();



	return 0; 
}