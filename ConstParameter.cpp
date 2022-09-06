#include <iostream>
using namespace std;

void printInfo(const std::string name,const int age);
int main(){
    
    std::string name = "Tamir";
    int age = 31;

    printInfo(name, age);


    return 0;
}
void printInfo(const std::string name,const int age){
    
    std::cout << name << endl;
    std::cout << age << endl;
    
}


