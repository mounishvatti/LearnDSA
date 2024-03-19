#include<iostream>
#include<vector>
#include "DLL.h"
using namespace std;

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

void printList(Node *head) { 
    Node* temp = head; 
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
        
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    Node* head = convertArr2Dll(arr);

    printList(head);

    return 0;
}