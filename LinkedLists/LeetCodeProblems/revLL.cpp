// reverse a linkedlist

#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1 = nullptr) : data(data1), next(next1) {}
};


// approach - 1 
Node* revLinkedlist(Node* head){ // TC: O(2N), SC: O(N)
    if(head == NULL || head->next == NULL) return head;

    Node* temp = head;

    stack<int>st;

    while(temp){
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;

    while(temp){
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}

// approach - 2
Node* revLinkedlistOptimal(Node* head){ // TC: O(2N), SC: O(1)
    if(head == NULL || head->next == NULL) return head;

    Node* temp = head;
    Node* prevNode = NULL;

    while(temp){
        Node* nextNode = temp->next;
        temp->next = prevNode;
        prevNode = temp;
        temp = nextNode;
    }
}

// approach - 3

Node* revLinkedlistRecursive(Node* head){ // TC: O(N), SC: O(N)
    if(head == NULL || head->next == NULL) return head;
    Node* newHead = revLinkedlistRecursive(head->next);

    Node* front = head->next;
    front->next = head;
    head->next = NULL;

    return newHead;
}



int main(){
    // your code
}