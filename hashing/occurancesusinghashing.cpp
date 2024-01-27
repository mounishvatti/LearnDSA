#include <bits/stdc++.h>
using namespace std;

// using hash array

int main()
{
    int size;
    int a[size];
    cout << "Enter the number of elements: ";
    cin >> size;
    cout << endl;

    // Input array elements
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    int hash[13] = {0};

    for (int i = 0; i < size; i++)
    {
        hash[a[i]] += 1;
    }

    cout << "Enter the number of integers to be searched for: ";
    int x;
    cin >> x;
    cout << "Enter the integers: ";

    while (x--)
    {
        int num;
        cin >> num;

        cout << hash[num] << endl;
    }

    return 0;
}