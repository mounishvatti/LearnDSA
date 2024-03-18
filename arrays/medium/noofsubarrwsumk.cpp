#include<bits/stdc++.h>
using namespace std;

class Solution { // O(N)
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size(); // take the size of the array
        
        int prefix[n]; // make a prefix array to store prefix sum
        
        prefix[0] = arr[0]; // for element at index at zero, it is same
        
        // making our prefix array
        for(int i = 1; i < n; i++){
            prefix[i] = arr[i] + prefix[i - 1];
        }
        
        unordered_map<int,int> mp; // declare an unordered map
        
        int ans = 0; // to store the number of our subarrays having sum as 'k'
        
        for(int i = 0; i < n; i++) // traverse from the prefix array
        {
            if(prefix[i] == k) // if it already becomes equal to k, then increment ans
                ans++;
            
            // now, as we discussed find whether (prefix[i] - k) present in map or not
            if(mp.find(prefix[i] - k) != mp.end()){
                ans += mp[prefix[i] - k]; // if yes, then add it our answer
            }
            
            mp[prefix[i]]++; // put prefix sum into our map
        }
        
        return ans; // and at last, return our answer
    }
};

int main(){

    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int k = 3; 
    int count = 0;
    cout << endl;

    // Time complexity: O(N^3) - Brute

    for(int i=0; i<size; i++){
        for(int j=i; j<size; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum+=arr[k];
                if(sum==k){
                    count++;
                }
            }
        }
    }

    // Time complexity: O(N^2) - Better

    for(int i=0; i<size; i++){
        int sum = arr[i];
        if(sum == k){
            count++;
        }
        for(int j=i+1; j<size; j++){
            sum+=arr[j];
            if(sum == k){
                count++;
            }
        }
    }

    // Optimal approach

    //refer class solution

    return 0;
}