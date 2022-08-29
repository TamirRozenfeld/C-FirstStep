#include <iostream>


int main()
{
    
    std::string name = "Tamir";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::string students[] = {"Tamir", "Eran", "David", "Yaniv"};

    std::cout << sizeof(students)/sizeof(std::string) << " element \n";
     

    return 0;
}