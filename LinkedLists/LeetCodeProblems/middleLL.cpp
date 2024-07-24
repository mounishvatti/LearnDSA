#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data1, Node *next1 = nullptr) : data(data1), next(next1) {}
};

Node *arr2LL(vector<int> &arr) {
    if (arr.size() == 0) {
        cout << "There are no elements in the array!" << endl;
        return nullptr;
    }

    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node *middleLL(Node *head) {
    if (head == nullptr)
        return nullptr;
    if (head->next == nullptr)
        return head;

    Node *temp = head;
    int count = 0;

    while (temp) {
        count++;
        temp = temp->next;
    }

    int mid = 0;

    temp = head;

    if (count % 2 == 0) {
        mid = (count / 2);
    } else {
        mid = (count / 2) + 1;
    }

    while (temp) {
        mid-=1;
        if(mid == 0){
            break;
        }
        temp = temp->next;
    }

    return temp;
}

Node *middleLL_OPT(Node *head) {
    if (head == nullptr)
        return nullptr;
    if (head->next == nullptr)
        return head;

    Node *slow = head;
    Node *fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = arr2LL(arr);
    Node *mid = middleLL(head);
    Node *mid1 = middleLL_OPT(head);

    cout << "Middle node using middleLL: " << mid->data << endl;
    cout << "Middle node using middleLL_OPT: " << mid1->data << endl;

    return 0;
}