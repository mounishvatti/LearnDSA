#include <iostream>
using namespace std;
int main(){

    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << str.length() << endl;
    cout << str.size();
    cout << str[1];

    string name;
    cout << "Enter your full name: ";
    getline(cin, name);
    
    return 0;
}