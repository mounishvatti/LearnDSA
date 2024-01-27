#include <bits/stdc++.h>
using namespace std;

int main(){
/*
Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.

In a map, the key values are generally used to sort and uniquely identify the elements, while the mapped values store the content associated to this key. 
The types of key and mapped value may differ.

auto sorts the key values.
*/

    map <int, int> mp;
    
    map <int, string> m;

    map <int, pair<int, int>> mpp;

    map < pair<int, int>, int > myMap; 
    
    // <int, int>
    mp.insert({1,1}); 
    mp.insert({2,2}); 
    mp.insert({3,3}); 
    mp.insert({4,4});

    // Inserting values into the map <int, pair<int, int> >
    mpp.insert({1,{1,2}});
    mpp.insert({2,{2,3}});
    mpp.insert({3,{3,4}});
    mpp.insert({4,{4,5}});

    // <int, string>
    m.insert({1,"one"});
    m.insert({2,"two"});
    m.insert({3,"three"});
    m.insert({4,"four"});

    // Inserting values into the map <int, pair<int, int> >
    mpp[5] = make_pair(10, 20);
    mpp[6] = make_pair(30, 40);
    mpp[7] = make_pair(50, 60);

    // <pair<int, int>, int>
    myMap.insert({{1,2},1});
    myMap.insert({{2,3},2});
    myMap.insert({{3,4},3});
    myMap.insert({{4,5},4});

    // Accessing values in the map
    cout << "Value associated with key 2: (" << mpp[2].first << ", " << mpp[2].second << ")" << endl;
    cout << "Value associated with key 7: (" << mpp[7].first << ", " << mpp[7].second << ")" << endl;
    
    cout << m[1] << " " << m[2] << " " << endl;

    cout << mp[2] << endl;

    cout << myMap[make_pair(1,2)];

    // traversing through a map
    for(auto it: myMap){
        cout << it.first.first;
    }

    return 0;
}