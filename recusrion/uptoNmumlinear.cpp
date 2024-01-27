// print upto N numbers using recursion linearly

#include <bits/stdc++.h>
using namespace std;

void print(int i, int x){
    if(i>x) return;

    cout << i << " ";
    i++;
    print(i, x);
}

int main(){
    int x = 5;
    // cout << "Enter: ";
    // cin >> x;

    print(1, x);

    return 0;
}