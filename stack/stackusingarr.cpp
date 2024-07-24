#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    // Constructor to initialize the stack
    Stack(int size) {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    // Destructor to free memory allocated for the stack
    ~Stack() {
        delete[] arr;
    }

    // Add an element to the stack
    void push(int element) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = element;
    }

    // Remove and return the top element of the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    // Return the top element of the stack without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Check if the stack is full
    bool isFull() {
        return top == capacity - 1;
    }

    // Return the size of the stack
    int size() {
        return top + 1;
    }

    // Empty the stack
    void clear() {
        top = -1;
    }
};

// Example usage
int main() {
    Stack stack(5);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout << "Top element is: " << stack.peek() << endl; // Output: 3
    cout << "Stack size is: " << stack.size() << endl;  // Output: 3

    cout << "Popped element is: " << stack.pop() << endl; // Output: 3
    cout << "Top element is: " << stack.peek() << endl;   // Output: 2

    stack.clear();
    cout << "Stack size after clearing: " << stack.size() << endl; // Output: 0
    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl; // Output: Yes

    return 0;
}