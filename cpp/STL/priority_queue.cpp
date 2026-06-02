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
    priority_queue<int>pq; // MAXIMUM HEAP DEFAULT
    // Insert elements in the queue using push() method
    
    pq.push(1); // {1}
    pq.push(2); // {2, 1}
    pq.push(3); // {3, 2, 1}
    pq.emplace(7); // {7, 3, 2, 1}
    pq.push(5); // {7, 5, 3, 2, 1}

    cout << pq.top(); // prints 7

    // MINIMUM HEAP
    priority_queue<int, vector<int>, greater<int>> pqMin;
    
    pqMin.push(1); // {1}
    pqMin.push(2); // {1, 2}
    pqMin.push(3); // {1, 2, 3}
    pqMin.emplace(7); // {1, 2, 3, 7}
    pqMin.push(5); // {1, 2, 3, 5, 7}

    cout << pqMin.top(); // prints 1

    return 0;
}