// optimal approach using backtracking
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data1, Node *next1 = nullptr) : data(data1), next(next1) {}
};

Node* arr2LL(vector<int>& arr) {
    if (arr.size() == 0) {
        cout << "There are no elements in the array!" << endl;
        return nullptr;
    }

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int helper(Node* temp){ // recursive helper function to navigate to the last node
    if(temp == nullptr){
        return 1;
    }
    int carry = helper(temp->next);
    temp->data = temp->data + carry;
    if(temp->data < 10){
        return 0;
    }
    temp->data = 0;
    return 1;
}

Node* func(Node* head) { // to handle the case where carry is 1 and the temp->next is null and we are in a need of a new node
    int carry = helper(head);
    if(carry == 1){
        Node* temp = new Node(1);
        temp->next = head;
        return temp;
    }
    return head;
}

void display(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 9, 9};
    Node* head = arr2LL(arr);
    Node* newHead = func(head);
    display(newHead);
    return 0;
}