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

