#include<iostream>
using namespace std;

// check if the ith bit is set or not

bool check1(int n, int i){
    if(n & (1 << i) > 0) return true; // using left shift
    else return false;
}

bool check2(int n, int i){
    if((n >> i)& 1 == 0) return false; // using right shift
    else return true;
}

int main(){
    int n = 13;
    int i = 2;
    cout << check1(n, i) << endl;
    cout << check2(n, i) << endl;
}