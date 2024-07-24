#include <iostream>
#include <algorithm>
using namespace std;

string toBinary(int n){
    if(n==0) return "0";
    string res = ""; 
    while (n > 0){
        if(n%2==1) res+="1";
        else res+="0";
        n=n/2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int toDecimal(string x){
    int p2 = 1;
    int num = 0;
    int len = x.length();
    for(int i = len - 1; i >= 0; i--){
        if(x[i] == '1') num = num + p2;
        p2 = p2*2;
    }
    return num;
}

int main(){
    int n = 13;
    string ans = toBinary(n);
    cout << ans << endl;
    int decimal = toDecimal(ans);
    cout << decimal << endl;
    return 0;
}