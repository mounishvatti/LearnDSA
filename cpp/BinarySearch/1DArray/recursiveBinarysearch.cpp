#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>&arr, int low, int high, int target){
    if(low>high) return -1;

    int mid = (low+high)/2;

    if(target == arr[mid]) return mid;

    else if(target > arr[mid]){
        return search(arr, mid+1, high, target);
    } 
    else return search(arr, low, mid-1, target);
}

int main(){

    int n;
    vector<int>arr;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    cout << "Enter elements of the array in sorted format " << endl;
    
    for (int i = 0; i < n; i++) {
    	int ele;
    	cout << "Enter value of pos " << i+1 << ": ";
    	cin >> ele;
    	arr.push_back(ele);
    }
    
    int searchNum;
    
    cout << "Enter the number you want to search: ";
    cin >> searchNum;
    
    int ind = search(arr, 0, n-1, searchNum);
    if(ind == -1) cout << "Element not found in the array" << endl;
    else{
    	cout << "The element is found at position: " << ind+1 << endl;
    }

    return 0;
}