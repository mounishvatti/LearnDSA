#include <iostream>
int main(){
    std::cout << "hej"; // syntax errors are compile time errors
    int value = 10/0; // runtime error
    std::cout << value;

    return 0;
}