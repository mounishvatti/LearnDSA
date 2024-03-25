#include <iostream>
#include <vector>
using namespace std;

/*
Floor: Largest number <= target
Ceil: smallest number >= target
*/

int ceil(vector<int> &arr, int target) // nothing but lower bound
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= target)
        {
            ans = arr[mid];
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return ans;
}

int floor(vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] <= target)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13};

    int floor_val = floor(arr, 12);

    cout << "Floor: " << floor_val << endl;

    int ceil_val = ceil(arr, 12);

    cout << "Ceil: " << ceil_val << endl;

    return 0;
}