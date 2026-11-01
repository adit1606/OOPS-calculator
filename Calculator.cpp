//Aditya Subramaniam
//Final Project - Calculator

#include "Calculator.h"
#include <iostream>
#include <cmath>

// Constructor: initializes both operands to a safe default
Calculator::Calculator()
{
	FirstVariable = 0.0;
	SecondVariable = 0.0;
}

// Destructor: nothing to release, but declared/defined to satisfy the
// project requirement that every class demonstrate a constructor/destructor pair
Calculator::~Calculator()
{
}

void Calculator::setVariables(double a, double b)
{
	FirstVariable = a;
	SecondVariable = b;
}

double Calculator::getFirstVariable() const
{
	return FirstVariable;
}

double Calculator::getSecondVariable() const
{
	return SecondVariable;
}

double Calculator::add(double a, double b)
{
	return (a + b);
}

double Calculator::subtract(double a, double b)
{
	return (a - b);
}

double Calculator::multiply(double a, double b)
{
	return (a * b);
}

double Calculator::division(double a, double b)
{
	return (a / b);
}

double Calculator::square(double a)
{
	return (a * a);
}

double Calculator::squareRoot(double a)
{
	return sqrt(a);
}

void Calculator::calculate()
{
	char op = '0';
	std::cout << "\nPlease select from following operations:\n";
	std::cout << "  1 FOR '+'  Add\n";
	std::cout << "  2 FOR '-'  Subtract\n";
	std::cout << "  3 FOR '*'  Multiply\n";
	std::cout << "  4 FOR '/'  Divide\n";
	std::cout << "  5 FOR      Square (uses first number only)\n";
	std::cout << "  6 FOR      Square Root (uses first number only)\n";
	std::cout << "Enter your choice (1,2,3,4,5,6): ";
	std::cin >> op;

	if (op == '1')
	{
		std::cout << "Result: " << add(FirstVariable, SecondVariable) << std::endl;
	}
	else if (op == '2')
	{
		std::cout << "Result: " << subtract(FirstVariable, SecondVariable) << std::endl;
	}
	else if (op == '3')
	{
		std::cout << "Result: " << multiply(FirstVariable, SecondVariable) << std::endl;
	}
	else if (op == '4')
	{
		if (SecondVariable == 0)
		{
			std::cout << "Cannot divide by Zero!" << std::endl;
		}
		else
		{
			std::cout << "Result: " << division(FirstVariable, SecondVariable) << std::endl;
		}
	}
	else if (op == '5')
	{
		std::cout << "Result: " << square(FirstVariable) << std::endl;
	}
	else if (op == '6')
	{
		if (FirstVariable < 0)
		{
			std::cout << "Cannot take square root of a negative number!" << std::endl;
		}
		else
		{
			std::cout << "Result: " << squareRoot(FirstVariable) << std::endl;
		}
	}
	else
	{
		std::cout << "Please enter a valid operand" << std::endl;
	}
}
