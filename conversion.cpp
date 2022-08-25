#include<iostream>

int main(){

    //double x = (int)3.14;
    //std::cout << x;
    //char x = 100;
    //std::cout << x;

    int correct = 8; 
    int questions = 10;
    double score = (double)correct/questions * 100;
    std::cout << score << "%"; 

    //std::cout << (char)100;
    return 0;
}

