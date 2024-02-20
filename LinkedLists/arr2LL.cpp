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
	vector<int> arr = {12,3,5,8};
    Node* head = convertArr2LL(arr);
    cout << lenLL(head);
	return 0;
}
