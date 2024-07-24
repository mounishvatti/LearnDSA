#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int func(const vector<int> &arr, int k)
{
    int l_sum = 0;
    int r_sum = 0;
    int n = arr.size();
    int max_sum = 0;

    for (int i = 0; i < k; i++)
    {
        l_sum += arr[i];
        max_sum = l_sum;
    }

    int r_index = n - 1;

    for (int i = k - 1; i >= 0; i--)
    {
        l_sum = l_sum - arr[i];
        r_sum += arr[r_index];
        r_index--;

        max_sum = max(max_sum, l_sum + r_sum);
    }
    return max_sum;
}

int main()
{
    vector<int> arr = {8, 2, 9, 4, 5, 6, 0, 1, 9};
    int k = 4;
    cout << func(arr, k);
}