#include <iostream>

int addnum(int a, int b){
    int sum = a + b;
    std::cout << sum;
    return sum;
}

int main(){
    std::cout << "Enter 2 integers: ";
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << "The sum of " << num1 << " and " << num2 << " is: ";

    addnum(num1,num2);

    return 0;
}