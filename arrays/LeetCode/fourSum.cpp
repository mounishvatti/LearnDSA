#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSumBrute(vector<int> &arr, int target)
{ // brute force ~ O(N^4)
    int n = arr.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if (arr[i] + arr[j] + arr[k] + arr[l] == target)
                    {
                        st.insert({arr[i], arr[j], arr[k], arr[l]});
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

// better approach

vector<vector<int>> fourSumBetter(vector<int> &arr, int target)
{ // better approach ~ O(N^3) + O(log M)
    int n = arr.size();
    set<vector<int>> st;
    unordered_set<int> hashset;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int val = target - (arr[i] + arr[j] + arr[k]);
                if (hashset.find(val) != hashset.end())
                {
                    st.insert({arr[i], arr[j], arr[k], val});
                }
                hashset.insert(arr[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

// optimal approach

vector<vector<int>> fourSumOptimal(vector<int> &arr, int target)
{ // optimal
    int n = arr.size();
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (j > i + 1 && arr[i] == arr[j - 1])
                continue;

            int k = j + 1;
            int l = n - 1;

            while (k < l)
            {
                int sum = arr[i] + arr[j] + arr[k] + arr[l];
                if (sum < target)
                {
                    k++;
                }
                else if (sum > target)
                {
                    l--;
                }
                else
                {
                    ans.push_back({arr[i], arr[j], arr[k], arr[l]});
                    // Skip duplicates for the third element
                    while (k < l && arr[k] == arr[k + 1])
                        k++;
                    // Skip duplicates for the fourth element
                    while (k < l && arr[l] == arr[l - 1])
                        l--;
                    k++;
                    l--;
                }
            }
        }
    }

    return ans;
}