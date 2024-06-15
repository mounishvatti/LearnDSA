#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data, Node* next = nullptr){
        this->data = data;
        this->next = next;
    }
};

Node* arr2LinkedL(vector<int>&arr){
    if(arr.empty()){
        return nullptr;
    }
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* addAtPos(Node* head, int data, int pos){
    if(pos == 0){
        Node* newNode = new Node(data);
        newNode->next=head;
        return newNode;
    }

    if(head == NULL && pos != 0){
        cout << "Invalid position!"<< endl;
        return head;
    }

    Node* temp = head;
    int count = 1;
    while(temp->next!=NULL && count < pos-1){
        temp = temp->next;
        count++;
    }

    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
    
    return head;
}

Node* addAtfirst(Node* head, int data){

    if(head == NULL){
        Node* temp = new Node(data); 
        head = temp;
    }

    else{
        Node* temp = new Node(data); 
        temp->next = head;
        head = temp;
    }

    return head;
}

Node* addAtlast(Node* head, int data){
    
    if(head == NULL){
        Node* temp = new Node(data); 
        head = temp;
    }

    else{
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        Node* newNode = new Node(data);
        temp->next = newNode;
    }
    return head;
}

Node* append(Node* head, int data){
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(data);
    temp->next = newNode;
    
    return head;
}

void display(Node* head){
    Node* temp = head;
    if(temp==NULL){
        cout << "The linked list is empty!";
        return;
    }

    while(temp!=NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    cout << endl;
}

int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,9};
    Node* head = arr2LinkedL(arr);
    display(head);
    Node* newList = addAtPos(head, 10, 5);
    display(head);
    return 0;
}