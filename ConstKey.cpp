#include <iostream>

int main() {
    const double PI = 3.1415;
    
    double radius = 10;
    const int LIGHT_Speed = 299792458;
    const int LIGHT_WIDTH = 1920;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}