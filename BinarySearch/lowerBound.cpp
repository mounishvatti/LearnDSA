#include <iostream>
#include<vector>
using namespace std;

/*
The primary objective of the Binary Search algorithm is to efficiently determine the appropriate half to eliminate, 
thereby reducing the search space by half. It does this by determining a specific condition that ensures that the target is not present in that half.

Lower bound: The lower bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.
The lower bound is the smallest index, ind, where arr[ind] >= x. But if any such index is not found, the lower bound algorithm returns n i.e. size of the given array.
*/

int lowerBound (vector<int>& arr, int val){
    int n = arr.size();

    for(int i = 0; i<n; i++){
        if(arr[i]>=val){
            return i;
        }
    }
    return n;
}

int Binarysearch(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid]>target){
            high = mid - 1;
        }
        else low = mid + 1;
    }

    return -1; // not found
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,13};

    int result = Binarysearch(arr, 13);

    if(result == -1){
        cout << "Element not found";
    }else{
        cout << "Element  is present at index "<< result+1 << endl;
    }

    int lb = lowerBound(arr, 7);

    cout << "Lower Bound is: "<< lb <<endl;

    return 0;
}