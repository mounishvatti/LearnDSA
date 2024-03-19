#include<iostream>
#include<vector>

using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node* prev;
	
	Node(int data, Node* next, Node* prev){
		this->data = data;
		this->next = next;
		this->prev = prev;
	}
	
	Node(int data, Node* prev){
		this->data = data;
		this->next = nullptr;
		this->prev = prev;
	}
	
	Node(int data){
		this->data = data;
		this->next = nullptr;
		this->prev = nullptr;
	}

};

Node* insert(Node* head, int data){
	if(head == NULL){
		return new Node(data);
	}
	
	Node* temp = head;
	
	Node* newNode = new Node(data);
	
	temp->next = newNode;
	newNode->prev = temp;
	
	return head;
}

Node* insertAtstart(Node* head, int data){
	if(head == NULL){
		return new Node(data);
	}
	Node* temp = head;
	
	Node* newNode = new Node(data);
	
	newNode->next = temp;
	temp->prev = newNode;
	
	return head;
}

Node* insertAtend(Node* head, int data){
	if(head == NULL){
		return new Node(data);
	}
	Node* temp = head;
	
	Node* newNode = new Node(data);
	
	temp->next = newNode;
	newNode->prev = temp;
	
	return head;
}

Node* getTail(Node* head){
	Node* temp = head;
	
	while(temp->next){
		temp = temp->next;
	}
	Node* tail = temp;
	
	return tail;
}

Node* reverse(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return head;

    Node* prevNode = nullptr;
    Node* currNode = head;

    while (currNode != nullptr) {
        Node* nextNode = currNode->next;
        currNode->next = prevNode;
        currNode->prev = nextNode; // Adjusting previous pointer for reversed direction
        prevNode = currNode;
        currNode = nextNode;
    }

    return prevNode; // prevNode is now the new head
}

Node* insertAtkthPos(Node* head, int data, int pos){
	if(head == NULL || pos == 1){
		return new Node(data);
	}
	Node* temp = head;
	int count = 1;
	while(temp && count < pos-1){
		count++;
		temp = temp->next;
	}
	
	Node* newNode = new Node(data);
	
	newNode->next = temp->next;
	temp->next = newNode;
	newNode->prev = temp;
	temp = newNode->next;
	temp->prev = newNode;
	
	return head;
}

Node* convert2Dll(vector<int>arr){
	if(arr.empty()){
		return nullptr;
	}
	Node* head = new Node(arr[0]);
	Node* mover = head;
	
	for(int i=1; i<arr.size(); i++){
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		temp->prev = mover;
		mover = temp;
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

int main(){
	vector<int> arr = {1,2,3,4,5,6,7,8,9};
	Node* head = convert2Dll(arr);
	print(head);
	
	Node* newNode = insertAtkthPos(head, 0, 4);
	cout<<endl;
	print(head);
	cout<<endl;
	Node* tail = getTail(head);
	cout << tail->data<<endl;
	Node* rev = reverse(head);
	print(rev);
	return 0;
}