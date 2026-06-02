#include <iostream>
using namespace std;

/* 
    A friend class can access private and protected members of other classes in which it is declared as a friend. 
    It is sometimes useful to allow a particular class to access private and protected members of other classes.
    We can declare a friend class in C++ by using the friend keyword.
*/

class Test
{
private:
    int private_variable;

protected:
    int protected_variable;

public:
    Test()
    {
        private_variable = 10;
        protected_variable = 11;
    }

    friend class F;

    friend void friendFunction(Test& obj);
};

void friendFunction(Test &obj){
    cout << "Private Variable: " << obj.private_variable << endl;
    cout << "Protected Variable: " << obj.protected_variable << endl;
}

class F{
public:
    void display(Test &obj){
        cout << "The value of private variable is: " << obj.private_variable << endl;
        cout << "The value of protected variable is: " << obj.protected_variable << endl;
    }
};

int main()
{
    Test t;
    F fri;

    cout << endl;
    fri.display(t);
    cout << endl;
    friendFunction(t);
    cout << endl;

    return 0;
}