/*
Longest Subarray With Sum K(positives)

Problem statement: You are given an array 'a' of size 'n' and an integer 'k'.

Find the length of the longest subarray of 'a' whose sum is equal to 'k'.

Example :
Input: ‘n’ = 7 ‘k’ = 3
‘a’ = [1, 2, 3, 1, 1, 1, 1]

Output: 3

Explanation: Subarrays whose sum = ‘3’ are: [1, 2], [3], [1, 1, 1] and [1, 1, 1]

Here, the length of the longest subarray is 3, which is our final answer.

*/

#include <bits/stdc++.h>
using namespace std;

// brute force method
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    // Write your code here
    int res = 0;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        long long s = 0;
        for (int j = i; j < n; j++)
        {
            s += a[j];
            if (s == k)
            {
                res = max(res, j - i + 1);
            }
        }
    }
    return res;
}

// optimized approach using hashing
int longestSubarrayWithSumKHashing(vector<int> a, long long k)
{
    int n = a.size(); // size of the array.

    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        // calculate the prefix sum till index i:
        sum += a[i];

        // if the sum = k, update the maxLen:
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        long long rem = sum - k;

        // Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        // Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size(); // size of the array.

    int left = 0, right = 0; // 2 pointers
    long long sum = a[0];
    int maxLen = 0;
    while (right < n) {
        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        // if sum = k, update the maxLen i.e. answer:
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        // Move forward thw right pointer:
        right++;
        if (right < n) sum += a[right];
    }

    return maxLen;
}

int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = longestSubarrayWithSumK(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

// if array contains negative numbers

#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    int n = nums.size();
    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;

        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}