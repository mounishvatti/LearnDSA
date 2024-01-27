#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> de; // last in first out (LIFO)

    de.push_back(1); // {1}
    de.emplace_back(2); // {1,2}

    de.push_front(5); // {5,1,2}
    de.emplace_front(0); // {0,5,1,2}

    de.pop_back(); 
    de.pop_front();

    de.back();
    de.front();

    return 0;
}