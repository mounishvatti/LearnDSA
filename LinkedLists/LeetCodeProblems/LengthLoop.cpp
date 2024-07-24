#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) : data(data1), next(next1) {}
};

// Brute force approach to find the length of the loop using a map
int lenLoop(Node* head) {
    if (head == nullptr || head->next == nullptr) return 0;

    map<Node*, int> mpp;
    Node* temp = head;
    int timer = 1;

    while (temp != nullptr) {
        if (mpp.find(temp) != mpp.end()) {
            int value = mpp[temp];
            return timer - value;
        }
        mpp[temp] = timer;
        timer++;
        temp = temp->next;
    }
    return 0;
}

// Helper function to find the length of the loop
int findlen(Node* slow, Node* fast) {
    int len = 1;
    fast = fast->next;

    while (slow != fast) {
        len++;
        fast = fast->next;
    }
    return len;
}

// Optimal approach to find the length of the loop using Floyd’s Cycle-Finding Algorithm
int lenLoopO(Node* head) {
    if (head == nullptr || head->next == nullptr) return 0;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return findlen(slow, fast);
        }
    }
    return 0;
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
    int loopLengthBrute = lenLoop(head);
    cout << "Loop detected with length (Brute Force): " << loopLengthBrute << endl;

    // Testing optimal approach
    int loopLengthOptimal = lenLoopO(head);
    cout << "Loop detected with length (Optimal): " << loopLengthOptimal << endl;

    return 0;
}