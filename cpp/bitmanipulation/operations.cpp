#include<iostream>
#include <climits>
using namespace std;

// AND, OR, XOR, SHIFT, 

int main(){
    int n1 = 13;
    int n2 = 7;
    int val1 = n1 & n2;
    int val2 = n1 | n2;
    int val3 = n1 ^ n2;
    int val4 = n1 >> 1;

    cout << "AND: " << val1 << endl;
    cout << "OR: " << val2 << endl;
    cout << "XOR: " << val3 << endl;
    cout << "RIGHT SHIFT: " << val4 << endl;

    int max = INT_MAX;
    int min = INT_MIN;

    cout << max << endl;
    cout << min << endl;
}