#include <iostream>
#include <vector>
using namespace std;

class Node
{		// creation of class named “Node”
public: // access modifier
	int data;
	Node *next;
	Node *prev;

	// constructor
	Node(int data)
	{
		this->data = data;
		this->prev = NULL;
		this->next = NULL;
	}
};

Node* insert(Node* head, int data){
	if(head==NULL){
		Node* newNode = new Node(data);
		//newNode->prev = nullptr;
		head = newNode;
		return head;
	}else{
		Node* curr = head;
		Node* newNode = new Node(data);
		curr->next = newNode;
		newNode->prev = curr;
	}
	return head;
}

Node* insertAtStart(Node* head, int data){
	Node* newNode = new Node(data);
	newNode->prev = nullptr;
	
	if(head==NULL){
		head = newNode;
	}else{
		Node* temp = head;
		newNode->next = temp;
		temp->prev = newNode;
		head = newNode;
	}
	return head;
}

Node* insertAtEnd(Node* head, int data){
	if(head==NULL){
		Node* newNode = new Node(data);
		newNode->prev = nullptr;
		head = newNode;
	}else{
		Node* temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		Node* newNode = new Node(data);
		
		temp->next = newNode;
		newNode->prev = temp;
	}
	return head;
}

Node* insertAtPos(Node* &head, int pos, int data) {
	if(head==NULL || pos == 1){
		if(head!=NULL){
			Node* temp = head;
			Node* newNode = new Node(data);
			newNode->next = temp;
			temp->prev = newNode;
			head = newNode;
		}else{
			Node* newNode = new Node(data);
			head = newNode;
		}
	}
	else{
		Node* temp = head;
		int count = 1;
		
		while(temp->next!=NULL && count < pos-1){
			temp = temp->next;
			count++;
		}
		Node* newNode = new Node(data);
		Node* currNode = temp;
		newNode->next = currNode->next;
		newNode->prev = currNode;
		currNode->next = newNode;
	}
	return head;
}

Node* deletePos(Node* &head, int pos){
	if(head==NULL){
		return NULL;
	}else{
		int count = 1;
		Node* temp = head;
		while(temp->next!=NULL && count < pos){
			temp = temp->next;
			count++;
		}
		Node* node2BeDel = temp;
		Node* prevNode = temp->prev;
		Node* nextNode = temp->next;
		prevNode->next = nextNode;
		nextNode->prev = prevNode;
		
		delete node2BeDel;
	}
	return head;
}

Node* makeCircular(Node* &head){
	if (head == NULL) {
        return NULL; // If the list is empty, there's nothing to do
    }
    
	Node* temp = head;
	
	while(temp->next!=NULL){
		temp = temp->next;
	}
	
	Node* tail = temp;
	tail->next = head;
	head->prev = tail;
	
	return head;
}

Node* convertArrToDLL(vector<int> arr)
{
	if (arr.empty())
	{
		return nullptr;
	}
	Node *head = new Node(arr[0]);
	Node *mover = head;
	for (int i = 1; i < arr.size(); i++)
	{
		Node *newNode = new Node(arr[i]);
		mover->next = newNode;
		newNode->prev = mover;
		mover = newNode;
	}
	return head;
}

void print(Node* head){
	Node* temp = head;
	
	while(temp){
		cout << temp->data << " ";
		temp = temp->next;
	}
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	Node* head = convertArrToDLL(arr);
	
	print(head);
	
	cout << endl;
	
	Node* newHead = insertAtPos(head, 4, 0);
	
	print(newHead);
	cout<<endl;
	
	Node* updatedList = deletePos(newHead, 4);
	
	print(updatedList);
	cout<<endl;
	
	Node* circular = makeCircular(updatedList);
	print(circular);
	cout<<endl;
	return 0;
}
