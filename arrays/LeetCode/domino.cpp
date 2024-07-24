/** 
 * * 1007. Minimum Domino Rotations For Equal Row 

 * ! (Medium)

 * ? https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/description/

    In a row of dominoes, tops[i] and bottoms[i] represent the top and bottom halves of the ith domino. (A domino is a tile with two numbers from 1 to 6 - one on each half of the tile.)

    We may rotate the ith domino, so that tops[i] and bottoms[i] swap values.

    Return the minimum number of rotations so that all the values in tops are the same, or all the values in bottoms are the same.

    If it cannot be done, return -1.
**/

#include <bits/stdc++.h>
using namespace std;

// Approach 1
int check(vector<int> &tops, vector<int> &bottoms, int num)
{
    int countTop = 0, countBottom = 0;
    for (int i = 0; i < tops.size(); i++)
    {
        if (tops[i] != num && bottoms[i] != num)
            return -1;
        else if (tops[i] != num)
            countTop++;
        else if (bottoms[i] != num)
            countBottom++;
    }
    return min(countTop, countBottom);
}
int minDominoRotations(vector<int> &tops, vector<int> &bottoms)
{
    int res1 = check(tops, bottoms, tops[0]);
    int res2 = check(tops, bottoms, bottoms[0]);

    return (min(res1, res2) < 0) ? max(res1, res2) : min(res1, res2);
}

// Approach 2
int minDominoRotationsBetter(vector<int>& tops, vector<int>& bottoms) {
    vector<int> topCount(7, 0), bottomCount(7, 0), sameCount(7, 0);
    int n = tops.size();
    
    for (int i = 0; i < n; ++i) {
        topCount[tops[i]]++;
        bottomCount[bottoms[i]]++;
        if (tops[i] == bottoms[i]) {
            sameCount[tops[i]]++;
        }
    }
    
    for (int i = 1; i <= 6; ++i) {
        if (topCount[i] + bottomCount[i] - sameCount[i] == n) {
            return n - max(topCount[i], bottomCount[i]);
        }
    }
    
    return -1;
}


int main()
{
    vector<int>tops = {2,1,2,4,2,2};
    vector<int> bottoms = {5,2,6,2,3,2};

    int ans = minDominoRotations(tops,bottoms);

    cout << ans << endl;
}