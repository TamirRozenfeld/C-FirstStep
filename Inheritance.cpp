#include <iostream>

class Shape{
    public:
        double area;
        double volum;
};

class Cube : public Shape{
    public:

        double side;
        Cube(double side){
            this->side = side;
            this->area = side * side * 6;
            this->volum = side * side * side;
        }
};
class Sphare : public Shape{
    public:

        double radius;
        Sphare(double radius){
            this->radius = radius;
            this->area = 4 * 3.14159 * (radius * radius);
            this->volum = (4/3) * 3.14 * (radius*radius*radius);
        }
};
 
int main()
{   

    Sphare sphare(5);

    std::cout << "Area is: " << sphare.area << '\n';
    std::cout << "Volum is: " << sphare.volum << '\n';

    Cube cube(5);

    std::cout << "Area is: " << cube.area << '\n';
    std::cout << "Volum is: " << cube.volum << '\n';
  
  
    return 0;
}

