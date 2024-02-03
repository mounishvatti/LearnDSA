#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, int n)
{   
    if(i >= n){
        return true;
    }

    if(s[i]!=s[n]){
        return false;
    }

    return isPalindrome(s, i+1, n-1);
}
int main()
{
    string name = "MADAM";
    
    if(isPalindrome(name, 0, name.length()-1)) cout << "YES";
    else cout << "NO";

    return 0;
}

