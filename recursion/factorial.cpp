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

int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}

