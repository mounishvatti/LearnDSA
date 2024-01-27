#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    // Write your code here.
    if(n <= 1){
        return n;
    }
    int last = f(n-1);
    int slast = f(n-2);

    return last + slast;
}

int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << f(n);

    return 0;
}

//or

/*
vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> v;
    if(n == 1){
        v.push_back(0);
        return v;
    }

    int a = 0;
    int b = 1;
    int term;
    v.push_back(a);
    v.push_back(b);
    for(int i = 2; i < n; i++){
        term = a + b;
        a = b;
        b = term;
        v.push_back(term);
    }
    return v;
}
*/
