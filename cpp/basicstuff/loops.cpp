#include <iostream>
int main(){
    int number;

// Types of loops:-
/*
    1) Do-While loop - execute the block of code first 
                        then repeat again if condition is true.

    2) While loop - check whether the condition is true 
                    then execute the block code.

    3) For loop - execute a block of code for a specified amount of times.
*/

    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;

    } while(number < 0);

// --------------------------------------------------

    while(number < 0){
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }

// --------------------------------------------------

    for(int i = 0; i <= 10; i++){
        std::cout << i << std::endl;
    }

    // Break & Continue

    // break; - break out of the loop
    // continue; - skip current iteration

    for(int i = 0; i <= 10; i++){
        if(i == 5){
            break; // break out of the loop
        }
        std::cout << i << std::endl;
    }

    for(int i = 0; i <= 10; i++){
        if(i == 5){
            continue; // skip current iteration
        }
        std::cout << i << std::endl;
    }

    return 0;
}