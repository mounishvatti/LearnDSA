#include<bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int l = a[0];
    int s = a[0];
    int sl = -1;
    int ss = INT_MAX;

    for(int i=0; i<n; i++){
        if(a[i]>l){
            l=a[i];
        }
        if(a[i]<s){
            ss = s;
            s=a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]>sl && a[i]!=l){
            sl=a[i];
        }
        if(a[i]<ss && a[i]!=s){
            ss=a[i];
        }
    }
    return {sl, ss};
}
