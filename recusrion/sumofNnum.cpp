#include <bits/stdc++.h>
using namespace std;

int printSum(int i, int sum){
    if(i < 1) return sum;
    
    return printSum(i-1,sum+i);
}

int main(){
    int num = 5;
    cout << printSum(5,0);

    return 0;
}

