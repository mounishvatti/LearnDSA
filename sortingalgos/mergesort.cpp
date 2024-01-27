#include <bits/stdc++.h>
using namespace std;

// Merge Sort: Divide & merge mechanism

// Time complexity: O(n*Logn) {best, worst & avg}
// Space complexity: O(n)

vector<int> arr = {9, 4, 7, 6, 3, 1, 5};

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;    // declaring a temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1; // starting index of right half of arr

    // storing elements in the temporary array in a sorted manner
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;
    // using recusrion
    mergeSort(arr, low, mid);      // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);    // merging sorted halves
}

int main()
{
    int n = arr.size();
    
    // printing the original array
    cout << "Before Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // calling function and passing array, its size and starting index as 0
    mergeSort(arr, 0, n - 1);

    // printing the array after sorting
    cout << "After Sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}