#include <bits/stdc++.h>
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