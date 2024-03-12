#include<bits/stdc++.h>
using namespace std;

class Test{
public:
    Test(){
        cout << "Default constructer called"<<endl;
    }

    ~Test(){
        cout << "Destructor called"<<endl;
    }
};

int main(){

    int Number;
    int number;
    int NUMBER;

    int string = 10;

    cout << string<<endl;

    int _$_$_$_$_ = 10;

    Test t1; // statically created

    cout << "Hi there"<<endl;
    
    Test *t2 = new Test; // dynamically created, destructor should be called manually;

   // delete t2;

    cout << "Hi there again"<<endl;

   delete t2;

return 0;
}