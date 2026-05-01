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
    int maxArea(vector<int>& height) {
        int len = height.size();
        int l = 0;
        int r = len-1;
        int maxarea = 0;

        while(l<r){
            int currentarea = min(height[l],height[r])*(r-l);
            maxarea = max(maxarea,currentarea);
            
            if(height[l] <= height[r]){
                l++;
            }
            else{
                r--;
            }
        }

        return maxarea;
    }

};