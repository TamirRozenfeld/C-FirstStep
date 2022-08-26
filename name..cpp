#include <iostream>
#include <cmath>

int main(){
        
        std::string name;

        std::cout << "Enter your name: ";
        std::getline(std::cin, name);

        //name.append("@gmail.com");

        //std::cout << "Hello " << name;

        //std::cout << name.at(1);

        //name.insert(0, "@");

        //std::cout << name.find(' ');
        name.erase(0,3);

        std::cout << name;
    
    return 0;
}