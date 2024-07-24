#include<bits/stdc++.h>
using namespace std;

// approach - 1
vector<int> twoSum(vector<int>&arr, int target){
    int n = arr.size();
    vector<int> ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]+arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return {-1, -1};
}

// approach - 2 hashmap
vector<int> twoSum(vector<int>&arr, int target){
    int n = arr.size();
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        int num = arr[i];
        int comp = target - num;
        if(mp.find(comp) != mp.end()){
            return {mp[comp], i};
        }
        mp[num] = i;
    }
    return {-1, -1};
}

// approach - 3 (2 pointer)
string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}


int main(){
    int i=0; 
    int j=1;
    vector<int> arr = {1,2,5,8,3,9};
    int k = 11;
    vector<int>ans = twoSum(arr, k);
    for(auto i: ans){
        cout << i << " ";
    }
}