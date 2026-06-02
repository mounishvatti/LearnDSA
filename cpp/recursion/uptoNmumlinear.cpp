// print upto N numbers using recursion linearly

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

void print(int i, int x){
    if(i>x) return;

    cout << i << " ";
    i++;
    print(i, x);
}

int main(){
    int x = 5;
    // cout << "Enter: ";
    // cin >> x;

    print(1, x);

    return 0;
}