#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long result = 0;
        long long power_2 = 1;
        for(int i=s.size()-1; i>=0; i--){
            int binary_digit = s[i] - '0'; // convert char to integer
            result+= (binary_digit*power_2);
            power_2*=2;
        }
        cout<<result<<endl;
    }
}

/*

for large values of n. The pow function returns a floating-point result, and when dealing with large integers, it may introduce rounding errors. This can lead to inaccuracies in the final result.

*/ 