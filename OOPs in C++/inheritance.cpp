#include<bits/stdc++.h>
using namespace std;

class Human{
public:
    int age;
    int weight;
    int height;

protected:
    int val1;
    int val2;

private:
    string name;
    string sex;

public:
    void setAge(int age){
        this->age = age;
    }

    void setWeight(int weight){
        this->weight = weight;
    }

    void setHeight(int height){
        this->height = height;
    }

};

// single inheritance
class Male : private Human{  

    void setName(string name){
        //this->name = name;  this will be inaccessible;
    }

};

// multi-level inheritance

// class A{};

// class B:public A{};

// class C:public B{};


// hierarchical inheritance
class A{};

class B:public A{};

class C:public A{};

class D:public B{};

class E:public B{};



class Animal{
    public:
    int age;
    int weight;
    int height;

    void bark(){
        cout << "Barking Sound" << endl;
    }
};

class Homosapians{
    public:
    void speak(){
        cout << "Speaking sound" << endl;
    }
};

class exp1{
    public:

    void sex(){
        cout << "69" << endl;
    }
};

// multiple inheritance
class Hybrid: public Animal, public  Homosapians, public exp1 {

};  

// inheritance ambiguity
class Parent1{
    public:
    void print(){
        cout << "Parent1" << endl;
    }
};

class Parent2{
    public:
    void print(){
        cout << "Parent2" << endl;
    }
};

class child1:public Parent1, public Parent2{

};

// method overriding
class Parent{
    public:
    void speak(){
        cout << "I can speak" << endl;
    }
};

class child:public Parent{
    public:
    void speak(){
        cout << "I can't speak" << endl;
    }
};

int main(){

    // Male male1;   // object creation

    // male1.age = 28;
    // male1.weight = 65;
    // male1.height = 165;
    // male1.name = "Mounish";

    // //or

    // Male male2;
    // male2.setAge(21);
    // male2.setWeight(69);
    // male2.setHeight(167);
    // male2.setName("Rahul");

    // Hybrid obj1;
    // obj1.sex();

    child1 obj;
    obj.Parent1::print();
    obj.Parent2::print();

    child object;

    object.speak();
    return 0;
}