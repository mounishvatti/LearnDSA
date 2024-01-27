#include <bits/stdc++.h>
using namespace std;

int func(int sum){
    if (sum == 0) return 0;
    return sum + func(sum-1);
}

//5 + func(4) -> 4 + func(3) -> 3 + func(2) -> 2 + func(1) -> 1 + func(0) -> returns 0

// 1 + 0(func(0)) = 1
// 2 + 1(func(1)) = 3
// 3 + 3(func(2)) = 6
// 4 + 6(func(3)) = 10
// 5 + 10(func(4)) = 15

int main(){
    int n = 5;
    cout << func(5); 

    return 0;
}