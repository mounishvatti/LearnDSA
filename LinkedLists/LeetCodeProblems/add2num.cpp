#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;

public:
	Node(int data, Node* next = nullptr) : data(data), next(next) {}
};

Node* arr2LL(vector<int>&arr){
	if(arr.size()==0){
		cout << "There are no elements in the array!" << endl;
		return nullptr;
	}

	Node* head = new Node(arr[0]);
	Node* mover = head;

	for(int i=1; i<arr.size(); i++){
		Node* temp = new Node(arr[i]);
		mover->next = temp;
		mover = temp;
	}
	return head;
}

void display(Node* head){
	if(head == NULL){
		cout << "Nothing to display!" << endl;
	}

	Node* temp = head;

	while(temp!=NULL){
		cout << temp->data << "->";
		temp = temp->next;
	}

	cout << "NULL" << endl;
}

int add2StackAndDisplayValue(Node* head){
	if(head == NULL){
		cout << "Error!" << endl;
		return -1;
	}

	stack<int>st;

	Node* temp = head;

	while(temp!=NULL){
		st.push(temp->data);
		temp = temp->next;
	}

	int value = 0;

	while(!st.empty()){
		int element = st.top();
		st.pop();
		value = value*10 + element;
	}
	return value;
}

int main(){
	vector<int> v1 = {3,8,7};
	vector<int> v2 = {5,2,4,1};

	vector<int>ans;

	cout << "Comverting both the vectors into Linked Lists" << endl;

	Node* head1 = arr2LL(v1);
	Node* head2 = arr2LL(v2);

	// displaying the linkedlists 

	display(head1);
	display(head2);

	int value1 = add2StackAndDisplayValue(head1);
	int value2 = add2StackAndDisplayValue(head2);

	cout << value1 << endl;
	cout << value2 << endl;

	int result = value1 + value2;

	cout << result << endl;

	while(result!=0){
		int lastDigit = result%10;
		ans.push_back(lastDigit);
		result = result/10;
	}

	for(auto it : ans){
		cout << it << " ";
	}

	cout << endl;

	Node* ansHead = arr2LL(ans);
	display(ansHead); 

	return 0;
}