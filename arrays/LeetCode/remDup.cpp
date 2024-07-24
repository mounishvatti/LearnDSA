#include <iostream>
#include <vector>

using namespace std;

vector<int> RemDup(vector<int>&arr){
	// 2 pointer approach;

	int i = 0;
	int j = 1;

	int n = arr.size();

	while (j<n){
		if (arr[i]==arr[j]) {
			j++;
		} else {
			i++;
			arr[i] == arr[j];
			j++;
		}
	}

	arr.resize(i+1);

	return arr;
}

int NumDup(vector<int>&arr){
	// 2 pointer approach;

	int i = 0;
	int j = 1;

	int n = arr.size();

	while (j<n){
		if (arr[i]==arr[j]) {
			j++;
		} else {
			i++;
			arr[i] == arr[j];
			j++;
		}
	}
	
	return i+1;
}

int main(){
	vector<int> arr;
}