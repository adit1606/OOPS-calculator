//Aditya Subramaniam
//Final Project - Calculator

#pragma once

#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "Calculator.h"
#include "Scientific.h"

class UserInterface {
public:
    UserInterface();
    ~UserInterface();
    void displayMainMenu();
    void handleBasicCalculator();
    void handleScientificCalculator();
private:
    Calculator basicCalculator;
    ScientificCalculator scientificCalculator;
};

#endif // USERINTERFACE_H
