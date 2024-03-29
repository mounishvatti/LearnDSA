#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr, int n, int target){
    int low=0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target) return mid;

        if(arr[low]<=arr[mid]){ // left sorted
            if(arr[low]<=target && target<=arr[mid]){
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(arr[mid]<=target && target<=arr[high]){
                low = mid+1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int n = 7;
    int res = search(arr,n,6);
    cout << res;
    return 0;
}