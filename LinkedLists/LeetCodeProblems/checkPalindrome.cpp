// check if the linked list is a palindrome

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1 = nullptr) : data(data1), next(next1) {}
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

// approach - 1

bool isPalindrome(Node* head){ // TC: O(2N), SC: O(N)
    if(head == NULL || head->next == NULL) return false;
    Node* temp = head;

    stack<int>st;

    while(temp){
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;

    while(temp){
        if(temp->data != st.top()) return false;
        st.pop();
        temp = temp->next;
    }

    return true;
}

// approach - 2

Node* reverse(Node* head){
    if(head == nullptr || head->next == nullptr) return head;
    Node* temp = head;
    Node* prevNode = nullptr;

    while(temp){
        Node* nextNode = temp->next;
        temp->next = prevNode;
        prevNode = temp;
        temp = nextNode;
    }
    return prevNode;
}

bool isPalindrome1(Node* head){  // TC = O(2N); SC = O(N);
    if(head == NULL || head->next == NULL) return false;

    Node* temp = head;
    Node* revHead = reverse(temp);

    Node* temp_rev = revHead;

    while(temp){
        if(temp->data != temp_rev->data) return false;
        temp = temp->next;
        temp_rev = temp_rev->next;
    }
    return true;
}

// optimal solution - Tortoise Hare approach
bool isPalindrome2(Node* head){  // TC = O(2N); SC = O(1);
    if(head == NULL || head->next == NULL) return false;

    Node* slow = head;
    Node* fast = head;

    while(fast->next!=NULL && fast->next->next!=NULL){  // TC = O(N/2)
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* mid = slow;

    Node* newHead = reverse(mid->next); // TC = O(N/2)

    Node* first = head;
    Node* second = newHead;

    while(second!=NULL){ 
        if(first->data != second->data){
            head = reverse(newHead); // TC = O(N/2)
            return false;
        } 
        first = first->next;
        second = second->next;
    }
    head = reverse(newHead); // TC = O(N/2)
    return true;
}

int main(){

    vector<int>arr = {1,2,3,2,1};
    Node* head = arr2LL(arr);

    // if(isPalindrome(head) == 1){
    //     cout << "The linked list is a palindrome!" << endl;
    // }
    // else{
    //     cout << "The linked list is not a palindrome!" << endl;
    // }

    // if(isPalindrome1(head) == 1){
    //     cout << "The linked list is a palindrome!" << endl;
    // }
    // else{
    //     cout << "The linked list is not a palindrome!" << endl;
    // }

    if(isPalindrome2(head) == 1){
        cout << "The linked list is a palindrome!" << endl;
    }
    else{
        cout << "The linked list is not a palindrome!" << endl;
    }

    return 0;
}