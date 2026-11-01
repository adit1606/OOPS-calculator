//Aditya Subramaniam
//Final Project - Calculator

#include "UserInterface.h"
#include <iostream>

UserInterface::UserInterface() {}

UserInterface::~UserInterface() {}

void UserInterface::displayMainMenu() {
    char choice = '0';
    do {
        std::cout << "\nWhich calculator would you like to use ?\n" << std::endl;
        std::cout << "B. The Basic Calculator" << std::endl;
        std::cout << "S. The Scientific Calculator" << std::endl;
        std::cout << "E. Exit" << std::endl;
        std::cin >> choice;

        switch (choice) {
        case 'B':
        case 'b':
            handleBasicCalculator();
            break;
        case 'S':
        case 's':
            handleScientificCalculator();
            break;
        case 'E':
        case 'e':
            std::cout << "Come again Soon...Bye" << std::endl;
            break;
        default:
            std::cout << "Invalid choice, please try again." << std::endl;
        }
    } while (choice != 'E' && choice != 'e');
}

void UserInterface::handleBasicCalculator() {
    double a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    basicCalculator.setVariables(a, b);
    basicCalculator.calculate();
}

void UserInterface::handleScientificCalculator() {
    double a;
    std::cout << "Enter the number: ";
    std::cin >> a;
    scientificCalculator.setVariable(a);
    scientificCalculator.calculate();
}
