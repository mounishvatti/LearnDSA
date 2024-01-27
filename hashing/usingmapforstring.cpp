#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int n = str.length();

    map<char, int> mpp;
    
    for (int i = 0; i < n; i++)
    {
        mpp[str[i]]++; // precompute
    }

    cout << "Enter the number of chars to be searched for: ";
    int x;
    cin >> x;
    cout << "Enter the characters: ";

    while (x--)
    {
        char ch;
        cin >> ch;
        // fetch
        cout << mpp[ch] << endl;
    }

    return 0;
}

// log(N)