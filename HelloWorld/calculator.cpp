
#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
#include "calculator.h"

double num1()
{

	std::cout << "Enter a double value: ";
	double x{};
	std::cin >> x;

	return x;
}
char operations()
{
	std::cout << "Enter an operator (+, -, *, /): ";
	char operation{};
	std::cin >> operation;

	return operation;
}

double num2()
{

	std::cout << "Enter another double value: ";
	double x{};
	std::cin >> x;

	return x;
}


#endif