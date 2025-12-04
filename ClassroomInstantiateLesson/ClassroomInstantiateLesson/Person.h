#pragma once
#include <string>
class Person
{
	public:
		void Name(std::string name);
		void Height(std::string StudentID);
		void Age(std::string Age);
		void Hobby(std::string Address);
		void Study(std::string PhoneNumber);
		void DisplayInfo() const;

	private:
		std::string _name;
		std::string _height;
		std::string _age;
		std::string _hobby;
		std::string _study;

};

