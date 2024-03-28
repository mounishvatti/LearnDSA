#include <iostream>
using namespace std;

int sum(int arr[], int n){
  if(n<0) return 0;
  return sum(arr, n-1) + arr[n];
}

int main() {
  int size;
  cin >> size;

  int arr[size];
  for(int i=0; i<size; i++){
    cin >> arr[i];
  }

  cout << sum(arr, size);
}