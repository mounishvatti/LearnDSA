#include <iostream>
#include <vector>
using namespace std;

/*
The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than the given key i.e. x.

The upper bound is the smallest index, ind, where arr[ind] > x.

But if any such index is not found, the upper bound algorithm returns n i.e. size of the given array. The main difference between the lower and upper bound is in the condition. For the lower bound the condition was arr[ind] >= x and here, in the case of the upper bound, it is arr[ind] > x.
*/

int upperBound(vector<int> &arr, int val)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = arr.size();
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > val)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return ans;
}

int Binarysearch(vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return -1; // not found
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13};

    int result = Binarysearch(arr, 13);

    if (result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element  is present at index " << result + 1 << endl;
    }

    int ub = upperBound(arr, 7);

    cout << "Lower Bound is: " << ub << endl;

    return 0;
}