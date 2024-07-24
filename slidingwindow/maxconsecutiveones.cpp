#include<iostream>
#include<vector>

using namespace std;

int func(const vector<int>&arr, int k){ // brute force
    int n = arr.size();
    int max_len = 0;
    for(int i=0; i<n; i++){
        int count_0 = 0;
        for(int j=i; j<n; j++){
            if(arr[j] == 0){
                count_0++;
            }
            if(count_0 <= k) {
                max_len = max(max_len, j-i+1);
            }
            else{
                break;
            }
        }
    }
    return max_len;
}

// better approach - 2 pointers
int func2(const vector<int>&arr, int k){
    int n = arr.size();
    int max_len = 0;
    int left = 0;
    int right = 0;
    int zeros = 0;
    while(right < n){
        if(arr[right] == 0) zeros++;
        while(zeros > k){
            if(arr[left] == 0) zeros--;
            left++;
        }
        if(zeros <= k){
            max_len = max(max_len, right-left+1);
        }
        right++;
    }
    return max_len;
}

// optimal approach

int func3(const vector<int>&arr, int k){
    int n = arr.size();
    int max_len = 0;
    int left = 0;
    int right = 0;
    int zeros = 0;
    while(right < n){
        if(arr[right] == 0) zeros++;
        if(zeros > k){
            if(arr[left] == 0) zeros--;
            left++;
        }
        if(zeros <= k){
            max_len = max(max_len, right-left+1);
        }
        right++;
    }
    return max_len;
}

int main(){
    vector<int>arr = {1,1,1,1,0,0,0,1,1,1,1,1,0};
    int n = arr.size();
}