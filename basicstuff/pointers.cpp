#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int a = 10;
    int b = 11;
    // pointer - {Stores the address of a variable}
    int *p_a = &a;
    int *p_b = &b;

    // double pointers - {Stores the address of a pointer}
    int **p_p_a = &p_a;
    int **p_p_b = &p_b;

    cout <<"Address of a: " << &a <<endl;
    cout <<"Value of p_a: " << p_a <<endl;
    cout <<"Value of a: " << a <<endl;
    cout <<"Value of *p_a: " << *p_a <<endl;

    cout<<endl;

    cout <<"Address of b: " << &b <<endl;
    cout <<"Value of p_b: " << p_b <<endl;
    cout << "Value of b: " << b << endl;
    cout <<"Value of *p_b: " << *p_b <<endl;

    cout << endl;

    // address of p_a is stored in p_p_a
    // address of p_b is stored in p_p_b
    cout <<"Address of p_a: " << &p_a<<endl;
    cout <<"Value of p_p_a: " << p_p_a <<endl;
    cout <<"Value of p_a: " << p_a <<endl;
    cout <<"Value of *p_p_a: " << *p_p_a <<endl;
    cout <<"Value of **p_p_a: " << **p_p_a <<endl;
    
    cout<<endl;

    // **p_p_a = a; **p_p_b = b;
    cout << **p_p_a <<" "<< **p_p_b<<endl;
    cout<<endl;

    //address of double pointers pp1 and pp2
    cout<< &p_p_a << " " << &p_p_b;

    return 0;
}