#include <bits/stdc++.h> 
using namespace std; 

// driver code 
int main() 
{ 
    list<int> ls;
	int n = 12;
    // cout << "Enter an integer: ";
    // cin >> n; 
    bitset<32> binary(n);

    cout<<"Binary representation of "<< n <<" is : " << binary << endl;

    string str = binary.to_string();

    cout << str << endl;

    for (int i = 0; i < str.length()/2; i++){
        char temp = str[i];
        str[i] = str[str.length()-1-i];
        str[str.length()-1-i] = temp;
    }    

    cout << str << endl;

    cout << stoi(str,0,2);
    // bitset<32> binary1(str);
    // cout << binary1;

}
