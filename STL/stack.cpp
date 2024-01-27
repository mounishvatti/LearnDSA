#include <bits/stdc++.h>
using namespace std;

int main(){

    stack<int> st;
    // Push elements to the Stack
    st.push(10); // {10}
    st.push(20); // {20, 10}
    st.push(30); // {30, 20, 10}
    st.push(40); // {40, 30, 20, 10}
    st.push(50); // {50, 40, 30, 20, 10}
    st.emplace(60); // {60, 50, 40, 30, 20, 10}

    cout << st.top(); // 60

    st.pop(); // {50, 40, 30, 20, 10}

    cout << st.top(); // 50

    st.size(); // 5

    cout << st.empty(); // False

    stack<int> st1, st2;

    st1.swap(st2); 

    return 0;
}