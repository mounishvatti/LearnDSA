#include <iostream>

int main(){

    const double PI = 3.14; //const -> constant (read-only) can't be changed

    double r, area, circumference;

    //std::cout << "Enter the radius of a circle: "; 
    std::cin >> r;

    area = PI * r * r;
    circumference = 2 * PI * r;
    
    std::cout << "The area of the circle is: " << area << std::endl;

    return 0;
}