#pragma once
#include <iostream>
#include <string>

class Calculator
{
public:
	Calculator(); //constructor
	~Calculator(); //destructor

	void Plus(float a, float b);
	void Minus(float a, float b);
	void Multiply(float a, float b);
	void Divide(float a, float b);
	void Modulus(int a, int b);
};

