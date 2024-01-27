#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"The elements of the array are: ";
    for(int i = 0; i<n; i++){
        cout << arr[i];
    }

    return 0;
}
