#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;
    int count;

public:
    // Constructor to initialize the queue
    Queue(int size) {
        arr = new int[size];
        capacity = size;
        front = 0;
        rear = -1;
        count = 0;
    }

    // Destructor to free memory allocated for the queue
    ~Queue() {
        delete[] arr;
    }

    // Add an element to the queue
    void push(int element) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = element;
        count++;
    }

    // Remove and return the front element of the queue
    int pop() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return -1;
        }
        int item = arr[front];
        front = (front + 1) % capacity;
        count--;
        return item;
    }

    // Return the front element of the queue without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    // Check if the queue is empty
    bool isEmpty() {
        return count == 0;
    }

    // Check if the queue is full
    bool isFull() {
        return count == capacity;
    }

    // Return the size of the queue
    int size() {
        return count;
    }

    // Empty the queue
    void clear() {
        front = 0;
        rear = -1;
        count = 0;
    }
};

// Example usage
int main() {
    Queue queue(5);

    queue.push(1);
    queue.push(2);
    queue.push(3);
    cout << "Front element is: " << queue.peek() << endl; // Output: 1
    cout << "Queue size is: " << queue.size() << endl;    // Output: 3

    cout << "Popped element is: " << queue.pop() << endl; // Output: 1
    cout << "Front element is: " << queue.peek() << endl;       // Output: 2

    queue.clear();
    cout << "Queue size after clearing: " << queue.size() << endl; // Output: 0
    cout << "Is queue empty? " << (queue.isEmpty() ? "Yes" : "No") << endl; // Output: Yes

    return 0;
}