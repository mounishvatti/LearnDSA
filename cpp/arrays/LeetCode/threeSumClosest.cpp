#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int threeSumClosest(vector<int> &nums, int target){
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int closestSum = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < n; i++){
        int j = i + 1;
        int k = n - 1;
        while (j < k){
            int currentSum = nums[i] + nums[j] + nums[k];
            if (abs(currentSum - target) < abs(closestSum - target)){
                closestSum = currentSum;
            }
            if (currentSum > target)
                k--;
            else if (currentSum < target)
                j++;
            else
                return currentSum;
        }
    }
    return closestSum;
}

int main(){
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    cout << threeSumClosest(nums, target);
    return 0;
}