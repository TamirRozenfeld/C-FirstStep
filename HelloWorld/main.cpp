#include<iostream>
#include "calculator.h"


    int main()
    {
        double number1 { num1() };
        char operation{ operations() };
        double number2{ num2() };


        switch (operation)
        {
        case '+':
            std::cout << number1 << "+" << number2 << " is equal to " << number1 + number2 << '\n';
            break;
        case '*':
            std::cout << number1 << "*" << number2 << " is equal to " << number1 * number2 << '\n';
            break;
        case '-':
            std::cout << number1 << "-" << number2 << " is equal to " << number1 - number2 << '\n';
            break;
        case '/':
            std::cout << number1 << "/" << number2 << " is equal to " << number1 / number2 << '\n';
            break;
        default:
            std::cout << " ";
        }


        return 0;
    }

   