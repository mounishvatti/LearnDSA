#include <bits/stdc++.h>
using namespace std;

int Longest_Consecutive_Subsequence(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end()); // 1,1,2,3,4,100,101,102
    int longest = 1;
    int count = 0;
    int last_smaller = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == last_smaller)
        {
            last_smaller = arr[i];
            count++;
        }
        else if (arr[i] != last_smaller)
        {
            count = 1;
            last_smaller = arr[i];
        }
        longest = max(longest, count);
    }
    return longest;
}

// optimal approach

int Longest_Consecutive_Subsequence_Opt(vector<int> &arr, int n)
{
    unordered_set<int> st;
    int longest = 1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int curr = it;
            count = 1;
            while (st.find(curr + 1) != st.end())
            {
                curr = curr + 1;
                count = count + 1;
            }
            longest = max(longest, count);
        }
    }

    return longest;
}

int main()
{
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    int n = arr.size();
    cout << Longest_Consecutive_Subsequence(arr, n) << endl;
    cout << Longest_Consecutive_Subsequence_Opt(arr, n) << endl;
}