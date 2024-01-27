#include <bits/stdc++.h>
using namespace std;

// using 2 variables l(left index) & r(right index);

void revarray(int arr[], int l, int r){
    if(l >= r) return;

    swap(arr[l],arr[r]);
    revarray(arr, l+1, r-1);
}
int main(){
    int n = 5;
    int array[5] = {1,2,3,4,5};
    cout << "Original Array: ";
    for (int i=0 ;i<5 ;i++){
        cout << array[i] << " ";
    }
    cout << endl;
    revarray(array, 0, n-1);

    cout << "Reversed Array: ";
    for (int i=0 ;i<5 ;i++){
        cout << array[i] << " ";
    }

    return 0;
}