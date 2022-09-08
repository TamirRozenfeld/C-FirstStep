#include <iostream>
using namespace std;



int main(){
  
    std::string name = "Bro";
    int age = 31;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    
    std::string *pName = &name;
    int *pAge = &age;
    std::string *pfreePizzas = freePizzas;

    std::cout << *pName << endl;
    std::cout << *pAge << endl;
    std::cout << *pfreePizzas << endl;

    return 0;
}


