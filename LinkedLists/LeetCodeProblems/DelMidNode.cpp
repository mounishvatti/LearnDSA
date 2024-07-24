// Delete the middle node of the linked list

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1) : data(data1), next(next1) {}
};

// to find the middle node of a linked list we have 2 approaches

// 1) find the length and then compute the middle element
// 2) tortoise and hare algorithm where we use a slow and a fast pointer and the moment the fast pointer reaches null the slow pointer points at the middle node of the linked list (this is in case of a linked list with no loops)

// approach 1

int length(Node *head)
{
    if (head == nullptr)
        return 0;
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

Node *deleteMiddle(Node *head) // approach - 1
{
    int len = length(head);
    Node* temp = head;

    int mid = len/2;

    while(temp){
        mid--;
        if(mid == 0){
            break;
        }
        temp = temp->next;
    }

    Node* prevNode = temp;
    Node* midNode = temp->next;

    prevNode->next = midNode->next;

    delete midNode;

    return head;
}

// approach - 2 (slow and fast pointers)

Node* deleteMidNodeO(Node* head){
    int len = length(head);
    if(len == 0) return nullptr;

    Node* slow = head;
    Node* fast = head;
    fast = fast->next->next;
    
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* midNode = slow->next;
    slow->next = slow->next->next;

    delete midNode;

    return head;
}

int main()
{
    // driver code
}