#include <iostream>
#include <ctime>

void happyBirthday(std::string name,int age){
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear you" << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You are " << age << " years old!" << '\n';
}

int main()
{
    std::string name = "Tamir";
    int age = 31;
    

    happyBirthday(name, age);
    happyBirthday(name, age);

    return 0;
}