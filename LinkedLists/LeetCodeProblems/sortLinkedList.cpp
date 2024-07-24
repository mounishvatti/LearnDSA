#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data, Node* next = NULL) : data(data), next(next) {}
};
// extreme brute force method
Node* arrayToLinkedList(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = i; i < arr.size(); i++){
        Node* newNode = new Node(arr[i]);
        mover->next = newNode;
        mover = mover->next;
    }
    return head;
}

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* sortLinkedList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* temp = head;
    vector<int> arr;

    while(temp != NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }

    sort(arr.begin(), arr.end());
    head = arrayToLinkedList(arr);

    return head;
}

// optimised method
Node* findMiddle(Node* head){
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node* list1, Node* list2){
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;
    while(list1 != NULL && list2 != NULL){
        if(list1->data < list2->data){
            temp->next = list1;
            temp = list1;
            list1 = list1->next;
        }
        else{
            temp->next = list2;
            temp = list2;
            list2 = list2->next;
        }
    }
    if(list1) temp->next = list1;
    else temp->next = list2;

    return dummyNode->next;
}

Node* mergeSort(Node* head){

    if(head == NULL || head->next == NULL){
        return head;
    }
    
    Node* middle = findMiddle(head);
    Node* rightHead = middle->next;
    Node* leftHead = head;

    middle->next = NULL;

    leftHead = mergeSort(leftHead);
    rightHead = mergeSort(rightHead);

    return merge(leftHead, rightHead);
}

int main(){
    vector<int> array = {3,4,2,7,9,1,0};
    Node* linkedList1 = arrayToLinkedList(array);
    cout << "----- BRUTE-FORCE METHOD -----" << endl;
    cout << "Unsorted linked list: ";
    printLinkedList(linkedList1);
    cout << "Sorted linked list: ";
    linkedList1 = sortLinkedList(linkedList1);
    printLinkedList(linkedList1);
    cout << endl;
    cout << "----- OPTIMISED METHOD -----" << endl;
    Node* linkedList2 = arrayToLinkedList(array);
    cout << "Unsorted linked list: ";
    printLinkedList(linkedList2);
    linkedList2 = mergeSort(linkedList2);
    cout << "Sorted linked list: ";
    printLinkedList(linkedList2);
}