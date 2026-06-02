#include <iostream>

int main(){
    
    std::cout << "Enter your full name: ";
    std::string name;
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;

    std::cout << "Hi " << name << " I see, you are " << age << " years old." << std::endl;

    return 0;
}

