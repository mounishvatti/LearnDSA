#include <bits/stdc++.h>
#include "LinkedList.h"

using namespace std;

Node *arr2LL(vector<int> &arr)
{
	if (arr.size() == 0)
		return nullptr;

	Node *head = new Node(arr[0]);
	Node *mover = head;

	for (int i = 1; i < arr.size(); i++)
	{
		Node *temp = new Node(arr[i]);
		mover->next = temp;
		mover = temp; // or mover = mover->next
	}
	return head;
}

void display(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

// approach - 1
pair<Node *, Node *> segregate(Node *head)
{
	Node *temp = head;

	vector<int> evenArr;
	vector<int> oddArr;

	int count = 0;

	while (temp)
	{
		count++;
		if (count % 2 == 0)
		{
			evenArr.push_back(temp->data);
		}
		else
		{
			oddArr.push_back(temp->data);
		}
		temp = temp->next;
	}

	Node *headOdd = arr2LL(oddArr);
	Node *headEven = arr2LL(evenArr);

	return make_pair(headOdd, headEven);
}

pair<Node *, Node *> segregateBasedOnValue(Node *head)
{
	Node *temp = head;

	vector<int> evenArr;
	vector<int> oddArr;

	int count = 0;

	while (temp)
	{
		if (temp->data % 2 == 0)
		{
			evenArr.push_back(temp->data);
		}
		else
		{
			oddArr.push_back(temp->data);
		}
		temp = temp->next;
	}

	Node *headOdd = arr2LL(oddArr);
	Node *headEven = arr2LL(evenArr);

	return make_pair(headOdd, headEven);
}

// approach - 2 (we can use the fast pointer which has all the odd values which starts from head)

// {1,2,3,4,5,6,7,8,9}
// odd = 1,3,5,7,9
// even = 2,4,6,8
pair<Node *, Node *> segregateFast(Node *head)
{
	if (!head)
		return make_pair(nullptr, nullptr);
	if (!head->next)
		return make_pair(head, nullptr);

	Node *odd = head;
	Node *even = head->next;

	vector<int> evenArr;
	vector<int> oddArr;

	while (odd && odd->next)
	{
		oddArr.push_back(odd->data);
		if (odd->next->next)
		{
			odd = odd->next->next;
		}
		else
		{
			odd = nullptr;
		}
	}

	while (even && even->next)
	{
		evenArr.push_back(even->data);
		if (even->next->next)
		{
			even = even->next->next;
		}
		else
		{
			even = nullptr;
		}
	}

	if (odd)
	{
		oddArr.push_back(odd->data);
	}
	if (even)
	{
		evenArr.push_back(even->data);
	}

	Node *headOdd = arr2LL(oddArr);
	Node *headEven = arr2LL(evenArr);

	return make_pair(headOdd, headEven);
}

// approach - 3
/*
use an external vector to store the values in odd even index format and replace the values of the linked list (data replacement)
*/
Node *segregateEvenOdd(Node *head)
{ // {1,2,3,4,5,6,7,8,9}; ans = {1,3,5,7,9,2,4,6,8}
	if (head == NULL)
	{
		return nullptr;
	}
	vector<int> arr;

	// for odd
	Node *temp = head;
	while (temp && temp->next)
	{
		arr.push_back(temp->data);
		temp = temp->next->next;
	}
	if (temp)
		arr.push_back(temp->data);

	// for even
	temp = head->next;
	while (temp && temp->next)
	{
		arr.push_back(temp->data);
		temp = temp->next->next;
	}
	if (temp)
		arr.push_back(temp->data);

	// replace the values in the linked list
	Node *temp = head;
	int i = 0;
	while (temp)
	{
		temp->data = arr[i];
		i++;
		temp = temp->next;
	}
	return head;
}

// approach - 4
/*
	instead of using an external vector we can directly change the links between the nodes in such a way that they appear in odd even format.
*/

pair<Node *, Node *> segregateOddEven(Node *head)
{
	if (head == NULL || head->next == NULL)
	{
		return make_pair(head, nullptr);
	}

	Node *odd = head;
	Node *even = head->next;

	Node *evenHead = even;

	while (even != NULL && even->next != NULL)
	{
		odd->next = odd->next->next;
		odd = odd->next;

		even->next = even->next->next;
		even = even->next;
	}

	odd->next = evenHead;

	return make_pair(odd, even);
}

int main()
{
	vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	Node *head = arr2LL(arr);

	pair<Node *, Node *> result1 = segregate(head);
	pair<Node *, Node *> result2 = segregateFast(head);

	Node *odd = result1.first;
	Node *even = result1.second;

	Node *odd1 = result2.first;
	Node *even1 = result2.second;

	display(odd);
	display(even);

	cout << endl;

	display(odd1);
	display(even1);
}
