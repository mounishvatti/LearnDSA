#include <bits/stdc++.h>
using namespace std;

set<int> removeDuplicates(vector<int>& nums) {

    set<int> s;
    for(auto it: nums){
        s.insert(it);
    }
	return s;     
 }

int main() {
	vector<int> v = {1,1,2};

	set<int> result = removeDuplicates(v);

	for(auto it: result){
		cout << it << " ";
	}

	return 0;
}

/*
Optimal Method:

int removeDuplicates(vector<int>& nums) {

    int n = nums.size();
    int i = 0;
    for(int j=1; j<n; j++){
    	if(nums[j]!=nums[i]){
    		nums[i+1]==nums[j];
    		i++;
    	}
    }
    return i+1;    
 }

*/