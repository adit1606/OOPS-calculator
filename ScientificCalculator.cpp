//Aditya Subramaniam
//Final Project - Calculator

#include "Scientific.h"
#include <iostream>

// Constructor: delegates to base class Calculator() which zero-initializes
// FirstVariable/SecondVariable
ScientificCalculator::ScientificCalculator() : Calculator()
{
}

// Destructor
ScientificCalculator::~ScientificCalculator()
{
}

void ScientificCalculator::setVariable(double a)
{
	FirstVariable = a;
}

double ScientificCalculator::Sin()
{
	return sin(FirstVariable);
}

double ScientificCalculator::Cosine()
{
	return cos(FirstVariable);
}

double ScientificCalculator::Tan()
{
	return tan(FirstVariable);
}

double ScientificCalculator::aCos()
{
	return acos(FirstVariable);
}

double ScientificCalculator::aSin()
{
	return asin(FirstVariable);
}

double ScientificCalculator::aTan()
{
	return atan(FirstVariable);
}

double ScientificCalculator::SinH()
{
	return sinh(FirstVariable);
}

double ScientificCalculator::CosH()
{
	return cosh(FirstVariable);
}

double ScientificCalculator::TanH()
{
	return tanh(FirstVariable);
}

double ScientificCalculator::Exp()
{
	return exp(FirstVariable);
}

double ScientificCalculator::Log()
{
	return log(FirstVariable);
}

double ScientificCalculator::Log2()
{
	return log2(FirstVariable);
}

double ScientificCalculator::Log10()
{
	return log10(FirstVariable);
}

double ScientificCalculator::Pow()
{
	double n;
	std::cout << "Please enter the exponent: " << std::endl;
	std::cin >> n;
	return pow(FirstVariable, n);
}

double ScientificCalculator::Sqrt()
{
	return sqrt(FirstVariable);
}

double ScientificCalculator::Cbrt()
{
	return cbrt(FirstVariable);
}

void ScientificCalculator::calculate()
{
	int op = 0;

	std::cout << "\nPlease select from following scientific operations:" << std::endl;
	std::cout << "1. Sin     \n2. Cos     \n3. Tan     \n4. aSin    \n5. aCos \n6. SinH    \n7. CosH    \n8. TanH    \n9. Exp    \n10. Log \n11. Log2   \n12. Log10  \n13. Pow    \n14. Sqrt   \n15. Cbrt\n" << std::endl;
	std::cout << "Enter your choice: ";
	std::cin >> op;

	if (op == 1)
	{
		std::cout << "Result: " << Sin() << std::endl;
	}
	else if (op == 2)
	{
		std::cout << "Result: " << Cosine() << std::endl;
	}
	else if (op == 3)
	{
		std::cout << "Result: " << Tan() << std::endl;
	}
	else if (op == 4)
	{
		std::cout << "Result: " << aSin() << std::endl;
	}
	else if (op == 5)
	{
		std::cout << "Result: " << aCos() << std::endl;
	}
	else if (op == 6)
	{
		std::cout << "Result: " << SinH() << std::endl;
	}
	else if (op == 7)
	{
		std::cout << "Result: " << CosH() << std::endl;
	}
	else if (op == 8)
	{
		std::cout << "Result: " << TanH() << std::endl;
	}
	else if (op == 9)
	{
		std::cout << "Result: " << Exp() << std::endl;
	}
	else if (op == 10)
	{
		std::cout << "Result: " << Log() << std::endl;
	}
	else if (op == 11)
	{
		std::cout << "Result: " << Log2() << std::endl;
	}
	else if (op == 12)
	{
		std::cout << "Result: " << Log10() << std::endl;
	}
	else if (op == 13)
	{
		std::cout << "Result: " << Pow() << std::endl;
	}
	else if (op == 14)
	{
		std::cout << "Result: " << Sqrt() << std::endl;
	}
	else if (op == 15)
	{
		std::cout << "Result: " << Cbrt() << std::endl;
	}
	else
	{
		std::cout << "Please Provide a valid input." << std::endl;
	}
}
