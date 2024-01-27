// print upto N numbers using recursion

#include <bits/stdc++.h>
using namespace std;

vector<int> print(int x){
    vector<int> v;
    
    if(x>0){
        v.push_back(x);
        --x;
        print(x);
    }

    sort(v.begin(), v.end());

    for(auto it : v){
        cout << it << " ";
    }
    
    return v;
}

int main(){
    int x;
    cout << "Enter: ";
    cin >> x;

    print(x);

    return 0;
}