#include <bits/stdc++.h>
using namespace std;

int main(){
    string st;
    cin>>st;
    bool res = true;
    for(int i = 0, j = st.length() - 1; i < j; i++, j--){
        if(st[i]==st[j]){
            continue;
        }
        else{
            res = false;
            break;
        }
    }
    if(res){
        cout<<"is a palindrome";
    }else{
        cout<<"is not a palindrome";
    }
    return 0;
}