// print upto N numbers using recursion

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

vector<int> print(int x){
    vector<int> v;
    
    if(x>0){
        v.push_back(x);
        --x;
        print(x);
    }

    sort(v.begin(), v.end());

    for(auto it : v){
        cout << it << " ";
    }
    
    return v;
}

int main(){
    int x;
    cout << "Enter: ";
    cin >> x;

    print(x);

    return 0;
}