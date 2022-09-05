#include <iostream>
using namespace std;


void swap(std::string &x, std::string &y);

int main(){
    
    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);

    std::cout << "X: " << &x << endl;
    std::cout << "Y: " << &y << endl;
    
    return 0;
}

void swap(std::string &x, std::string &y)
{
    std::cout << "X: " << &x << endl;
    std::cout << "Y: " << &y << endl;
}


