#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// brute force method

int main(){
	vector<int> arr = {1,2,3,4,0,7,0,3,9,0};

	int n = arr.size();

	vector<int>temp(n);

	for(int i=0; i<n; i++){
		if(arr[i]!=0){
			temp.push_back(arr[i]);
		}
	}

	int Zcount = n - temp.size();

	while(Zcount--){
	 	temp.push_back(0);
	 }
	return 0;
}

// optimal approach - 2 pointer approach

// 1: find the first 0 in the array


int main(){
	vector<int> arr = {1,2,3,4,0,7,0,3,9,0};
	int n = arr.size();

	int j=-1;

	for(int i=0; i<n; i++){
		if(arr[i]==0){
			j = i;
			break;
		}	
	}

	for(int i=j+1; i<n; i++){
		if(arr[i]!=0){
			swap(arr[i], arr[j]);
			j++;
		}
	}
	
	return 0;
}
