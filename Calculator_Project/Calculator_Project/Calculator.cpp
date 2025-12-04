#include "Calculator.h"

Calculator::Calculator()
{
	std::cout << "My super duper awesome calculator \n"; 		// \n is for new line
}

Calculator::~Calculator()                                      //deconstructor
{
	std::cout << "Calculator shutting down \n";						
}

void Calculator::Plus(float a, float b)
{
	std::cout << a << " + " << b << " = " << (a + b);			// << is the stream insertion operator
}

void Calculator::Minus(float a, float b)
{
	std::cout << a << " - " << b << " = " << (a - b);
}

void Calculator::Multiply(float a, float b)
{
	std::cout << a << " * " << b << " = " << (a * b);
}

void Calculator::Divide(float a, float b)
{
	if (b == 0.0) {												//check for division by zero which is impossible
		std::cout << "Error: division by zero";
		return;
	}
	std::cout << a << " / " << b << " = " << (a / b);
}

void Calculator::Modulus(int a, int b)
{
	if (b == 0) {												//check for modulus by zero which is impossible
		std::cout << "Error: modulus by zero";
		return;
	}
	std::cout << a << " % " << b << " = " << (a % b);
}