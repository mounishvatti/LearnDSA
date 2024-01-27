#include <bits/stdc++.h>
using namespace std;

// O(N^2) - worst/avg case 
// O(N) - best case

int arr[6] = {13,46,24,52,20,9};

void bubbleSort(int arr[], int n){
    // Sorting the array using bubble sort algorithm
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 0; j <= i-1; j++)
        {
            // push max element to the right & compare adjacent elements and swap them if needed
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }  
        }
    }
}

int main()
{
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,size);

    //print the sorted array
    cout << "The sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}