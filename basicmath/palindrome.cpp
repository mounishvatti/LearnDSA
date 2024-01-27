#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 51415;
    int num = n;

    int revnum = 0;
    while(n>0){
        int ld = n%10;
        n/=10;
        revnum = revnum*10+ld;
    }

    if(num == revnum){
        cout << "true";
    } 

    else{
        cout << "false";
    }
    
    return 0;
}
