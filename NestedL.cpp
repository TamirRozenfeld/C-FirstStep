#include <iostream>
#include <cmath>

int main()
{
    int rows;
    int column;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many column: ";
    std::cin >> column;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++)
    {
    
        for (int j = 1; j <= column; j++){
    
            std::cout << symbol;
        }
        std::cout << "\n";
    }


    
    
    
        
        
    
    return 0;
}