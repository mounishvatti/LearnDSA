#include <iostream>
int main()
{
    // && - AND operator (checks if both the conditions are true)
    // || - OR operator (checks if atleast one condition is true)
    // ! - NOT operator (reverses the logical state of its operand)

    int temp;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    temp >= 0 && temp < 30 ? std::cout << "You can go out" : std::cout << "It's hot out there!";

    //or

    std::cout << (temp >= 0 && temp < 30 ? "You can go out" : "It's hot out there!");

    //or 

    if(temp >= 0 && temp < 30){
        std::cout << "You can go out";
    }
    else{
        std::cout << "It's hot out there!";
    }

    return 0;

    // Similarly with the other two types of logical operators 
}