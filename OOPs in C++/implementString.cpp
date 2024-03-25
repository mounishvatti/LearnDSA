#include <iostream>
#include <cstring> // For strlen, strcpy, and strcat

class String {
private:
    char* buffer; // Pointer to the character array
    int length; // Length of the string

public:
    // Constructor
    String() : buffer(nullptr), length(0) {}

    // Copy constructor
    String(const char* str) {
        if (str) {
            length = strlen(str);
            buffer = new char[length + 1];
            strcpy(buffer, str);
        } else {
            buffer = nullptr;
            length = 0;
        }
    }

    // Destructor
    ~String() {
        delete[] buffer;
    }

    // Method to set the string
    void set(const char* str) {
        delete[] buffer; // Free the old memory
        if (str) {
            length = strlen(str);
            buffer = new char[length + 1];
            strcpy(buffer, str);
        } else {
            buffer = nullptr;
            length = 0;
        }
    }

    // Method to get the string
    const char* get() const {
        return buffer;
    }

    // Method to append to the string
    void append(const char* str) {
        if (str) {
            int newLength = length + strlen(str);
            char* newBuffer = new char[newLength + 1];
            strcpy(newBuffer, buffer);
            strcat(newBuffer, str);
            delete[] buffer; // Free the old memory
            buffer = newBuffer;
            length = newLength;
        }
    }

    // Method to get the length of the string
    int getLength() const {
        return length;
    }
};

int main() {
    String str1;
    str1.set("Hello, ");
    str1.append("World!");
    std::cout << "String: " << str1.get() << std::endl;
    std::cout << "Length: " << str1.getLength() << std::endl;

    String str2("How are you?");
    std::cout << "String: " << str2.get() << std::endl;
    std::cout << "Length: " << str2.getLength() << std::endl;

    return 0;
}
