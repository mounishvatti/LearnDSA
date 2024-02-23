#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    cout << "Enter sorted elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;

    int searchNum;
    cout << "Enter the number you want to search: ";
    cin >> searchNum;
    if(searchNum >= arr[low] && searchNum <= arr[mid]){
        for(int i=0; i<mid; i++){
            if(arr[i]==searchNum){
                cout<<"found: "<<arr[i]<<endl;
            }
        }
    }
    if(searchNum >= arr[mid] && searchNum <= arr[high]){
        for(int i=mid; i<high; i++){
            if(arr[i]==searchNum){
                cout<<"found: "<<arr[i]<<endl;
            }
        }
    }
}

