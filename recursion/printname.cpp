#include<bits/stdc++.h>
using namespace std;

void printName(int i,int n){
    if(i>n){
        return;
    }

    cout << "Mounish" << endl;
    i++;

    printName(i,n);
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    printName(1,n);

    return 0;
}