// remove the nth node from the last

#include <iostream>
#include <vector>

using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int data1, Node* next1 = nullptr) : data(data1), next(next1) {}
};

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* arr2LL(vector<int>&arr){
    if(arr.size()==0){
        cout << "There are no elements in the array!" << endl;
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

int lengthOfLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

Node* removeNthNodeFromLast(Node* head, int n){
    // we need to know the length of the linked list

    int len = lengthOfLL(head);
    if(n>len) return head;

    int res = len - n;

    Node* dummy = new Node(0);
    dummy->next = head;

    int count = 0;
    Node* temp = head;

    if(res == 1){
        head = head->next;
        delete temp;
        return head;
    }

    while(temp){
        count++;
        if(count == res){
            break;
        }
        temp = temp->next;
    }

    Node* node2BeDel = temp->next;
    temp->next = node2BeDel->next;
    delete node2BeDel;

    return head;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = arr2LL(arr);
    Node* res = removeNthNodeFromLast(head, 4);
    display(res);
}