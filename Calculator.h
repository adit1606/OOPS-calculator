//Aditya Subramaniam
//Final Project - Calculator

#pragma once

class Calculator
{
protected:
	// Encapsulated data members (protected so ScientificCalculator can reuse them)
	double FirstVariable;
	double SecondVariable;

public:
	// Constructor / Destructor
	Calculator();
	virtual ~Calculator();

	// Mutator
	void setVariables(double a, double b);

	// Accessors
	double getFirstVariable() const;
	double getSecondVariable() const;

	// Basic operations
	double add(double a, double b);
	double subtract(double a, double b);
	double multiply(double a, double b);
	double division(double a, double b);
	double square(double a);
	double squareRoot(double a);

	// Menu-driven entry point (overridden by ScientificCalculator)
	virtual void calculate();
};
