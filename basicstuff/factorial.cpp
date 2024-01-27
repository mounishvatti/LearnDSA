#include <iostream>

long factorial(long n);
long fact(long a);

int main(){

    long number;

    std::cout << "Enter an number: ";
    std::cin >> number;

    std::cout << number << "!" << " = " << factorial(number) << "\n";
    std::cout << number << "!" << " = " << fact(number) << "\n";

    return 0;
}

long factorial(long n){

    if(n>1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}

long fact(long a){
    for (int i = a; i>1; i--){
        a = a*(i-1);
    }
    return a;
}