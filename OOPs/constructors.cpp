#include <bits/stdc++.h>
using namespace std;

class Test
{

    int val;
    char a;

public:
    Test()
    {
        cout << "Constructor called" << endl;
    }
    ~Test()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Test t1;

    Test *t2 = new Test();

    delete t2;
}

// imagine we want to not let any user create an object of a class we can do it in 2 ways

/*

class Test
{
private:
    Test()
    {
        cout << "Constructor called" << endl;
    }
};

*/


// or

/*

class Test
{
    Test() = delete;
};

*/
