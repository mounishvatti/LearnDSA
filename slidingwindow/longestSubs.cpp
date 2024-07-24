// longest substring without repeating characters

#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

int funcLongestSubstring(string st) // brute force
{
    int n = st.length();

    int len = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++)
    {
        unordered_set<char> s;
        for (int j = i; j < n; j++)
        {
            if (s.find(st[j]) != s.end())
            {
                break;
            }
            len = j - i + 1;
            maxLen = max(len, maxLen);
            s.insert(st[j]);
        }
    }
    return maxLen;
}

// optimal approach
/*
    Initially take a hashvector of size 256 (as there are 256 characters present) and initialise all with -1.
    Then take a window of size 0 and start traversing the string.
    If the character is not present in the hashvector then add it to the hashvector and increment the window size (right++).
    If the character is present in the hashvector then increment the window size (left).
    Then compare the window size with the max window size and update the max window size if required.
    Then return the max window size.
*/

int longestSubs(string str)
{
    int n = str.length();
    int l = 0;
    int r = 0;
    int maxLen = 0;
    vector<int> hash(256, -1);
    while (r < n)
    {
        if (hash[str[r]] != -1)
        { // already present
            if (hash[str[r]] >= l)
            {
                l = hash[str[r]] + 1; // updating the left pointer
            }
        }
        int len = r - l + 1;
        maxLen = max(len, maxLen);
        hash[str[r]] = r;
        r++;
    }
    return maxLen;
}

int main()
{
    string s = "abcabcbb";
    cout << funcLongestSubstring(s);

    cout << "The length of the longest substring without repeating characters is: " << longestSubs(s) << endl;
    return 0;
}