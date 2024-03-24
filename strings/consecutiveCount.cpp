#include<bits/stdc++.h>
using namespace std;

/*
Question)

Given a string in which the same character occurs in many consecutive character elements. Find the characters that have even frequency and are consecutive, display the sum of all even consecutive count.

*/

int main(){

    string val = "aaabbaaccccdddd";
    int count = 1;
    int sum = 0;
    for(int i=0; i<val.length(); i++){
        if(val[i]==val[i+1]){
            count++;
        }
        else {
            if(count%2==0){
                sum+=count;
            }
            count = 1;
        }
    }

    cout << sum << endl;
    return 0;
}