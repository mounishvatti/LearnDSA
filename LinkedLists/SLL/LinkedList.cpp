#include<iostream>
#include<vector>

class Node{
public: 
	int data;
	Node* next;
	
	Node(int data, Node* next){
		this->data = data;
		this->next = next;
	}
	
	Node(int data){
		this->data = data;
		this->next = nullptr;
	}
}

Node* insertAtStart(Node* head, int data){
	Node* temp = new Node(data);
	temp->next = head;
	head = temp;
	
	return head;
}

Node* insertAtEnd(Node* tail, int data){
	Node* temp = new Node(data);
	tail->next = temp;
	tail = temp;
	
	return tail;
}

Node* insertAtEnd(Node* head, int data){
	
	return head;
}

Node* append(Node* head, int data){
	if(head == NULL){
		return new Node(data);
	}
}

Node* arrToLinkedList(vector<int>arr){
	Node* head = new Node(arr[0]);
	Node* mover = head;
	Node* temp = head;
	if(head == NULL){
		return NULL;
	}
	
	int n = arr.size();
	
	for(int i=1; i<n; i++){
		Node* newNode = new Node(arr[i]);
		mover->next = temp;
		mover = temp;
	}

	return head;
}

void print(Node* head){

}

int main(){

	vector<int> arr = {1,2,3,4,5,6,7,8,9};
	
	int n = arr.size();
	
	

	return 0;
}