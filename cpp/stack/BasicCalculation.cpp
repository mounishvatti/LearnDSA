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

// int calculate(string s)
// {
//     int i = 0;
//     return helper(s, i);
// }

int helper(string &s, int &i)
{
    int ans = 0, interim = 0;
    long long num = 0;
    char op = '+';
    while (i < s.size())
    {
        if (isdigit(s[i]))
        {
            num = 0;
            while (i < s.size() && isdigit(s[i]))
            {
                num = num * 10 + s[i] - '0';
                i++;
            }

            if (op == '+' || op == '-')
            {
                ans += interim;
                if (op == '-')
                    interim = -1 * num;
                else
                    interim = num;
            }
            else if (op == '*')
            {
                interim *= num;
            }
            else if (op == '/')
            {
                interim /= num;
            }
        }
        else if (s[i] == '(')
        {
            i++; // skip the '('
            num = helper(s, i);

            if (op == '+' || op == '-')
            {
                ans += interim;
                if (op == '-')
                    interim = -1 * num;
                else
                    interim = num;
            }
            else if (op == '*')
            {
                interim *= num;
            }
            else if (op == '/')
            {
                interim /= num;
            }
        }
        else if (s[i] == ')')
        {
            i++;   // skip the ')'
            break; // exit the current level of recursion
        }
        else
        {
            if (s[i] != ' ')
                op = s[i];
            i++;
        }
    }
    ans += interim;
    return ans;
}

int calculate(string s)
{
    int i = 0;
    return helper(s, i);
}

int main()
{
    string st;
    getline(cin,st);

    int result = calculate(st);

    cout<<result;

    return 0;
}
