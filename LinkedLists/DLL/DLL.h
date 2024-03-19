#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node(){}

    Node(int data, Node* next, Node* prev){
        this->data = data;
        this->next = next;
        this->prev = prev;
    }

    Node(int data, Node* prev){
        this->data = data;
        this->next = nullptr;
        this->prev = prev;
    }

    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

};

Node* convertArr2Dll(vector<int>arr){
    int n = arr.size();
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i=1; i<n; i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev -> next = temp;
        prev = temp; // or prev = prev->next
    }

    return head;
}

Node* deleteHead(Node* head){
    Node* temp = head;

    if(head == NULL){
        return  NULL;
    }

    head = temp->next;

    head->prev = nullptr;
    temp->next = nullptr;

    delete temp;

    return head;
}

Node* Tail(Node* head){
    Node* tail = head;

    while(tail->next!=NULL){
        tail = tail->next;
    }

    Node* temp = tail->prev;
    return tail;
}

Node* deleteTail(Node* head){
    Node* tail = Tail(head);

    Node* temp = tail->prev;

    tail->prev = NULL;
    temp->next = NULL;

    delete tail;

    tail = temp;

    return tail;
    
}

void printList(Node *head) { 
    Node* temp = head; 
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
        
    }
}

