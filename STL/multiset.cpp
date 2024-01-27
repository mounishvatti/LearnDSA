#include <bits/stdc++.h>

using namespace std;

int main(){
    /*

    Features:
    (i) Sorted
    (ii) But Not Unique

    */

    multiset<int>m;
    m.insert(1); // {1}
    m.insert(1); // {1, 1}
    m.insert(1); // {1, 1, 1}

    m.erase(1); // all the occurances of 1's are erased

    int count = m.count(1); // counts the no of 1's in the multiset
    
    m.erase(m.find(1)); // erases the 1st element

    return 0; 
}