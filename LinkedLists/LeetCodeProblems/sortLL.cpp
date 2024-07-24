// sort a Linked list of 0's 1's and 2's

#include<bits/stdc++.h>
#include "LinkedList.h"
using namespace std;

// extreme brute force method
/* 

- We can have count_0, count_1 & count_2 and initialise them to 0;
- Then we can traverse the linked list and count the number of 0's, 1's and 2's
- Then we can traverse the linked list again and replace the elements with 0's, 1's and 2's
according to the count of 0's, 1's and 2's

*/

// approach - 1
Node* sortLL(Node* head){ // TC: O(2N) SC: O(N)
    if(head==NULL) return nullptr;

    int count_0, count_1, count_2 = 0;
    Node* temp = head;

    while(temp!=NULL){

        if(temp->data == 0) count_0++;
        else if(temp->data == 1) count_1++;
        else count_2++;

        temp = temp->next;
    }

    temp = head;

    while(temp!=NULL){
        if (count_0>0){
            temp->data = 0;
            count_0--;
        }
        else if(count_1>0){
            temp->data = 1;
            count_1--;
        }
        else{
            temp->data = 2;
            count_2--;
        } 

        temp = temp->next;
    }

    return head;
}

// approach - 2

// 3 dummy nodes for 0, 1 and 2 respectively

Node* sortLL2(Node* head){
    if(head==NULL || head->next == NULL) return head;

    Node* temp = head;

    Node* zeroDummyHead = new Node(-1);
    Node* oneDummyHead = new Node(-1);
    Node* twoDummyHead = new Node(-1);

    Node* zero = zeroDummyHead;
    Node* one = oneDummyHead;
    Node* two = twoDummyHead;

    while(temp){
        if(temp->data == 0){
          zero->next = temp;
          zero = temp; 
        } 
        else if (temp->data == 1){
            one->next = temp;
            one = temp;
        } 
        else{
            two->next = temp;
            two = temp;
        }

        temp = temp->next;
    }

    zero->next = (oneDummyHead->next) ? oneDummyHead->next : twoDummyHead->next;
    one->next = twoDummyHead->next;
    two->next = nullptr;

    head = zeroDummyHead->next;

    delete zeroDummyHead;
    delete oneDummyHead;
    delete twoDummyHead;


    return head;
}


int main(){
    vector<int> arr = {1, 2, 2, 1, 0, 0, 2, 1, 0, 2, 1};

    //considering that I already converted this array into a linked list
}