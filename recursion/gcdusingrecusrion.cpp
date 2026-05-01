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

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a > b)
    {
        return gcd(a - b, b);
    }

    return gcd(a, b - a);
}

int main()
{
    int a = 15;
    int b = 5;
    cout << "GCD of " << a << " and " << b << " is: ";
    cout << gcd(a, b);

    return 0;
}
