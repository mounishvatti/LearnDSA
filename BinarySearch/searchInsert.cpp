#include <iostream>
#include <vector>

using namespace std;
/*
You are given a sorted array 'arr' of distinct values and a target value 'm'.

You need to search for the index of the target value in the array.

Note:
If the value is present in the array, return its index.
If the value is absent, determine the index where it would be inserted in the array while maintaining the sorted order. 
*/

int search(vector<int> &arr, int target)
{
    int size = arr.size();
    int low = 0;
    int high = size - 1;
    int ans = size;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] >= target)
        {   
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 6, 7, 8, 9};

    return 0;
}