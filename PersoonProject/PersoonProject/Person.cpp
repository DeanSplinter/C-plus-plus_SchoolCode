#include "Person.h"
#include <string>
#include <iostream>

void Person::setName(std::string personName)
{
	_name = personName;
}

void Person::setStudentID(std::string StudentID)
{
	_studentID = StudentID;
}

void Person::setAge(std::string Age)
{
	_age = Age;
}

void Person::setAddress(std::string Address)
{
	_address = Address;
}

void Person::setPhoneNumber(std::string PhoneNumber)
{
	_phoneNumber = PhoneNumber;
}

void Person::displayInfo() const
{
	std::cout << "Name: " << _name << std::endl;
	std::cout << "Student ID: " << _studentID << std::endl;
	std::cout << "Age: " << _age << std::endl;
	std::cout << "Address: " << _address << std::endl;
	std::cout << "Phone Number: " << _phoneNumber << std::endl;
}
