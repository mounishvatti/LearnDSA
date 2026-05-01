#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <array>
#include <utility>
#include <numeric>
#include <limits>
#include <climits>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> rotateArray(vector<int>& arr, int n) {
        int first = arr[0];
        for (int i = 0; i < n-1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = first;

        return arr;
    }
    bool check(vector<int>& nums) {
        int n = nums.size();

        for (int rotation = 0; rotation < n; rotation++) {
            bool sorted = true;
            for (int i = 1; i < n; i++) {
                if (nums[i] < nums[i - 1]) {
                    sorted = false;
                    break;
                }
            }
            if (sorted) {
                return true;
            }
            rotateArray(nums, n);
        }

        return false;
    }
};