#include <iostream>
#include <cmath>
int main(){


    double a = 3.14;
    double b = 4;
    double c;

    //z = std::max(x, y);
    //z = std::max(x, y);
    //z = pow(2, 5);
    //z = sqrt(9);
    //z = abs(-3);
    //z = round(x);
    //z = ceil(x);
    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    
    c = sqrt(pow(a,2)+pow(b,2));

    std::cout << "side C: " << c;
    return 0;
}