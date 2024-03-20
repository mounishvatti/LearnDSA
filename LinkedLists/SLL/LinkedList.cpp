#include<iostream>
#include<vector>
using namespace std;
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
};

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
	if(head == NULL){
		return new Node(data);
	}
	Node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	
	Node* newNode = new Node(data);
	
	temp->next = newNode;
	
	
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

Node* deleteHead(Node* head){
	if(head == NULL){
		cout << "No head exists!" << endl;
	}
	Node* temp = head;
	head = head->next;
	
	delete temp;
	return head;
}

Node* deleteTail(Node* head){
	Node* temp = head;
	
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = nullptr;
	delete temp;
	return head;
}

Node* insertAtpos(Node* head, int data, int pos){
	Node* temp = head;
	if(head==NULL || pos == 1){
		return new Node(data);
	}
	int count = 1;
	while(temp->next &&  count < pos-1) {
		count++;
		temp = temp->next;
	}
	Node* newNode = new Node(data);
	newNode->next = temp->next;
	temp->next = newNode;

	return head;
}

void print(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main(){
	vector<int> arr = {1,2,3,4,5,6,7,8,9};
	int n = arr.size();
	Node* head = arrToLinkedList(arr);
	print(head);
	cout << endl;
	
	
	return 0;
}