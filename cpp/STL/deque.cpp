#include <deque>
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
#include <iostream>
using namespace std;

int main(){
    deque<int> de; // last in first out (LIFO)
    de.push_back(1); // {1}
    de.emplace_back(2); // {1,2}

    de.push_front(5); // {5,1,2}
    de.emplace_front(0); // {0,5,1,2}

    for(deque<int>::iterator it = de.begin(); it != de.end(); ++it) {
        cout << *it << " ";
    }

    de.pop_back();   // remove the last element {0,5,1}
    de.pop_front();   // remove the first element {5,1}

    de.back();        // return 1
    de.front();     // return 5

    return 0;
}