#include <iostream>

class Array {
private:
    int* data; // Pointer to the array
    int size; // Size of the array

public:
    // Constructor
    Array(int size) : size(size) {
        data = new int[size];
    }

    // Array(int size){
    //     this->size = size;
    //     data = new int[size];
    // }

    // Destructor
    ~Array() {
        delete[] data;
    }

    // Method to set the value of an element at a specific index
    void set(int index, int value) {
        if (index >= 0 && index < size) {
            data[index] = value;
        } else {
            std::cout << "Index out of bounds." << std::endl;
        }
    }

    // Method to get the value of an element at a specific index
    int get(int index) const {
        if (index >= 0 && index < size) {
            return data[index];
        } else {
            std::cout << "Index out of bounds." << std::endl;
            return -1; // Return -1 or any other error value
        }
    }

    // Method to print the array
    void print() const {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Create an array of size 5
    Array arr(5);

    // Set values in the array
    for (int i = 0; i < 5; ++i) {
        arr.set(i, i + 1);
    }

    // Print the array
    arr.print();

    // Access and print an element
    std::cout << "Element at index 2: " << arr.get(2) << std::endl;

    return 0;
}
