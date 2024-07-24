#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <unordered_map>

using namespace std;

// optimal approach 

int solve(vector<int> &fruits){
    int start = 0;
    int end = 0;
    int maxlen = 0;
    unordered_map<int, int>fruitCount;

    for(end = 0; end<fruits.size(); end++){
        fruitCount[fruits[end]]++;

        while(fruitCount.size() > 2){
            fruitCount[fruits[start]]--;
            if(fruitCount[fruits[start]]==0){
                fruitCount.erase(fruits[start]);
            }
            start++;
        }
        maxlen = max(maxlen, end-start+1);
    }
    return maxlen;
}

int main()
{
    vector<int> fruits = {3, 3, 3, 1, 2, 1, 1, 2, 3, 3, 4};
    int maxlen = 0;
    for (int i = 0; i < fruits.size(); i++)
    {
        set<int> s;
        for (int j = i; j < fruits.size(); j++)
        {
            s.insert(fruits[j]);
            if(s.size() <= 2) maxlen = max(maxlen, j-i+1);
            else break;
        }
    }
    cout << maxlen << endl;

    int ans = solve(fruits);

    cout << ans << endl;
}