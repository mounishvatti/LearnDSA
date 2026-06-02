#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <unordered_map>

using namespace std;

// optimal approach 

int solve(string &s, int k){
    int start = 0;
    int end = 0;
    int maxlen = 0;
    unordered_map<char, int>chars;

    for(end = 0; end<s.length(); end++){
        chars[s[end]]++;

        while(chars.size() > k){
            chars[s[start]]--;
            if(chars[s[start]]==0){
                chars.erase(s[start]);
            }
            start++;
        }
        maxlen = max(maxlen, end-start+1);
    }
    return maxlen;
}

int main()
{
    string str = "aaabbbccc";
    int k = 2;
    int maxlen = 0;
    for (int i = 0; i < str.length(); i++)
    {
        set<char> st;
        for (int j = i; j < str.length(); j++)
        {
            st.insert(str[j]);
            if(st.size() <= k) maxlen = max(maxlen, j-i+1);
            else break;
        }
    }
    cout << maxlen << endl;

    int ans = solve(str, k);

    cout << ans << endl;
}