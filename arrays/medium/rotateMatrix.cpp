#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cin >> arr[i][j];
        }
    }
    // rotate matrix;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            swap(arr[i][j] = arr[j][i]);
        }
    }

    for(int i=0; i<n; i++){
        reverse(arr[i].begin(), arr[i].end());
    }
}