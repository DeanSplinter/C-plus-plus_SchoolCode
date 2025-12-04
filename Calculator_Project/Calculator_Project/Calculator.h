#pragma once
#include <iostream>
#include <string>

class Calculator
{
public:
	Calculator();									//constructor
	~Calculator();									//destructor

	void Plus(float a, float b);					// value a + b = answer
	void Minus(float a, float b);					// value a - b = answer
	void Multiply(float a, float b);				// value a * b = answer
	void Divide(float a, float b);					// value a / b = answer
	void Modulus(int a, int b);						// value a % b = answer
													//Modulus returns the remainder of a division of two numbers.
};

