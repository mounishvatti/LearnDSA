#include<iostream>
#include<vector>
using namespace std;

// Node class definition
class Node {
public:
    int data; // Data stored in the node
    Node* next; // Pointer to the next node in the list

    // Constructor that initializes a node with data and sets next to nullptr
    //Node(int data) : data(data), next(nullptr) {}
    
    Node(int data){
    	this->data = data;
    	this->next = nullptr;
    }

    // Constructor that initializes a node with data and a pointer to the next node
    //Node(int data, Node* next) : data(data), next(next) {}
    
    Node(int data, Node* next){
    	this->data = data;
    	this->next = next;
    }
};

// Function to append a new node with the given data to the end of the list
Node* append(Node* head, int data) {
    // If the list is empty, create a new node and return it
    if (head == nullptr) {
        return new Node(data);
    }

    // Create a new node to be added at the end of the list
    Node* newNode = new Node(data);

    // Traverse the list to find the last node
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    // Link the last node to the new node
    current->next = newNode;

    // Return the head of the list
    return head;
}

void print(Node* head){
	Node* temp = head;
	while(temp){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

Node* insertAtBegin(Node* head, int data){
	if(head==NULL){
		return new Node(data);
	}
	Node* temp = new Node(data);
	
	temp->next = head;
	head = temp;
	
	return head;
}

Node* insertAtEnd(Node* head, int data){
    if(head==NULL){
		return new Node(data);
	}
	else{
	   Node* temp = head;
    
        while(temp->next!=NULL){
            temp = temp->next;
        }
    
        Node* newnode = new Node(data);
    
        temp->next = newnode; 
        Node* tail = newnode;
	}
    
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

Node* getTail(Node* head){

	Node* temp = head;
	
	while(temp->next!=NULL){
		temp = temp->next;
	} 

	return temp;
}

int main() {
    int n;
    cin >> n; // Read the number of elements to be added to the list

    Node* head = nullptr; // Initialize the head of the list to nullptr
    
    // vector<int>arr;
//     
//     for(int i=0; i<n; i++){
//         int ele;
//     	cin >> ele;
//         arr.push_back(ele);
//     }
// 	
// 	Node* head = convertArr2LL(arr);

    // Read each element and append it to the list
    while (n--) {
        int element;
        cin >> element;
        head = append(head, element);
    }
    
    print(head);
    
    cout << endl;
    
    Node* tail = getTail(head);
    
    cout << tail->data;
    
    Node* newHead = insertAtBegin(head, 6);
    
    cout << endl;
    
    print(newHead);
    
    Node* newTail = insertAtEnd(newHead, 7);
    
    cout << endl;
    
    print(newTail);

    // The list is now fully constructed, but we don't do anything with it in this example

    return 0;
}
