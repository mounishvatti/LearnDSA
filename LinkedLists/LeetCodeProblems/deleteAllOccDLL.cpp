#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1, Node *next1 = nullptr, Node *prev1 = nullptr) : data(data1), next(next1), prev(prev1) {}
};

Node *convertToDll(vector<int> &arr)
{
    if (arr.size() == 0)
    {
        cout << "Array is empty!" << endl;
        return nullptr;
    }

    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        // Node* temp = new Node(arr[i], nullptr, mover);
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        temp->prev = mover;
        mover = temp;
    }
    return head;
}

Node* deleteAllOccurances(Node* head, int key){
    if(head == nullptr || head->data == key) return nullptr;

    Node* temp = head;

    while(temp != nullptr){
        if(temp->data == key){
            Node* toBeDel = temp;
            if(temp->prev != nullptr){
                temp->prev->next = temp->next;
            } else{
                head = temp->next;
            }
            if(temp->next!=nullptr){
                temp->next->prev = temp->prev;
            }
            temp = temp->next;
            delete toBeDel;
        } else{
            temp = temp->next;
        }
    }
    return head;
}

void printDLL(Node* head){
    if(head == nullptr) return;
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    vector<int> arr = {1,2,2,2,2,2,2,2,9};
    Node *head = convertToDll(arr);
    printDLL(head);

    cout << endl;

    deleteAllOccurances(head, 2);
    printDLL(head);
}
