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

int main(){
    queue<int> q;  // FIFO 
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(3); // {1, 2, 3}

    q.back()+=5; // {1, 2, 8}

    cout << q.back(); // 8
    cout << q.front(); // 1

    q.pop(); // {1, 2, 8} -> {2, 8} [First in first out]
    
    return 0;
}