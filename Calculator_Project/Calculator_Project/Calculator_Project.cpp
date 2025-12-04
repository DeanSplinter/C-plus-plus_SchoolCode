#include <iostream>
#include "Calculator.h"

int main()
{
    Calculator calculatorPublic;

	//std::cin is the standard input stream
	//std::cout is the standard output stream
	//really simple switch case menu for calculator operations
    //4-12-2025

    std::cout << "Choose operation (1 +)  (2 -)  (3 *)  (4 /)  (5 %)  (0 Exit)";
    int choice;
    if (!(std::cin >> choice) || choice == 0) return 0;

    switch (choice) {
    case 1: {
        float a, b;
        std::cout << "Enter first number (Number 1): ";
        if (!(std::cin >> a)) return 0;
        std::cout << "Enter second number (Number 2): ";
        if (!(std::cin >> b)) return 0;
        calculatorPublic.Plus(a, b);
        std::cout << '\n';
        break;
    }
    case 2: {
        float a, b;
        std::cout << "Enter first number (Number 1): ";
        if (!(std::cin >> a)) return 0;
        std::cout << "Enter second number (Number 2): ";
        if (!(std::cin >> b)) return 0;
        calculatorPublic.Minus(a, b);
        std::cout << '\n';
        break;
    }
    case 3: {
        float a, b;
        std::cout << "Enter first number (Number 1): ";
        if (!(std::cin >> a)) return 0;
        std::cout << "Enter second number (Number 2): ";
        if (!(std::cin >> b)) return 0;
        calculatorPublic.Multiply(a, b);
        std::cout << '\n';
        break;
    }
    case 4: {
        float a, b;
        std::cout << "Enter first number (Number 1): ";
        if (!(std::cin >> a)) return 0;
        std::cout << "Enter second number (Number 2): ";
        if (!(std::cin >> b)) return 0;
        calculatorPublic.Divide(a, b);
        std::cout << '\n';
        break;
    }
    case 5: {
        int a, b;
        std::cout << "Enter first integer (Number 1): ";
        if (!(std::cin >> a)) return 0;
        std::cout << "Enter second integer (Number 2): ";
        if (!(std::cin >> b)) return 0;
        calculatorPublic.Modulus(a, b);
        std::cout << '\n';
        break;
    }
    default:
        std::cout << "Invalid choice" << std::endl;
        break;
    }

    return 0;
}

