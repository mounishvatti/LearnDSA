#include <bits/stdc++.h>
using namespace std;

// Second largest element, most optimal method O(n);

int main() {
	
	int arr[9]  = {1,8,6,2,5,4,8,3,7};

	int largest = arr[0];
	int second_largest = 0;

	for(int i=1; i<9; i++){
		if(arr[i]>largest){
			largest = arr[i];
		}
		if(arr[i]>second_largest && arr[i]!=largest){
			second_largest = arr[i];
		}
	}

	cout << largest << " " << second_largest;

    return 0;
}
