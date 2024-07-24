// Maximum subarray sum

#include <bits/stdc++.h>
using namespace std;

int maxSubarraySumBrute(vector<int> &arr, int n)
{ // brute approach
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k < j; k++)
            {
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int maxSubarraySumBetter(vector<int> &arr, int n)
{ // better approach
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        int currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            maxSum = max(maxSum, currSum);
        }
    }
    return maxSum;
}

int maxSubarraySumOptimal(vector<int> &arr, int n)
{ // optimal approach
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];

        if (currSum > maxSum)
            maxSum = currSum;

        if (currSum < 0)
            currSum = 0;
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    int n = arr.size();

    int ans1 = maxSubarraySumBrute(arr, n);
    int ans2 = maxSubarraySumBetter(arr, n);
    int ans3 = maxSubarraySumOptimal(arr, n);

    cout << "Brute: " << ans1 << endl;
    cout << "Better: " << ans2 << endl;
    cout << "Best: " << ans3 << endl;
}