#include <bits/stdc++.h>
using namespace std;
int main() {
    int val;
    int n, m; cin >> n >> m;
    if(n==0){
        return m;
    }
    return n;

    for(int i=0; i<=min(n,m); i++){
        if(m%i==0 && n%i==0){
            val = i;
        }
    }
    cout << "GCD: "<<val<<endl;

    return 0;
}