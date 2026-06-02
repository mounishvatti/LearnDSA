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
// Best Approach O(N^2)
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int maxsum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += nums[j];
                if (maxsum < sum)
                {
                    maxsum = sum;
                }
            }
        }
        return maxsum;
    }
};

// Optimal approach

/*

for(int i = 0; i < n; i++){
    sum += nums[i];
    if (sum > maxsum)
    {
        maxsum = sum;
    }
    if (sum < 0)
    {
        sum = 0;
    }
}

*/
