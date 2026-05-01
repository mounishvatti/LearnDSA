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

int cnt = 0;
int main()
{
    string str = "aabaaacd";

    cout << "Enter the char: ";
    char ch;
    cin >> ch;
    int n = str.length();

    for (int i = 0; i < n; i++)
    {
        if (str[i] == ch)
        {
            cnt++;
        }
    }
    cout << "\nThe character '" << ch << "' appears " << cnt << " times";

    return 0;
}