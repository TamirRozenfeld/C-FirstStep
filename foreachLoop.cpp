#include <iostream>


int main()
{
    
    //std::string students[] = {"Eran", "David", "Tamir", "Yaniv"};
    int grades[] = {65, 72, 81, 93};
    
    for(int grade : grades)
    {
        std::cout << grade << '\n';
    }
  
    
    return 0;
}