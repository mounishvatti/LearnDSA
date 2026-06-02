#include<iostream>
#include<vector>
using namespace std;

// Approach 1: Linear search
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int first = -1;
    int last = -1;

    for(int i=0; i<n; i++){
        if(arr[i]==k){
            if(first==-1){
                first = i;
            }
            last = i;
        }
    }
    return {first, last};
}

// Approach 2: Using upper bound and lower bound

// Approach 3: Code written from scratch using binary search

int main(){

}