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


vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    vector<int>v;

    if(n == 0){
        return v;
    }

    v=reverseArray(n-1, nums);
    v.insert(v.begin(), nums[n-1]);

}
