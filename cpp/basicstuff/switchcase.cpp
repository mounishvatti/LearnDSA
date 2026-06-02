#include <iostream>
int main(){
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    switch(age){
        case 13:
            std::cout << "You are 13 years old." << std::endl;
            break;
        case 14:
            std::cout << "You are 14 years old." << std::endl;
            break;
        case 15:
            std::cout << "You are 15 years old." << std::endl;
            break;
        case 16:
            std::cout << "You are 16 years old." << std::endl;
            break;
        case 17:
            std::cout << "You are 17 years old." << std::endl;
            break;
        case 18:
            std::cout << "You are 18 years old." << std::endl;
            break;
        case 19:
            std::cout << "You are 19 years old." << std::endl;
            break;
        case 20:
            std::cout << "You are 20 years old." << std::endl;
            break;
        default:
            std::cout << "You are not between 13 and 20 years old." << std::endl;
            break;
    }
    return 0;
}