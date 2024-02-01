#include <bits/stdc++.h>
using namespace std;

// using only 1 variable i;

void revarray(int arr[], int i, int n)
{
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i]);
    revarray(arr, i + 1, n);
}
int main()
{
    int n = 5;
    int array[5] = {1, 2, 3, 4, 5};
    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    revarray(array, 0, n - 1);

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}