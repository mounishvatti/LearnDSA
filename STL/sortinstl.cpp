#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first > p1.first) return true;
    return false;
}

int main() {

    int a[5]={1,5,2,8,3};
    sort(a,a+5);

    for(int i = 0; i<5; i++){
         cout << a[i];
    }

    pair<int,int> p[] = {{1,2},{2,1},{4,1}};
    sort(p,p+3,comp);

    //cout << p;

    string s = "213";

    sort(s.begin(),s.end());

    do{
        cout << s << endl;
    }while(next_permutation(s.begin(),s.end()));

    int arr[5] = {1,34,5,2,9};

    // maximum element of the array
    int max = *max_element(arr,arr+5);
    cout << max << endl;

    //minimum element of the array
    int min = *min_element(arr,arr+5);
    cout << min;

    return 0;
}