/*
1358. Number of Substrings Containing All Three Characters - (Medium)
Given a string s consisting only of characters a, b and c.
Return the number of substrings containing at least one occurrence of all these characters a, b and c.
*/

#include <bits/stdc++.h>
using namespace std;

// optimal approach - 1
int solve(string str, int n) {
    int count = 0;
    vector<int> lastseen(3, -1); // Assuming the string only contains 'a', 'b', 'c'
    for(int i = 0; i < n; i++) {
        lastseen[str[i] - 'a'] = i;
        
        // Check if all characters 'a', 'b', 'c' have been seen
        if(lastseen[0] != -1 && lastseen[1] != -1 && lastseen[2] != -1) {
            // Add the number of substrings ending at index i with exactly 3 unique characters
            count += 1 + min({lastseen[0], lastseen[1], lastseen[2]});
        }
    }
    return count;
}

// optimal approach - 2
int solve2(string str, int n) {
    int count = 0;
    int start = 0;
    unordered_map<char, int> mpp;
    for(int end = 0; end < n; end++) {
        mpp[str[end]]++;
        while(mpp.size() > 3) {
            count += n - end;
            mpp[str[start]]--;
            if(mpp[str[start]] == 0) {
                mpp.erase(str[start]);
            }
            start++;
        }
    }
    return count;
}

// brute force
int main()
{
    string str = "bbacba";
    int n = str.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        unordered_map<char, int> mp;
        for (int j = i; j < n; j++)
        {
            mp[str[j]]++;
            if (mp.size() == 3)
            {
                count += n - j;
                break;
            }
        }
    }
    int ans = solve(str, n);
    cout << count << endl;
    cout << ans << endl;
}