#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) : data(data1), next(next1) {}
};

bool detectLoopBrute(Node* head){ // TC = O(N), SC = O(N)
    if(head == nullptr || head->next == nullptr) return false;
    map<Node*, int>mpp;

    Node* temp = head;

    while(temp != nullptr){ // adding the nodes to the map;
        if(mpp.find(temp) != mpp.end()) return true;
        mpp[temp]++;
        temp = temp->next;
    }
    return false;
}

bool detectLoopOptimal(Node* head){
    // we use the tortoise and the hare algorithm i.e, slow and fast pointer
    if(head == nullptr || head->next == nullptr) return false;
    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}

int main(){
    // your code 
}