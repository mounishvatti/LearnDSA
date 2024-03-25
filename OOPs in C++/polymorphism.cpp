#include<bits/stdc++.h>
using namespace std;
class Test{
    private:
    int val1;
    int val2;
    string name;

    public:
    Test(int val1){
        this->val1 = val1;
    }

    Test(int val1, string name){
        this->val1 = val1;
        this->name = name;
    }

    Test(int val1, int val2, string name){
        this->val1 = val1;
        this->val2 = val2;
        this->name = name;
    }

    Test(){}

    // function overloading
    public:
    void add(int val1, int val2){
        cout << val1 << " + " << val2  << " = " << val1+val2 << endl;
    }

    void add(int val1, int val2, string name){
        cout << "second add func"<<endl;
    }

    void print(){
        cout << val1 << " " << name << endl;
    }

    Test operator+ (Test &a){
        cout << a.val1-a.val2 << endl;
    }
};

int main(){
    Test t1(10,"Ashish");

    t1.print();

    Test t2(10,20,"Ashish");

    t2.add(10,20);

    t2.add(10,20,"ashish");

    Test t4(10);
    Test t5(5);

    t4 + t5;

    return 0;
}