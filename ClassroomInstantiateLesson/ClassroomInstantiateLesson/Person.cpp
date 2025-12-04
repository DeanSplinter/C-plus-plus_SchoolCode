#include "Person.h"
#include <string>
#include <iostream>

void Person::Name(std::string name)
{
	_name = name;
}

void Person::Height(std::string height)
{
	_height = height;
}

void Person::Age(std::string age)
{
	_age = age;
}

void Person::Hobby(std::string hobby)
{
	_hobby = hobby;
}

void Person::Study(std::string study)
{
	_study = study;
}

void Person::DisplayInfo() const
{
	std::cout << "Name: " << _name << std::endl;
	std::cout << "Height: " << _height << std::endl;
	std::cout << "Age: " << _age << std::endl;
	std::cout << "Hobby: " << _hobby << std::endl;
	std::cout << "Study: " << _study << std::endl;
}

