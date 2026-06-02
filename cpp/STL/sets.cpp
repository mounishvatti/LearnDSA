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
    set<int>s;
    /*

    Features:
    (i) Sorted
    (ii) Unique

    */
    s.insert(1); // {1}
    s.insert(2); // {1, 2}
    s.emplace(2); // {1, 2} one more 2 is not added cuz it's already present
    s.insert(4); // {1, 2, 4}
    s.insert(3); // {1, 2, 3, 4}
    
    // {1, 2, 3, 4}
    auto it3 = s.find(3); 

    // {1, 2, 3, 4}
    auto it5 = s.find(5); // since 5 is not present in the set it will point after the st.end() i.e after 4.

    s.erase(1); // removes 1 from the set
    // s = {2, 3, 4}

    s.count(1); // prints the occurance of that value in the set. 
    // if present then 1, else 0.

    auto it4 = s.find(4);
    s.erase(it4); // erasing by providing the address

    // {1, 2, 3, 4, 5}
    auto it1 = s.find(2);
    auto it2 = s.find(4);
    s.erase(it1, it2); // {1, 4, 5} [first, last)

    // lower_bound()

    // {1, 2, 3, 4, 5, 6, 7, 9}
    auto lb2 = s.lower_bound(2);
    // iterator pointing towards 2 

    auto lb8 = s.lower_bound(8);
    // iterator pointing towards 10 since 8 is not present
    // next greater value or closest greater value in the provided set.

    // upper_bound()

    // {1, 2, 3, 4, 5, 6, 7, 9}
    auto ub2 = s.upper_bound(2); // iterator pointing towards 3 (next element to the provided value)

    auto ub8 = s.upper_bound(8); // iterator pointing towards 9 since 8 is not present

    auto ub10 = s.upper_bound(10); // iterator pointing towards the end since 10 is not present

    // O(log(N))

    return 0;
}