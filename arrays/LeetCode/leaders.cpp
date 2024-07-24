#include<bits/stdc++.h>
using namespace std;

vector<int> findLeader(vector<int>&arr){ // brute force // O(N^2)
    int n = arr.size();
    bool leader;
    vector<int>res;
    for(int i=0; i<n; i++){
        leader = true;
        for(int j=i+1; j<n; j++){
            if(arr[j] > arr[i]){
                leader = false;
                break;
            }
        }
        if(leader == true) res.push_back(arr[i]);
    }
    return res;
}

// optimal solution
vector<int> findLeaderOpt(vector<int>&arr){  // O(N)
    int n = arr.size();
    int max = INT_MIN;
    vector<int>res;

    for(int i=n-1; i>=0; i--){
        if(arr[i] > max){
            max = arr[i];
            res.push_back(arr[i]);
        }
    }   
    return res;
}

int main(){
    vector<int>arr = {10,22,12,3,0,6};

    vector<int>ans = findLeader(arr);

    for(auto i: ans){
        cout<<i<<" ";
    }

    cout << endl;

    vector<int>ans2 = findLeaderOpt(arr);

    for(auto it: ans2){
        cout<<it<<" ";
    }
}
