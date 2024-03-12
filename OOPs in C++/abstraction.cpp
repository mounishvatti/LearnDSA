// pure virtual & abstraction

#include<iostream>
using namespace std;

class Test{
public:
    int val1;
    int val2;

    virtual void eval() = 0;
    virtual void eval2() = 0;
};

class smallTest : public Test{
public:
    void eval(){
        cout << "Hi there this is eval1 of small Test" << endl;
    }

    void eval2(){
        cout << "Hi there this is eval2 of small Test" << endl;
    }
};

int main(){

    smallTest *st = new smallTest();

    st->eval();
    st->eval2();

    return 0;
}