#pragma once
#include <string>
class Person
{
	public:
		void setName(std::string name);
		void setStudentID(std::string StudentID);
		void setAge(std::string Age);
		void setAddress(std::string Address);
		void setPhoneNumber(std::string PhoneNumber);
		void displayInfo() const;
private:
		std::string _name;
		std::string _studentID;
		std::string _age;
		std::string _address;
		std::string _phoneNumber;
};

