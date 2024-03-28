#include <bits/stdc++.h>
using namespace std;

int main(){
    int size = 6;
    int arr[size] = {13,46,24,52,20,9};
    for (int i = 0; i <= size-1 ; i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

// O(N^2) - worst/avg case 
// O(N) - best case