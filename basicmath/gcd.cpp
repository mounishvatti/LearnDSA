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
int main() {
    int val;
    int n, m; cin >> n >> m;
    if(n==0){
        return m;
    }
    return n;

    for(int i=0; i<=min(n,m); i++){
        if(m%i==0 && n%i==0){
            val = i;
        }
    }
    cout << "GCD: "<<val<<endl;

    return 0;
}