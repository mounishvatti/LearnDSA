#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

public:
    Node(int data1, Node* next1 = nullptr) : data(data1), next(next1) {}
};

Node* arr2ll(vector<int> &arr){
    if(arr.size()==0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void display(Node* head){
    if(head==nullptr) return;
    Node* temp = head;

    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int size(Node* head){
    if(head==nullptr) return 0;
    int count = 0;
    Node* temp = head;
    while(temp!=nullptr){
        count++;
        temp = temp->next;
    }
    return count;
}

Node* intersectionY(Node* head1, Node* head2){  // TC = O(N1 + N2), SC = O(N1 or N2);
    if(head1==nullptr || head2==nullptr) return nullptr;

    map<Node*, int>mpp; // you can use unordered_map as well as the looking time will be O(1)
    Node* temp = head1;

    while(temp!=nullptr){
        mpp[temp]++;
        temp = temp->next;
    }

    temp = head2;

    while(temp!=nullptr){
        if(mpp.find(temp) != mpp.end()) return temp;
        temp = temp->next;
    }
    return nullptr;
}

Node* traverse(Node* temp, int val){
    if(temp==nullptr) return nullptr;

    for(int i=0; i<val && temp->next!=NULL; i++){
        temp = temp->next;
    }
    return temp;
}

Node* intersectY(Node* head1, Node* head2){
    if(head1==nullptr || head2==nullptr) return nullptr;

    int size1 = size(head1);
    int size2 = size(head2);

    int gap = 0;
    int list = 0;
    if(size1 < size2){
        gap = size2-size1;
        list = 2;
    }
    else if(size1 > size2){
        gap = size1-size2;
        list = 1;
    }

    Node* temp1 = head1;
    Node* temp2 = head2;

    if(list == 1){
        temp1 = traverse(temp1, gap);
    }
    else if(list == 2){
        temp2 = traverse(temp2, gap);
    }

    while(temp1!=NULL && temp2!=NULL){
        if(temp1 == temp2){
            return temp1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return nullptr;
}

int main(){
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {5,7,8,9,10};
}

