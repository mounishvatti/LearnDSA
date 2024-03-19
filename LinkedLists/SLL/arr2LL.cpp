#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int data1, Node* next1){
		data = data1;
		next = next1;
    }

    Node(int data1){
	    data = data1;
	    next = nullptr;
    }
};
Node* deleteHead(Node* head){
    if(head == NULL){
        return head;
    }
    Node* temp = head;
    head = head->next;
    delete head;
    
    return head;
}

Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL) {
        return NULL;
    }

    Node* temp = head;

    while(temp->next->next!=NULL){
        temp = temp->next;
    }

    free(temp->next);
    temp->next = nullptr;

    return head;
}

Node* append(Node* head, int data) {
    if (head == nullptr) {
        Node* newHead = new Node(data);
        return newHead;
    }
    Node* val = new Node(data);
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = val;

    return head;
}


Node* convertArr2LL(vector<int>arr){
	Node* head = new Node(arr[0]);
	Node* mover = head;
	for(int i=1; i<arr.size(); i++){
	    Node* temp = new Node(arr[i]);
	    mover->next = temp;
	    mover = temp;
    }
    return head;
}

int lenLL(Node* head){
    Node* temp = head;
    int count = 0;
	while(temp){
		temp = temp->next;
        count++;
    }
    return count;
}

int main(){
	
// 	int n;
//     cin >> n;
   //  Node* head = nullptr;
//     while (n--) {
//         int ele;
//         cin >> ele;
//         head = append(head, ele);
//     }

	vector<int> arr = {12,3,5,8};
    Node* head = convertArr2LL(arr);
    cout << lenLL(head);
	return 0;
}
