#include <iostream>

enum Day { sunday=0, monday=1, tuesday=2, wednesday=3};

int main()
{   

Day today = tuesday;

switch (today)
{
case sunday: std::cout << "It's sunday";
    break;
case monday: std::cout << "It's monday";
    break;
case tuesday: std::cout << "It's tuesday";
    break;
case wednesday: std::cout << "It's wednesday";
    break;
}

    return 0;
}