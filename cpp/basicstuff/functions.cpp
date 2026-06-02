#include <iostream>

int addition(int a, int b);
int substraction(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main(){
    int option, num1, num2, c;

    std::cout << "---Pick an option---";
    std::cout << "\n1. Addition";
    std::cout << "\n2. Substraction";
    std::cout << "\n3. Multiply";
    std::cout << "\n4. Divide";
    std::cout << "\n\nEnter your option(1-4): ";
    std::cin >> option;

    std::cout << "\nEnter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "\n";

    switch(option){
        case 1:
            std::cout << "The sum is: "<< addition(num1,num2) << "\n\n"; 
            break;
        case 2:
            std::cout << "The difference is: "<< substraction(num1,num2) << "\n\n";
            break;
        case 3:
            std::cout << "The product is: "<< multiply(num1,num2) << "\n\n";
            break;
        case 4:
            std::cout << "The quotient is: "<< divide(num1,num2) << "\n\n";
            break;
        default:
            std::cout << "Invalid option";
    }

    return 0;
}

int addition(int a, int b){
    return a+b;
}

int substraction(int a,int b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

int divide(int a, int b){
    if(b==0){
        std::cout << "Error: Division by zero";
        return 0;
    }
    return a/b;
}