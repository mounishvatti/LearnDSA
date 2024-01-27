#include <iostream>

int main(){
    int x,y,z;
    x=5;

    y=++x;
    z=x++;

    std::cout << "y = " << y << std::endl;
    std::cout << "z = " << z << std::endl;

    return 0;
}