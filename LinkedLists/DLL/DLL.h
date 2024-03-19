class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node(){}

    Node(int data, Node* next, Node* prev){
        this->data = data;
        this->next = next;
        this->prev = prev;
    }

    Node(int data, Node* prev){
        this->data = data;
        this->next = nullptr;
        this->prev = prev;
    }

    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

};