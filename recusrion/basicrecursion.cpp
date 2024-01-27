// print upto N numbers using recursion

#include <bits/stdc++.h>
using namespace std;

int i = 0;

void print(){

    if(i == 3){
        return;
    }
    
    cout << i << endl;
    i++;

    print();
    
}

int main(){
    print();
}