#include <bits/stdc++.h>
using namespace std;


//brute force approach

int f(int arr[], int num)
{
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int size;
    int a[size];
    cout << "Enter the number of elements: ";
    cin >> size;
    cout << endl;

    // Input array elements
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << " Enter the number to be searched for: ";
    int x;
    cin >> x;
    // Function call
    cout << "Number of times the number 4 appears in array is: " << f(a, x);

    return 0;
}