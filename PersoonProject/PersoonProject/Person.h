#pragma once
#include <string>
class Person
{
	public:
		void setName(std::string name);
		void setStudentID(int StudentID);
		void setAge(int Age);
		void setAddress(std::string Address);
		void setPhoneNumber(std::string PhoneNumber);
private:
		std::string _name;
		int _studentID;
		int _age;
		std::string _address;
		std::string _phoneNumber;
};

