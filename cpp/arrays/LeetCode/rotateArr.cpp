#include <iostream>
#include <vector>

using namespace std;

vector<int> LeftRotate(vector<int>&arr){
	int size = arr.size();

	int first = arr[0];

	vector<int>result(size);

	for(int i = 0; i < size - 1; i++){
		result[i] = arr[i+1];
	}
	result[size - 1] = first;

	return result;
}

int main(){
	vector<int>arr = {1,2,3,4,5};

	LeftRotate(arr);
}

// by D places

vector<int> LeftRotate(vector<int>&arr, int places){
	int size = arr.size();

	if(size == places){
		return arr;
	}

	if(places > size){
		places = places % size;
	}

	vector<int>temp(places);

	for (int i = 0; i < places; i++)
	{
		temp[i] = arr[i];
	}

	vector<int>result(size);

	for(int i = 0; i < size - places; i++){
		result[i] = arr[i+1];
	}
	
	for (int i = 0; i < places; i++)
	{
		result[i + size - places] = temp[i];
	}

	return result;
}