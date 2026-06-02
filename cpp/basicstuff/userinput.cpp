#include <iostream>
// using namespace std; -> not a good way of programming.
int main(){
    int age;
    std::string name;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name);  // to remove the existing buffer from the previous input.

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old" << std::endl;

    return 0;
}