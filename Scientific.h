//Aditya Subramaniam
//Final Project - Calculator

#pragma once
#include "Calculator.h"
#include <cmath>

class ScientificCalculator : public Calculator
{
public:
	// Constructor / Destructor
	ScientificCalculator();
	~ScientificCalculator();

	// Mutator (single-operand entry point used by the scientific menu)
	void setVariable(double a);

	double Sin();
	double Cosine();
	double Tan();
	double aCos();
	double aSin();
	double aTan();
	double CosH();
	double SinH();
	double TanH();
	double Exp();
	double Log();
	double Log2();
	double Log10();
	double Pow();
	double Sqrt();
	double Cbrt();

	void calculate() override;
};
