#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 7789;
    int num = n;
    int count = 0;
    int digit;
    // to print the digits of the number

    while(n>0){
        digit = n%10;
        n = n/10; 
        cout <<  digit << endl;  
        if(digit!=0 && num%digit==0){
            count++;
        }
    }
    
    cout << num << endl;
    cout << count;

}