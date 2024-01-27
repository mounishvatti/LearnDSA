#include<bits/stdc++.h>
using namespace std;

int main(){
    /*

    Features:
    (i) Not Sorted
    (ii) But Unique

    */

    unordered_set<int>us;
    us.insert(10);
    us.insert(15);
    us.insert(17);
    us.insert(5);
    us.insert(1);

    //values can be in any order

    //Time complexity: O(1)
    // no lower_bound or upper_bound functions

    //Worst case O(N)

    return 0;
}