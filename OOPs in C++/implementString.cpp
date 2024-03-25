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
    String& operator=(const char* str) {
        delete[] buffer; // Free the old memory
        if (str) {
            length = strlen(str);
            buffer = new char[length + 1];
            strcpy(buffer, str);
        } else {
            buffer = nullptr;
            length = 0;
        }
        return *this; // Return a reference to the current object
    }

    // Method to get the string
    const char* get() const {
        return buffer;
    }

    // Method to append to the string
    String operator+(const char* str) const {
        String result;
        if (str) {
            int newLength = length + strlen(str);
            result.buffer = new char[newLength + 1];
            strcpy(result.buffer, buffer);
            strcat(result.buffer, str);
            result.length = newLength;
        }
        return result;
    }

    // Method to get the length of the string
    int getLength() const {
        return length;
    }
};

int main() {
    String str1;
    str1 = "Hello, ";
    String str2 = "World";
    String str3 = str1 + str2.get(); // Correctly appends "World" to "Hello, "
    std::cout << "String: " << str3.get() << std::endl; // Outputs: "Hello, World"
    std::cout << "Length: " << str3.getLength() << std::endl; // Outputs: 12

    String str4("How are you?");
    std::cout << "String: " << str4.get() << std::endl; // Outputs: "How are you?"
    std::cout << "Length: " << str4.getLength() << std::endl; // Outputs: 12

    return 0;
}
