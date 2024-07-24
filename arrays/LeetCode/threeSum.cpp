#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSumBrute(vector<int> &arr)
{ // brute force ~ O(N^3)
    int n = arr.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

vector<vector<int>> threeSumBetter(vector<int> &arr, int target)
{ // better solution - hashing ~ O(N^2)
    int n = arr.size();
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        set<int> hashset;
        for (int j = i + 1; j < n; j++)
        {
            int val = arr[i] + arr[j];
            int toBefound = target - val;
            if (hashset.find(toBefound) != hashset.end())
            {
                vector<int> temp = {arr[i], arr[j], toBefound};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

vector<vector<int>> threeSumOptimal(vector<int> &arr, int target)
{ // optimal solution
    int n = arr.size();
    vector<vector<int>> ans;

    // Sort the array to use the two-pointer technique
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        // Skip duplicates for the first element
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < target)
            {
                j++;
            }
            else if (sum > target)
            {
                k--;
            }
            else
            {
                ans.push_back({arr[i], arr[j], arr[k]});
                // Skip duplicates for the second element
                while (j < k && arr[j] == arr[j + 1])
                    j++;
                // Skip duplicates for the third element
                while (j < k && arr[k] == arr[k - 1])
                    k--;
                j++;
                k--;
            }
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {-1, 0, 1, 2, -1};
    int target = 0;
    vector<vector<int>> ans = threeSumOptimal(arr, target);
    for(auto i: ans){
        for(auto j: i){
            cout<<j<<" ";
        }
    }
}