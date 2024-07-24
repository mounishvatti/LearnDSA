#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node* prev;

public:
	Node(int data1, Node* next1, Node* prev1){
		data = data1;
		next = next1;
		prev = prev1;
	}

	Node(int data1){
		data = data1;
		next = nullptr;
		prev = nullptr;
	}
};

Node* convertToDll(vector<int>&arr){
	if(arr.size()==0){
		cout << "Array is empty!" << endl;
		return nullptr;
	}

	Node* head = new Node(arr[0]);
	Node* mover = head;

	for(int i=1; i<arr.size(); i++){
		//Node* temp = new Node(arr[i], nullptr, mover);
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		temp->prev = mover;
		mover = temp;
	}
	return head;
}

// insert before head
Node* insertBeforeHead(Node* head, int val){
	if(head == NULL){
		return nullptr;
	}

	Node* newNode = new Node(val, head, nullptr);
	head->prev = newNode;
	head = head->prev;

	return head;
}

// insert before tail of a doubly linked list
Node* insertBeforeTail(Node* head, int val){
	if(head == NULL){
		return nullptr;
	}

	else if (head->next == NULL){
		insertBeforeHead(head, val);
	}

	Node* temp = head;
	while(temp->next!= NULL){
		temp = temp->next;
	}

	Node* tail = temp;
	Node* prevNode = tail->prev;

	Node* newNode = new Node(val, tail, prevNode);
	tail->prev = newNode;
	prevNode ->next = newNode;

	return head;
}

// insert before the kth element
Node* inserBeforeKthEle(Node* head, int val, int k){
	if(head == NULL){
		return nullptr;
	}

	else if(k==1){
		insertBeforeHead(head, val);
	}

	Node* temp = head;
	int count = 0;

	while(temp != NULL){
		count++;
		if(count == k){
			break;
		}
		temp = temp->next;
	}

	Node* prevNode = temp->prev;
	Node* newNode = new Node(val, temp, prevNode);
	prevNode->next = newNode;
	temp->prev = newNode;

	return head;
}

// deleting the head of the doubly linkedlist
Node* deleteHead(Node* head){
	if(head == NULL){
		cout << "There is no head!" << endl;
		return nullptr;
	}
	if(head->next == nullptr){
		delete head;
		return nullptr;
	}

	Node* temp = head;
	head = head->next;
	head->prev = nullptr;
	temp->next = nullptr;

	delete temp;

	return head;
}

// delete the tail of the doubly linkedlist

Node* deleteTail(Node* head){
	if(head == NULL){
		cout << "There is no head!" << endl;
		return nullptr;
	}
	if(head->next == nullptr){
		delete head;
		return nullptr;
	}

	Node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}

	Node* tail = temp;

	tail->prev = nullptr;
	tail->prev->next = nullptr;

	delete tail;

	return head;
}

//delete kth element
Node* deleteKthEle(Node* head, int k){
	if(k==1 && head == NULL){
		cout << "Error! There is no head" << endl;
		return nullptr;
	}

	if(k==1){
		Node* temp = head;
		head = head->next;
		head->prev = nullptr;
		temp->next = nullptr;
		delete temp;

		return head;
	}

	int count = 0;
	Node* temp = head;
	while(temp!=NULL){
		count++;
		if(count == k){
			break;
		}
		temp = temp->next;
	}

	// temp->prev->next = temp->next;
	// temp->next->prev = temp->prev;

	// temp->next=nullptr;
	// temp->prev=nullptr;

	// delete temp;

	Node* nodeToBeDel = temp;

	Node* prevNode = temp->prev;
	Node* nextNode = temp->next;

	if(prevNode == NULL && nextNode == NULL){
		delete nodeToBeDel;
		return nullptr;
	}

	else if(prevNode == NULL){
		deleteHead(head);
	}

	else if(nextNode == NULL){
		deleteTail(head);
	}

	else{
		prevNode->next = nextNode;
		nextNode->prev = prevNode;

		temp->next=nullptr;
		temp->prev=nullptr;

		delete nodeToBeDel;
	}
	return head;
}

// removing a given node
void deleteEle(Node* head, int val){
	if(head == NULL){
		cout << "Error! There is no head" << endl;
		return;
	}

	Node* temp = head;
	while(temp!=NULL){
		if(temp->data == val){
			break;
		}
		temp = temp->next;
	}

	Node* prevNode = temp->prev;
	Node* nextNode = temp->next;

	if(nextNode->next == NULL){
		prevNode->next = nullptr;
		nextNode->prev = nullptr;
		delete temp;
		return;
	}

	prevNode->next = nextNode;
	nextNode->prev = prevNode;
	delete temp;
}

// reverse the doubly linked list - approach 1 (using stack data structure)
Node* reverse1(Node* head){
	Node* temp =head;
	stack<int> st;

	while(temp!=NULL){
		st.push(temp->data);
		temp = temp->next;
	}

	temp = head;

	while(temp!=NULL){
		temp->data = st.top();
		st.pop();
		temp = temp->next;
	}
	return head;
}

// approach - 2 (changing the links)
Node* reverse2(Node* head){

	if(head==NULL || head->next==NULL) return head;

	Node* current = head;
	Node* prevNode = NULL;

	while(current!=NULL){
		// swap the next and prev pointers
		prevNode = current->prev;
		current->prev = current->next;
		current->next = prevNode;

		// move to the next node in the original list which is the prev node in the new list
		current = current->prev;
	}

	head = prevNode->prev;

	return head;
}



int main(){
	vector<int> arr = {1,2,3,4,5,6,7,8,9};
}