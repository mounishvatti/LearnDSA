#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1, Node* next1){ // constructor
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
int main(){
	vector<int> arr = {1,2,3,4};
	Node* y1 = new Node(arr[0]);
    Node* y2 = new Node(arr[1],y1);
    Node* y3 = new Node(arr[2]);
    Node* y4 = new Node(arr[3]);
    cout<<"\n";
	cout <<"Address: " << y1 << ", Value: "<< y1->data <<", "<< &y1->data << endl;
    cout<<"\n";
    cout <<"Address: " << y2 << ", Value: "<< y2->data <<", "<< y2->next << endl;
    cout<<"\n";
    cout <<"Address: " << y3 << ", Value: "<< y3->data << endl;
    cout<<"\n";
    cout <<"Address: " << y4 << ", Value: "<< y4->data << endl;
    cout<<"\n";

	return 0;
}
