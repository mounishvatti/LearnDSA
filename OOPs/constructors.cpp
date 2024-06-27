#include<bits/stdc++.h>
using namespace std;

class Test{

    int val;
    char a;

    public:
        Test(){
            cout << "Constructor called" << endl;
        }
        ~Test(){
            cout << "Destructor called" << endl;
        }
};

int main(){
    Test t1;

    Test* t2 = new Test();

    delete t2;
}