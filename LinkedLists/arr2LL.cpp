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

	int len = arr.size();
	for(int i=1; i<len; i++){
	    Node* temp = new Node(arr[i]);
	    mover-> next = temp;
	    mover = temp;
    }
    return head;
}

int main(){
	vector<int> arr = {12,3,5,8};
	Node* head = convertArr2LL(arr);
    Node* temp = head;
	
	while(temp){
		cout << temp->data << " "; 
		temp = temp->next;
    }
	return 0;
}
