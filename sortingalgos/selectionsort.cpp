#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(n^2);

void SelectionSort(int arr[], int n){
    // Sorting the array using selection sort algorithm
    for (int i = 0; i <= n-2; i++)
    {
        int min_index = i; // assume the min index as 1st pos
        for (int j = i; j <= n-1; j++)
        {
            if (arr[j] < arr[min_index]) min_index = j;
        }
        // swapping
        swap(arr[i], arr[min_index]);
    }
}

int main()
{
    int arr[6] = {13, 46, 24, 52, 20, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    // Sorting the array using selection sort algorithm
    SelectionSort(arr,size);
    
    // print the array after sorting
    cout << "The sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}