#include <bits/stdc++.h>
using namespace std;

class Example{
    public: // padding and greed alignment
    int i; // 4bytes
    char c; // 1byte
    short s; // 2bytes 
    double d; // 8bytes
    long double l; // 16bytes
};

class Test{
public:
    string value;

    Test(){
        cout << "Default constructor called" << endl;
    }

    void setValue(string value){
        this->value = value;
    }

    void print(){
        cout << this->value << endl;
    } 

    ~Test(){
        cout << "Deconstructor Called" << endl;
    }
};

class Person{
public:
    string name;
    int age;

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

    void setName(string name){
        this->name = name;
    }

    void setAge(int age){
        this->age = age;
    }

    void displayPerson(){
        cout << this->name << endl;
        cout << this->age << endl;
    }
};

class Rectangle
{
    // properties
public:
    double width, height;

    Rectangle(double width, double height){ // parameterised constructor
        this->width = width;
        this->height = height;
    }

    // copy constructor internal working

    // Rectangle(Rectangle & temp){
    //     this->width = temp.width;
    //     this->height = temp.height;
    // }

    // methods
public:
    void setvalues(double width, double height)
    { // setter - to set the value
        this->width = width;
        this->height = height;
    }

    double getArea()
    { // getter - to fetch
        return width * height;
    }

    double getPerimeter()
    {
        return 2 * (width + height);
    }
    void display(){
        double a = this->getArea();
        double p = this->getPerimeter();

        cout << "area: "<< a << "\n" << "perimeter: " << p << endl;
    }
};

/*
    Access modifiers:
    1. public - accessible throughout the program (default)
    2. private - accessible within the class
    3. protected -
*/



int main()
{

    // creation of object statically
    Rectangle rect(3,5);
    // rect.setvalues(3.56,5.7);

    rect.width = 3;
    rect.height = 5;

    // creation of an object dynamically
    Rectangle *rect2 = new Rectangle(4.54, 8.22);

    // (*rect2).setvalues(4.54, 8.22); 

    (*rect2).width = 4.54;
    (*rect2).height = 8.22;

    // rect2->setvalues(4.54, 8.22); 

    cout << "Area of rectangle is : " << rect.getArea() << endl;
    cout << "Perimeter of rectangle is : " << rect.getPerimeter() << endl;
    // cout << "type: " << typeid(d).name() << endl;
    cout << "size of rect: " << sizeof(rect) << endl;

    cout << "Area of rectangle is : " << (*rect2).getArea() << endl;
    cout << "Perimeter of rectangle is : " << (*rect2).getPerimeter() << endl;
    // cout << "type: " << typeid(d).name() << endl;
    cout << "size of rect: " << sizeof(rect) << endl;

    (*rect2).display();

    Example e;
    cout << "size of class Example: " << sizeof(e) << endl;

    delete rect2;


    // copy constructor - example 

    Rectangle *rect3 = new Rectangle(3.4, 5.6); // dynamic allocation

    Rectangle *rect4 = new Rectangle(*rect3); // copy constructor called here

    cout << "rect3: ";
    rect3->display();

    cout << endl;

    cout << "rect4: "; 
    rect4->display();

    Rectangle rect5(3.4, 5.6);

    Rectangle rect6(rect5);

    delete rect3;
    delete rect4;

    // default copy constructor does shallow copying
    // i.e., both objects share the same data member values

    // shallow copy

    cout << "----- Shallow copy -----" << endl;

    Person p("Suresh", 19); 

    Person* q = &p;

    p.displayPerson();
    q->displayPerson();

    p.setName("Ramesh");

    p.displayPerson();
    q->displayPerson();

    // deep copy constructor 

    cout << "----- Deep copy -----" << endl;

    // static

    Person person1("Rahul", 12);

    Person person2(person1);

    person1.displayPerson();

    person2.displayPerson();

    person1.setName("Sash");

    person1.displayPerson();

    person2.displayPerson();


    // deep copy constructor dynamic

    Person *p1 = new Person("Ravi", 10);

    p1->displayPerson();

    Person *p2 = new Person(*p1); // calling default copy constructor

    p2->displayPerson();

    p1->setName("Mounish");

    p1->displayPerson();

    p2->displayPerson();


    // copy assignment operator - values of one object gets assigned to the other object

    cout << "\n\n----- Copy Assignment Operator -----\n";

    p1->displayPerson();

    p2->displayPerson();

    p2->setName("Lana");

    p1 = p2;

    p1->displayPerson();

    p2->displayPerson();

    // destrutor -  de-allocates memory

    // there is a default destructor which is already created when a class is created in C++

    // static
    Test t1; // deconstructor called automatically
    
    // dynamic 
    Test *t2 = new Test(); // we have to manully call the desconstructor

    // to manually call the destructor we delete the object which was created dynamically

    delete t2;

    return 0;

}