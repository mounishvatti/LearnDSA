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

Node *convertArrToDLL(vector<int> arr)
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

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
}
