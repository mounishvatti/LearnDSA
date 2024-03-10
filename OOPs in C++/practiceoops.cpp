#include<bits/stdc++.h>
using namespace std;
class Test{
public:
    int val;
    string name;

    Test(int val, string name){
        this->val = val;
        this->name = name;
    }

    Test(){}

    void print(){
        cout << val << " " << name << endl;
    }
};
int main(){

    Test t1(10,"hello"); // static

    Test *t2 = new Test(10, "hi");

    t1.print();

    t2->print();

    (*t2).print();

    delete t2;

    return 0;
}