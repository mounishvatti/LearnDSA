#include <iostream>
using namespace std;

int factorial(int num) {
    if (num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int fact = factorial(n);
    int ans = fact; // Initialize ans with the factorial result

    while (ans % 10 == 0 && ans > 0) {
        ans /= 10; // Extracting the last non-zero digit
    }

    int last_digit = ans%10; 

    cout << "Last non-zero digit of " << n << "! is: " << last_digit << endl;

    return 0;
}
