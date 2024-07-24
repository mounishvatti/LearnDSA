#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) : data(data1), next(next1) {}
};

// Brute force approach to find the starting node of the loop using a map
Node* startLoopBrute(Node* head) {
    if (head == nullptr || head->next == nullptr) return nullptr;

    unordered_set<Node*> visited;
    Node* temp = head;

    while (temp != nullptr) {
        if (visited.find(temp) != visited.end()) {
            return temp;
        }
        visited.insert(temp);
        temp = temp->next;
    }
    return nullptr;
}

Node* startLoopOptimal(Node* head) {
    if (head == nullptr || head->next == nullptr) return nullptr;

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next!=NULL) {

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            break;
        }
    }

    slow = head;

    while(fast!=slow){
        fast = fast->next;
        slow = slow->next;
    }

    return slow;
}



// Utility function to create a new node
Node* newNode(int key) {
    return new Node(key);
}

// Main function for testing
int main() {
    // Creating a linked list with a loop for testing
    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    // Creating a loop for testing
    head->next->next->next->next->next = head->next;

    // Testing brute force approach
    Node* startloopBrute = startLoopBrute(head);
    cout << "(Brute Force): " << startloopBrute->data << endl;

    // Testing optimal approach
    Node* startloopOptimal = startLoopOptimal(head);
    cout << "(Optimal): " << startloopOptimal->data << endl;

    return 0;
}