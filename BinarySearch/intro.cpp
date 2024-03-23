#include <iostream>
#include<vector>
using namespace std;

// normal approach
int BinarySearch(vector<int>&arr, int target){
	int size = arr.size();
	int low = 0;
	int high = size - 1;
	
	
	while(low <= +high){
		int mid = (high+low)/2;
		if(arr[mid] == target) return mid;
		else if(target > arr[mid]) low = mid+1;
		else high = mid - 1;
	}
	return -1;
}

int main(){
    int n;
    vector<int>arr;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    cout << "Enter elements of the array in sorted format " << endl;
    
    for (int i = 0; i < n; i++) {
    	int ele;
    	cout << "Enter value of pos " << i+1 << " :";
    	cin >> ele;
    	arr.push_back(ele);
    }
    
    int searchNum;
    
    cout << "Enter the number you want to search: ";
    cin >> searchNum;
    
    int ind = BinarySearch(arr, searchNum);
    if(ind == -1) cout << "Element not found in the array" << endl;
    else{
    	cout << "The element is found at position: " << ind+1 << endl;
    }
    
	return 0;
}

