#include<iostream>
using namespace std;

int func(int num){
    if(num == 2 || num == 3){
        return num-1;
    }
    int result = 1;

    while(num>4){
        num = num - 3;
        result = result * 3;
    }
    return (num*result);
}

int main(){
    int num;
    cin >> num;

    return 0;
}