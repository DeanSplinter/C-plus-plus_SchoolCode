#include <iostream>
#include "Person.h"
#include <stdlib.h>

int main()
{
    Person person1;
	
	std::cout << "What is your name?" << std::endl;
	std::string inputName;
	std::getline(std::cin, inputName);
	person1.setName(inputName);
	system("CLS");

	std::cout << "What is your studentID?" << std::endl;
	std::string inputStudentID;
	std::getline(std::cin, inputStudentID);
	person1.setStudentID(inputStudentID);
	system("CLS");

	std::cout << "What is your age?" << std::endl;
	std::string inputAge;
	std::getline(std::cin, inputAge);
	person1.setAge(inputAge);
	system("CLS");

	std::cout << "What is your address?" << std::endl;
	std::string inputAddress;
	std::getline(std::cin, inputAddress);
	person1.setAddress(inputAddress);
	system("CLS");

	std::cout << "What is your phone number?" << std::endl;
	std::string inputPhoneNumber;
	std::getline(std::cin, inputPhoneNumber);
	person1.setPhoneNumber(inputPhoneNumber);
	system("CLS");

	person1.displayInfo();
	return 0;
}
