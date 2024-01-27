#include<bits/stdc++.h>
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
    priority_queue<int, vector<int>, greater<int>> pq;
    
    pq.push(1); // {1}
    pq.push(2); // {1, 2}
    pq.push(3); // {1, 2, 3}
    pq.emplace(7); // {1, 2, 3, 7}
    pq.push(5); // {1, 2, 3, 5, 7}

    cout << pq.top(); // prints 1

    return 0;
}