#include <bits/stdc++.h>
using namespace std;

// in a string using hash array
// usage of ASCII values
// auto casts into it's ASCII values

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << endl;

    int hash[256] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        hash[str[i]] += 1;
    }

    cout << "Enter the number of characters to be searched for: ";
    int x;
    cin >> x;
    cout << "Enter the characters: ";

    while (x--)
    {
        char ch;
        cin >> ch;

        cout << hash[ch] << endl;
    }

    return 0;
}