#include <bits/stdc++.h>
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
