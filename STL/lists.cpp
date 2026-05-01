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
    //lists are similar to vectors but they provide front functions as well
    // insert functions in vector take up a lot of time and they're costly since a vector has no front functions

    list<int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}
 
    ls.emplace_front(7); //{2, 4}

    for(auto i : ls){
        cout << i << " ";
    }

    // rest all same functions as vectors

    return 0;
}