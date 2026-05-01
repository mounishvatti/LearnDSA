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
int trap(vector<int> &height){
    int n = height.size();
    int lmax = height[0];
    int rmax = height[n - 1];
    int lpos = 1;
    int rpos = n - 2;
    int water = 0;
    while (lpos <= rpos){
        if (height[lpos] >= lmax){
            lmax = height[lpos];
            lpos++;
        }
        else if (height[rpos] >= rmax){
            rmax = height[rpos];
            rpos--;
        }
        else if (lmax <= rmax && height[lpos] < lmax){
            water += lmax - height[lpos];
            lpos++;
        }
        else{
            water += rmax - height[rpos];
            rpos--;
        }
    }
    return water;
}
int main(){
    vector<int>height;
    int n;
    cin>>n;
    while(n--){
        int val;
        cin>>val;
        height.push_back(val);
    }
    int result = trap(height);
    cout << result;

    return 0;
}