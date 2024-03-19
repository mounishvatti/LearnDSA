#include<iostream>
#include<vector>
#include "DLL.h"
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    Node* head = convertArr2Dll(arr);

    printList(head);

    Node *newHead = deleteHead(head);

    cout << endl;

    printList(newHead);
    Node* tail = Tail(head);
    cout << tail->data <<endl;
    Node* newTail = deleteTail(head);

    cout << endl;
    
    printList(newTail);

    return 0;
}