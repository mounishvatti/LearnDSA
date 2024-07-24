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

Node* reverse(Node* head) {
    Node* prevNode = nullptr;
    Node* curr = head;
    while (curr) {
        Node* nextNode = curr->next;
        curr->next = prevNode;
        prevNode = curr;
        curr = nextNode;
    }
    return prevNode;
}

// Function to add one to a number represented by a linked list
Node* addOne(Node* head) {
    // Reverse the linked list
    Node* revList = reverse(head);
    Node* temp = revList;
    int carry = 1;

    while (temp) {
        int sum = temp->data + carry;
        temp->data = sum % 10;
        carry = sum / 10;

        // If there is no carry, we can exit the loop early
        if (carry == 0) {
            break;
        }

        // If we're at the last node and there's still a carry, add a new node
        if (temp->next == nullptr && carry > 0) {
            temp->next = new Node(carry);
            carry = 0;
        }

        temp = temp->next;
    }

    // Reverse the list again to restore the original order
    head = reverse(revList);
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
    Node* newHead = addOne(head);
    display(newHead);
    return 0;
}