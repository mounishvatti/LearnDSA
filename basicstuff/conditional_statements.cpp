#include <iostream>

int main(){

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    //condition ? statement 1 : statement 2;

    age >= 18 ? std::cout << "You are eligible" : std::cout << "You're not eligible";
    //or
    std::cout << (age >= 18 ? "You are eligible" : "You're not eligible");

    // the same thing can be written in the form of if & else

    if(age>=18){
        std::cout << "You are eligible";
    }
    else{
        std::cout << "You're not eligible";
    }
    return 0;
}